#!/usr/bin/env python3
"""
Always-on Italian speech transcriber (Whisper ONNX + Silero VAD ONNX).

Subscribes directly to `/aima/hal/audio/capture` (the robot's continuous HAL
microphone stream, active immediately at boot with NO wake word required).
Uses Silero `VADIterator` to detect speech start/end in real time, saves a
temporary .wav file, transcribes with Whisper on GPU, and publishes the text
on `/audio/transcription` (std_msgs/String).

Whisper runs with ONNX Runtime on the Jetson GPU:
  - first start: the Hugging Face model is exported to ONNX with optimum and
    saved in model_dir (a few minutes);
  - provider "tensorrt": TensorRT (fp16) compiles the ONNX graphs into engines
    for this GPU; the engines are cached in model_dir/trt_cache, so only the
    first start is slow (several minutes); parts TensorRT cannot run fall back
    to CUDA;
  - provider "cuda": ONNX Runtime CUDA kernels, no engine build.
Before Whisper, Silero checks the whole sentence (get_speech_timestamps): if
it contains no speech the text is empty and Whisper is not called.

Usage:
  ros2 run py_examples audio_transcriber
  ros2 run py_examples audio_transcriber --ros-args -p provider:=cuda
  ros2 run py_examples audio_transcriber --ros-args -p stream_id:=1

Parameters (--ros-args -p name:=value):
  stream_id     — 0 all streams, 1 built-in mic, 2 external mic (default: 0)
  model         — Hugging Face Whisper model ID (default: openai/whisper-large-v3-turbo)
  model_dir     — Local directory for the ONNX model (default: ~/aimdk/models/whisper/<model>-onnx)
  provider      — ONNX Runtime provider: tensorrt or cuda (default: tensorrt)
  language      — Spoken language: it|italian|en|english (default: it)
  vad_threshold — Silero VAD speech probability threshold (default: 0.7)
  min_silence_ms— Silence duration in ms to close a sentence (default: 600)
  warmup        — Number of 10s warmup runs at startup (default: 3)
"""

import logging
import os
import shutil
import tempfile
import time
import wave
from collections import defaultdict, deque
from dataclasses import dataclass
from datetime import datetime
from pathlib import Path
from typing import Deque, Dict, List, Optional, Tuple, Union

import numpy as np
import onnx
import onnxruntime as ort
import rclpy
import silero_vad
import torch
from optimum.exporters.onnx import onnx_export_from_model
from optimum.onnxruntime.modeling_seq2seq import ORTModelForWhisper
from rclpy.node import Node
from rclpy.qos import QoSHistoryPolicy, QoSProfile, QoSReliabilityPolicy
from silero_vad import VADIterator, get_speech_timestamps
from silero_vad.utils_vad import OnnxWrapper
from std_msgs.msg import String
from transformers import AutoConfig, AutoModelForSpeechSeq2Seq, AutoProcessor, GenerationConfig
from transformers import logging as transformers_logging

from aimdk_msgs.msg import AudioCapture

# Only errors from ONNX Runtime / TensorRT and transformers: their warnings here
# (int64 input_ids, generation_config defaults, attention mask, logits
# processors) are expected and harmless.
ort.set_default_logger_severity(3)
transformers_logging.set_verbosity_error()

WORKSPACE = Path(os.environ.get("AIMDK_WORKSPACE", Path.home() / "aimdk"))


def workspace_path(path: Union[str, Path]) -> Path:
    p = Path(path).expanduser()
    return p if p.is_absolute() else WORKSPACE / p


@dataclass
class WhisperConfig:
    model: str = "openai/whisper-large-v3-turbo"
    model_dir: Optional[str] = None
    provider: str = "tensorrt"
    language: str = "it"
    vad_threshold: float = 0.7
    min_silence_ms: int = 600
    warmup: int = 3


SAMPLING_RATE = 16000
SAMPLE_WIDTH = 2  # bytes, signed 16-bit little endian
CHANNELS = 1
MIN_DURATION = 0.3  # s
VAD_WINDOW_SAMPLES = 512  # Silero VAD requires 512 samples (32 ms) at 16 kHz
MAX_TOKENS = 448  # Whisper decoder max length (TensorRT shape profile)
ONNX_FILES = ("encoder_model.onnx", "decoder_model.onnx", "decoder_with_past_model.onnx")

