#!/usr/bin/env python3
"""
Speech receiving + transcription example.

Subscribes to `/agent/process_audio_output` (the robot's noise-suppressed
microphone audio, already split into speech segments by the robot's VAD).
For every complete speech segment it:
  1. saves a .wav file you can listen to while the node runs (16 kHz,
     16-bit, mono) in a temporary folder, deleted when the node exits
  2. transcribes it with Whisper on the GPU
  3. publishes the text on `/audio/transcription` (std_msgs/String),
     visible e.g. in Foxglove (Raw Messages panel)

Usage:
  ros2 run py_examples audio_transcriber
  ros2 run py_examples audio_transcriber --ros-args -p model:=base -p language:=en

Parameters (--ros-args -p name:=value):
  stream_id   — 1 built-in mic, 2 external mic, 0 both (default 1)
  model       — Whisper model: tiny|base|small|medium (default small).
                Downloaded the first time into ~/.cache/whisper
  language    — spoken language, e.g. it, en (default it)

VAD state description:
- 1: Speech start
- 2: Speech in progress
- 3: Speech end
"""

import os
import shutil
import tempfile
import wave
from collections import defaultdict
from datetime import datetime
from typing import Dict, List

import numpy as np
import rclpy
import whisper
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy
from std_msgs.msg import String
from aimdk_msgs.msg import ProcessedAudioOutput, AudioVadStateType

# Audio format of /agent/process_audio_output
SAMPLE_RATE = 16000
SAMPLE_WIDTH = 2  # bytes, signed 16-bit little endian
CHANNELS = 1
# Segments shorter than this are ignored (clicks, noise)
MIN_DURATION = 0.3  # s


class AudioTranscriber(Node):
    def __init__(self):
        super().__init__('audio_transcriber')

        self.declare_parameter('stream_id', 1)
        self.declare_parameter('model', 'small')
        self.declare_parameter('language', 'it')
        self.stream_id = self.get_parameter('stream_id').value
        model_name = self.get_parameter('model').value
        self.language = self.get_parameter('language').value
        # Temporary folder for the .wav files, removed in destroy_node()
        self.output_dir = tempfile.mkdtemp(prefix='audio_transcriber_')

        # Audio buffers, stored separately by stream_id
        self.audio_buffers: Dict[int, List[bytes]] = defaultdict(list)
        self.recording_state: Dict[int, bool] = defaultdict(bool)

        self.stream_names = {1: 'internal_mic', 2: 'external_mic'}

        # Load Whisper on the GPU
        self.get_logger().info(f'Loading Whisper model "{model_name}"...')
        self.model = whisper.load_model(model_name, device='cuda')
        self.get_logger().info(f'✅ Whisper "{model_name}" loaded on GPU')

        # Note: deep queue to avoid missing data in a burst at start of VAD,
        # and while a segment is being transcribed.
        qos = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=500,
            reliability=QoSReliabilityPolicy.BEST_EFFORT
        )
        self.subscription = self.create_subscription(
            ProcessedAudioOutput, '/agent/process_audio_output',
            self.audio_callback, qos)
        self.pub = self.create_publisher(String, '/audio/transcription', 10)

        self.get_logger().info(
            f'🎤 Listening (stream_id={self.stream_id}, language={self.language}), '
            f'wav files in {self.output_dir}. Press Ctrl+C to exit...')

    def audio_callback(self, msg: ProcessedAudioOutput):
        stream_id = msg.stream_id
        if self.stream_id and stream_id != self.stream_id:
            return
        vad_state = msg.audio_vad_state.value
        audio_data = bytes(msg.audio_data)

        # Speech start: begin a new segment
        if vad_state == AudioVadStateType.AUDIO_VAD_STATE_BEGIN:
            self.get_logger().info('🎤 Speech start detected')
            self.audio_buffers[stream_id].clear()
            self.recording_state[stream_id] = True
            if audio_data:
                self.audio_buffers[stream_id].append(audio_data)

        # Speech in progress: keep accumulating
        elif vad_state == AudioVadStateType.AUDIO_VAD_STATE_PROCESSING:
            if self.recording_state[stream_id] and audio_data:
                self.audio_buffers[stream_id].append(audio_data)

        # Speech end: save and transcribe the whole segment
        elif vad_state == AudioVadStateType.AUDIO_VAD_STATE_END:
            if self.recording_state[stream_id]:
                if audio_data:
                    self.audio_buffers[stream_id].append(audio_data)
                self.process_segment(stream_id)
            self.recording_state[stream_id] = False

    def process_segment(self, stream_id: int):
        pcm = b''.join(self.audio_buffers[stream_id])
        self.audio_buffers[stream_id].clear()
        duration = len(pcm) / (SAMPLE_RATE * SAMPLE_WIDTH * CHANNELS)
        if duration < MIN_DURATION:
            self.get_logger().info(f'Segment too short ({duration:.2f} s), skipped')
            return

        # 1. Save as WAV (playable with any audio player)
        timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
        name = self.stream_names.get(stream_id, f'stream_{stream_id}')
        path = os.path.join(self.output_dir, f'{name}_{timestamp}.wav')
        with wave.open(path, 'wb') as f:
            f.setnchannels(CHANNELS)
            f.setsampwidth(SAMPLE_WIDTH)
            f.setframerate(SAMPLE_RATE)
            f.writeframes(pcm)
        self.get_logger().info(f'💾 Saved {path} ({duration:.2f} s)')

        # 2. Transcribe: Whisper wants float32 samples in [-1, 1] at 16 kHz
        audio = np.frombuffer(pcm, np.int16).astype(np.float32) / 32768.0
        result = self.model.transcribe(audio, language=self.language, fp16=True)
        text = result['text'].strip()
        self.get_logger().info(f'📝 "{text}"')

        # 3. Publish the text
        self.pub.publish(String(data=text))

    def destroy_node(self):
        # Delete the .wav files saved during this run
        shutil.rmtree(self.output_dir, ignore_errors=True)
        # print, not the ROS logger: at this point ROS may already be shut down
        print(f'🗑️  Removed {self.output_dir}')
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


if __name__ == '__main__':
    main()
