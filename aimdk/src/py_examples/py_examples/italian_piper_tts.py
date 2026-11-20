#!/usr/bin/env python3
import os
import threading
import time
import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from std_msgs.msg import String
import numpy as np
from scipy.signal import resample_poly
from piper.voice import PiperVoice

from aimdk_msgs.srv import RequestAudioFocus, AbandonAudioFocus
from aimdk_msgs.msg import AudioPlayback, AudioInfo, AudioData, CommonRequest


class ItalianPiperTtsNode(Node):
    def __init__(self):
        super().__init__('italian_piper_tts')

        default_model = os.path.expanduser(
            '~/aimdk/models/piper/it_IT-paola-medium.onnx'
        )
        self.declare_parameter('model_path', default_model)
        model_path = self.get_parameter('model_path').value

        self.get_logger().info(f'Caricamento modello Piper: {model_path}...')
        self.voice = PiperVoice.load(model_path)
        self.model_rate = self.voice.config.sample_rate
        # The robot plays at 16 kHz mono: resample here instead of in hal_audio
        self.sample_rate = 16000
        self.channels = 1
        self.get_logger().info(
            f'Modello pronto ({self.model_rate} Hz -> {self.sample_rate} Hz)')

        self.pkg_name = 'italian_piper_tts'
        self.priority = 5
        self.priority_weight = 50
        self.token_id = 1

        self.cb_group = ReentrantCallbackGroup()

        self.req_focus_cli = self.create_client(
            RequestAudioFocus,
            '/aimdk_5Fmsgs/srv/RequestAudioFocus',
            callback_group=self.cb_group,
        )
        self.rel_focus_cli = self.create_client(
            AbandonAudioFocus,
            '/aimdk_5Fmsgs/srv/AbandonAudioFocus',
            callback_group=self.cb_group,
        )

        self.audio_pub = self.create_publisher(
            AudioPlayback, '/aima/hal/audio/playback', 10
        )

        self.sub = self.create_subscription(
            String,
            '/italian_tts/say',
            self.on_text_received,
            10,
            callback_group=self.cb_group,
        )

    def _set_focus(self, acquire: bool):
        client = self.req_focus_cli if acquire else self.rel_focus_cli
        if not client.wait_for_service(timeout_sec=2.0):
            self.get_logger().warn('Servizio AudioFocus non disponibile')
            return

        req = (
            RequestAudioFocus.Request()
            if acquire
            else AbandonAudioFocus.Request()
        )
        req.request = CommonRequest()
        req.focus_requester.pkg_name = self.pkg_name
        req.focus_requester.priority = self.priority
        req.focus_requester.priority_weight = self.priority_weight

        # retry as remote peer is NOT handled well by ROS (as in play_audio_stream)
        for i in range(8):
            done_event = threading.Event()
            future = client.call_async(req)
            future.add_done_callback(lambda _: done_event.set())
            if done_event.wait(timeout=0.25):
                return
        self.get_logger().warn('AudioFocus: nessuna risposta dal servizio')

    def synthesize_pcm(self, text: str) -> bytes:
        pcm_buffer = bytearray()
        if hasattr(self.voice, 'synthesize_stream_raw'):
            for chunk in self.voice.synthesize_stream_raw(text):
                pcm_buffer.extend(chunk)
        else:
            for chunk in self.voice.synthesize(text):
                pcm_buffer.extend(chunk.audio_int16_bytes)
        if not pcm_buffer:
            return b''
        audio = np.frombuffer(bytes(pcm_buffer), dtype=np.int16).astype(np.float32)
        audio = resample_poly(audio, self.sample_rate, self.model_rate)
        return np.clip(audio, -32768, 32767).astype(np.int16).tobytes()

    def on_text_received(self, msg: String):
        text = msg.data.strip()
        if not text:
            return

        self.get_logger().info(f'Sintesi: "{text}"')
        pcm_bytes = self.synthesize_pcm(text)
        if not pcm_bytes:
            return

        self._set_focus(acquire=True)
        try:
            chunk_duration = 0.1
            chunk_size = int(self.sample_rate * 2 * chunk_duration)
            self.token_id += 1

            # Pace on the clock, keeping ~0.3 s ahead of playback, so the
            # robot's buffer never runs empty (that is what made it crackle)
            lead = 0.3
            start = time.monotonic()
            for n, i in enumerate(range(0, len(pcm_bytes), chunk_size)):
                delay = start + n * chunk_duration - lead - time.monotonic()
                if delay > 0:
                    time.sleep(delay)
                chunk = pcm_bytes[i:i + chunk_size]
                pb_msg = AudioPlayback()
                pb_msg.pkg_name = self.pkg_name
                pb_msg.token_id = str(self.token_id)
                pb_msg.info = AudioInfo(
                    sample_rate=self.sample_rate,
                    channels=self.channels,
                )
                pb_msg.data = AudioData(data=list(chunk))
                self.audio_pub.publish(pb_msg)

            # wait for the end of playback before releasing the focus
            end = start + len(pcm_bytes) / (self.sample_rate * 2) + 0.2
            time.sleep(max(0.0, end - time.monotonic()))
        finally:
            self._set_focus(acquire=False)


def main(args=None):
    rclpy.init(args=args)
    node = ItalianPiperTtsNode()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()