LANGUAGES = {"italian": "it", "english": "en"}


def language_code(language: str) -> str:
    language = language.lower()
    if language in LANGUAGES.values():
        return language
    if language not in LANGUAGES:
        raise ValueError(
            f"{language} not available. Languages: {list(LANGUAGES)} or {list(LANGUAGES.values())}"
        )
    return LANGUAGES[language]


def default_model_dir(cfg: WhisperConfig) -> Path:
    name = cfg.model.rstrip("/").split("/")[-1]
    return WORKSPACE / "models" / "whisper" / f"{name}-onnx"


def trt_shape_profiles(path: Path) -> Tuple[str, str, str]:
    """TensorRT min/opt/max input shapes of a Whisper ONNX graph (batch 1).

    With fixed ranges TensorRT builds each engine once, instead of rebuilding it
    every time the decoder sees a longer sequence.
    """
    graph = onnx.load(str(path), load_external_data=False).graph
    with_past = any(i.name.startswith("past_key_values") for i in graph.input)
    shapes = ([], [], [])
    for inp in graph.input:
        name = inp.name
        dims = [d.dim_value for d in inp.type.tensor_type.shape.dim]
        if name == "input_features":  # 30 s of audio, always the same shape
            lo = opt = hi = [1, 128, 3000]
        elif name == "input_ids":
            lo, opt, hi = ([1, 1],) * 3 if with_past else ([1, 1], [1, 4], [1, MAX_TOKENS])
        elif name == "encoder_hidden_states":
            lo = opt = hi = [1, 1500, dims[2]]
        elif ".encoder." in name:  # cross-attention cache: fixed length
            lo = opt = hi = [1, dims[1], 1500, dims[3]]
        elif ".decoder." in name:  # self-attention cache: grows with every token
            lo, opt, hi = ([1, dims[1], n, dims[3]] for n in (1, 64, MAX_TOKENS))
        else:
            raise ValueError(f"Unexpected Whisper ONNX input: {name}")
        for out, shape in zip(shapes, (lo, opt, hi)):
            out.append(f"{name}:{'x'.join(map(str, shape))}")
    return tuple(",".join(s) for s in shapes)


class WhisperTranscriber:
    """Whisper (ONNX Runtime, TensorRT/CUDA) with Silero VAD (ONNX, CPU)."""

    def __init__(self, cfg: WhisperConfig, logger=None):
        self.cfg = cfg
        self.log = logger or logging.getLogger("whisper")
        self.model_id = cfg.model
        self.model_path = (
            workspace_path(cfg.model_dir) if cfg.model_dir else default_model_dir(cfg)
        )
        self.language = language_code(cfg.language)
        self.vad_threshold = cfg.vad_threshold
        if cfg.provider not in ("tensorrt", "cuda"):
            raise ValueError(f"provider must be tensorrt or cuda, not {cfg.provider}")
        self.provider = cfg.provider

        self.log.info(
            f"Loading Whisper {self.model_id} from {self.model_path} (provider={self.provider})"
        )
        self._export_if_missing()
        self.processor = AutoProcessor.from_pretrained(self.model_path)
        self._load_model()
        self._load_vad_model()

        for _ in range(cfg.warmup):
            self.predict(np.random.rand(SAMPLING_RATE * 10).astype(np.float32) * 0.01)
        self.log.info("ASR model loaded")

    def _export_if_missing(self):
        if all((self.model_path / f).exists() for f in ONNX_FILES):
            return
        self.log.info(
            f"First start: downloading {self.model_id} and exporting it to ONNX fp16 "
            f"in {self.model_path} (a few minutes)..."
        )
        # Exported in fp16 on the GPU: an fp32 export on the CPU needs more memory
        # than the robot has free. "eager" attention: the SDPA one leaves fp32 casts
        # in the fp16 decoder graph, which then cannot be loaded.
        model = AutoModelForSpeechSeq2Seq.from_pretrained(
            self.model_id,
            torch_dtype=torch.float16,
            low_cpu_mem_usage=True,
            attn_implementation="eager",
        )
        model.to("cuda").eval()
        self.model_path.mkdir(exist_ok=True, parents=True)
        # Separate decoder / decoder_with_past files (no_post_process), no validation
        # (it would load the PyTorch and the ONNX model at the same time).
        onnx_export_from_model(
            model,
            self.model_path,
            task="automatic-speech-recognition-with-past",
            device="cuda",
            no_post_process=True,
            do_validation=False,
        )
        AutoProcessor.from_pretrained(self.model_id).save_pretrained(self.model_path)
        del model
        torch.cuda.empty_cache()
        # Weights in a separate <file>.onnx.data: with the weights inside the graph,
        # ONNX Runtime keeps extra copies of them while TensorRT builds the engine,
        # and the build runs out of memory on the robot.
        for name in ONNX_FILES:
            path = self.model_path / name
            graph = onnx.load(str(path))
            onnx.save_model(
                graph, str(path), save_as_external_data=True, location=f"{name}.data"
            )
            del graph

    def _session(self, path: Path) -> ort.InferenceSession:
        cuda = ("CUDAExecutionProvider", {"device_id": 0})
        providers = [cuda]
        if self.provider == "tensorrt":
            cache = self.model_path / "trt_cache"
            cache.mkdir(exist_ok=True)
            lo, opt, hi = trt_shape_profiles(path)
            trt = {
                "device_id": 0,
                "trt_fp16_enable": True,
                "trt_engine_cache_enable": True,
                "trt_engine_cache_path": str(cache),
                "trt_timing_cache_enable": True,
                "trt_timing_cache_path": str(cache),
                "trt_max_workspace_size": 2 * 1024**3,
                "trt_profile_min_shapes": lo,
                "trt_profile_opt_shapes": opt,
                "trt_profile_max_shapes": hi,
            }
            providers = [("TensorrtExecutionProvider", trt), cuda]
        return ort.InferenceSession(
            str(path),
            providers=[name for name, _ in providers],
            provider_options=[options for _, options in providers],
        )

    def _load_model(self):
        if self.provider == "tensorrt" and not any((self.model_path / "trt_cache").glob("*.engine")):
            self.log.info("Building the TensorRT engines (first start only, several minutes)...")
        encoder, decoder, decoder_with_past = (self._session(self.model_path / f) for f in ONNX_FILES)
        self.model = ORTModelForWhisper(
            config=AutoConfig.from_pretrained(self.model_path),
            encoder_session=encoder,
            decoder_session=decoder,
            decoder_with_past_session=decoder_with_past,
            generation_config=GenerationConfig.from_pretrained(self.model_path),
            use_io_binding=True,
        )

    @staticmethod
    def _silero_onnx() -> OnnxWrapper:
        # silero_vad.onnx ships with the silero-vad package: nothing to download.
        # Small model on CPU; every instance keeps its own state.
        path = Path(silero_vad.__file__).parent / "data" / "silero_vad.onnx"
        return OnnxWrapper(str(path), force_onnx_cpu=True)

    def _load_vad_model(self):
        self.vad_model = self._silero_onnx()
        get_speech_timestamps(
            torch.zeros(SAMPLING_RATE * 5, dtype=torch.float32), self.vad_model
        )
        self.log.info("Silero VAD (ONNX) loaded")

    def has_speech(self, audio: np.ndarray) -> bool:
        timestamps = get_speech_timestamps(
            torch.from_numpy(audio),
            self.vad_model,
            threshold=self.vad_threshold,
            sampling_rate=SAMPLING_RATE,
        )
        self.vad_model.reset_states()
        return bool(timestamps)

    def create_vad_iterator(self) -> VADIterator:
        return VADIterator(
            self._silero_onnx(),
            threshold=self.vad_threshold,
            sampling_rate=SAMPLING_RATE,
            min_silence_duration_ms=self.cfg.min_silence_ms,
            speech_pad_ms=100,
        )

    def predict(self, audio: np.ndarray) -> str:
        # The fp16 ONNX encoder takes fp16 features, already on the GPU (IO binding).
        input_features = self.processor(
            audio, return_tensors="pt", sampling_rate=SAMPLING_RATE
        ).input_features.to("cuda", torch.float16)
        outputs = self.model.generate(
            input_features, task="transcribe", language=self.language
        )
        return self.processor.batch_decode(outputs, skip_special_tokens=True)[0]


class AudioTranscriber(Node):
    def __init__(self):
        super().__init__("audio_transcriber")

        self.declare_parameter("stream_id", 0)
        self.declare_parameter("model", "openai/whisper-large-v3-turbo")
        self.declare_parameter("model_dir", "")
        self.declare_parameter("provider", "tensorrt")
        self.declare_parameter("language", "it")
        self.declare_parameter("vad_threshold", 0.7)
        self.declare_parameter("min_silence_ms", 600)
        self.declare_parameter("warmup", 3)

        self.stream_id = self.get_parameter("stream_id").value
        model_dir_param = self.get_parameter("model_dir").value

        cfg = WhisperConfig(
            model=self.get_parameter("model").value,
            model_dir=model_dir_param if model_dir_param else None,
            provider=self.get_parameter("provider").value,
            language=self.get_parameter("language").value,
            vad_threshold=float(self.get_parameter("vad_threshold").value),
            min_silence_ms=int(self.get_parameter("min_silence_ms").value),
            warmup=int(self.get_parameter("warmup").value),
        )

        self.output_dir = tempfile.mkdtemp(prefix="audio_transcriber_")
        self.stream_names = {0: "internal_mic", 1: "external_mic"}
        self.seen_streams = set()

        # Per-stream streaming VAD state
        self.byte_remainders: Dict[int, bytearray] = defaultdict(bytearray)
        self.pre_roll: Dict[int, Deque[bytes]] = defaultdict(lambda: deque(maxlen=12))
        self.speech_buffers: Dict[int, List[bytes]] = defaultdict(list)
        self.is_speaking: Dict[int, bool] = defaultdict(bool)
        self.vad_iterators: Dict[int, VADIterator] = {}

        self.transcriber = WhisperTranscriber(cfg, logger=self.get_logger())

        qos = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=500,
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
        )
        self.subscription = self.create_subscription(
            AudioCapture,
            "/aima/hal/audio/capture",
            self.capture_callback,
            qos,
        )
        self.pub = self.create_publisher(String, "/audio/transcription", 10)

        self.get_logger().info(
            f"🎤 Listening on /aima/hal/audio/capture (stream_id={self.stream_id}, "
            f"language={cfg.language}), wav files in {self.output_dir}. Press Ctrl+C to exit..."
        )

    def _extract_streams(self, msg: AudioCapture) -> List[Tuple[int, bytes]]:
        """Extracts (stream_id, pcm_bytes) from AudioCapture across AimDK SDK variants."""
        extracted = []
        if hasattr(msg, "streams"):
            for idx, s in enumerate(msg.streams):
                sid = getattr(s, "stream_id", idx + 1)
                raw = b""
                if hasattr(s, "audio_data"):
                    raw = bytes(s.audio_data)
                elif hasattr(s, "data"):
                    raw = bytes(s.data.data) if hasattr(s.data, "data") else bytes(s.data)
                if raw:
                    extracted.append((sid, raw))
        elif hasattr(msg, "audio_data"):
            sid = getattr(msg, "stream_id", 1)
            extracted.append((sid, bytes(msg.audio_data)))
        elif hasattr(msg, "data"):
            sid = getattr(msg, "stream_id", 1)
            raw = bytes(msg.data.data) if hasattr(msg.data, "data") else bytes(msg.data)
            # The HAL stream interleaves mic_channels microphones + ref_channels
            # reference (playback) channels, S16LE: keep only the first microphone.
            channels = getattr(msg, "mic_channels", 1) + getattr(msg, "ref_channels", 0)
            if channels > 1:
                raw = np.frombuffer(raw, np.int16).reshape(-1, channels)[:, 0].tobytes()
            extracted.append((sid, raw))
        return extracted

    def capture_callback(self, msg: AudioCapture):
        for sid, pcm_bytes in self._extract_streams(msg):
            if sid not in self.seen_streams:
                self.seen_streams.add(sid)
                self.get_logger().info(
                    f"📡 Audio stream detected: stream_id={sid} ({len(pcm_bytes)} bytes/packet)"
                )

            if self.stream_id and sid != self.stream_id:
                continue

            if sid not in self.vad_iterators:
                self.vad_iterators[sid] = self.transcriber.create_vad_iterator()

            self._process_pcm_stream(sid, pcm_bytes)

    def _process_pcm_stream(self, sid: int, new_bytes: bytes):
        buf = self.byte_remainders[sid]
        buf.extend(new_bytes)

        chunk_bytes = VAD_WINDOW_SAMPLES * SAMPLE_WIDTH  # 512 * 2 = 1024 bytes (32 ms)
        vad_it = self.vad_iterators[sid]

        while len(buf) >= chunk_bytes:
            raw_chunk = bytes(buf[:chunk_bytes])
            del buf[:chunk_bytes]

            samples = np.frombuffer(raw_chunk, dtype=np.int16).astype(np.float32) / 32768.0
            vad_event = vad_it(torch.from_numpy(samples))

            if vad_event is not None:
                if "start" in vad_event and not self.is_speaking[sid]:
                    self.get_logger().info(f"🎤 Speech start detected (stream_id={sid})")
                    self.is_speaking[sid] = True
                    self.speech_buffers[sid] = list(self.pre_roll[sid])
                    self.speech_buffers[sid].append(raw_chunk)
                    self.pre_roll[sid].clear()
                    continue

                if "end" in vad_event and self.is_speaking[sid]:
                    self.speech_buffers[sid].append(raw_chunk)
                    self.is_speaking[sid] = False
                    self.process_segment(sid)
                    vad_it.reset_states()
                    continue

            if self.is_speaking[sid]:
                self.speech_buffers[sid].append(raw_chunk)
                # Safety cap: flush after 25 seconds of continuous speech
                if len(self.speech_buffers[sid]) * 0.032 >= 25.0:
                    self.is_speaking[sid] = False
                    self.process_segment(sid)
                    vad_it.reset_states()
            else:
                self.pre_roll[sid].append(raw_chunk)

    def process_segment(self, stream_id: int):
        pcm = b"".join(self.speech_buffers[stream_id])
        self.speech_buffers[stream_id].clear()
        duration = len(pcm) / (SAMPLING_RATE * SAMPLE_WIDTH * CHANNELS)
        if duration < MIN_DURATION:
            self.get_logger().info(f"Segment too short ({duration:.2f} s), skipped")
            return

        # 1. Save as WAV
        timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
        name = self.stream_names.get(stream_id, f"stream_{stream_id}")
        path = os.path.join(self.output_dir, f"{name}_{timestamp}.wav")
        with wave.open(path, "wb") as f:
            f.setnchannels(CHANNELS)
            f.setsampwidth(SAMPLE_WIDTH)
            f.setframerate(SAMPLING_RATE)
            f.writeframes(pcm)
        self.get_logger().info(f"💾 Saved {path} ({duration:.2f} s)")

        # 2. Check the whole sentence with Silero, then transcribe with Whisper on GPU
        audio = np.frombuffer(pcm, np.int16).astype(np.float32) / 32768.0
        t0 = time.perf_counter()
        speech = self.transcriber.has_speech(audio)
        vad_s = round(time.perf_counter() - t0, 3)
        if not speech:
            self.get_logger().info(f"No speech in the segment (vad={vad_s}s), skipped")
            return
        t0 = time.perf_counter()
        text = self.transcriber.predict(audio).strip()
        asr_s = round(time.perf_counter() - t0, 3)
        self.get_logger().info(f'📝 "{text}" (vad={vad_s}s, asr={asr_s}s)')

        # 3. Publish text
        if text:
            self.pub.publish(String(data=text))

    def destroy_node(self):
        shutil.rmtree(self.output_dir, ignore_errors=True)
        print(f"🗑️  Removed {self.output_dir}")
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = AudioTranscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()