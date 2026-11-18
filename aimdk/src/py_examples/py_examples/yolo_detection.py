#!/usr/bin/env python3
"""
YOLO object detection on the head front camera.

Subscribes to the compressed (JPEG) image of a camera, runs a lightweight
YOLO model on the GPU and republishes the image with the bounding boxes drawn
on top, as a compressed image that can be viewed in Foxglove.

Usage:
  ros2 run py_examples yolo_detection
  ros2 run py_examples yolo_detection --ros-args -p conf:=0.5

Parameters (--ros-args -p name:=value):
  input_topic   — compressed image to process
                  (default /aima/hal/sensor/rgb_head_front_center/rgb_image/compressed)
  output_topic  — annotated compressed image (default /yolo/image/compressed)
  model         — YOLO weights file (default: yolo11n.pt shipped in data/)
  conf          — minimum confidence of the detections (default 0.25)
  imgsz         — YOLO input size in pixels (default 640)
  decode_scale  — JPEG is decoded at 1/decode_scale resolution, 1|2|4|8
                  (default 2: the 2688x1944 front camera becomes 1344x972)

View in Foxglove: Image panel on topic /yolo/image/compressed.
"""

import os
import time

import cv2
import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy
from sensor_msgs.msg import CompressedImage
from ultralytics import YOLO, settings

# JPEG decode flags for each decode_scale value
DECODE_FLAGS = {
    1: cv2.IMREAD_COLOR,
    2: cv2.IMREAD_REDUCED_COLOR_2,
    4: cv2.IMREAD_REDUCED_COLOR_4,
    8: cv2.IMREAD_REDUCED_COLOR_8,
}
# JPEG quality of the published image
JPEG_QUALITY = 80
# Seconds between two statistics log lines
LOG_PERIOD = 5.0


class YoloDetectionNode(Node):
    def __init__(self):
        super().__init__('yolo_detection')

        self.declare_parameter(
            'input_topic',
            '/aima/hal/sensor/rgb_head_front_center/rgb_image/compressed')
        self.declare_parameter('output_topic', '/yolo/image/compressed')
        self.declare_parameter(
            'model', os.path.join(os.path.dirname(__file__), 'data', 'yolo11n.pt'))
        self.declare_parameter('conf', 0.25)
        self.declare_parameter('imgsz', 640)
        self.declare_parameter('decode_scale', 2)

        input_topic = self.get_parameter('input_topic').value
        output_topic = self.get_parameter('output_topic').value
        model_path = self.get_parameter('model').value
        self.conf = self.get_parameter('conf').value
        self.imgsz = self.get_parameter('imgsz').value
        decode_scale = self.get_parameter('decode_scale').value
        if decode_scale not in DECODE_FLAGS:
            raise ValueError(f'decode_scale must be one of {list(DECODE_FLAGS)}')
        self.decode_flag = DECODE_FLAGS[decode_scale]

        # Load the model on the GPU (FP16) and run it once, so that the
        # first real frame is not slowed down by CUDA initialisation.
        settings.update({'sync': False})
        self.model = YOLO(model_path)
        self.model.predict(np.zeros((480, 640, 3), np.uint8), device=0,
                           quantize=16, imgsz=self.imgsz, verbose=False)
        self.get_logger().info(f'✅ Model loaded on GPU: {model_path}')

        # Camera QoS: BEST_EFFORT, keep only the latest frame. If inference is
        # slower than the camera, old frames are dropped instead of queued.
        qos = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1)
        self.pub = self.create_publisher(CompressedImage, output_topic, qos)
        self.sub = self.create_subscription(
            CompressedImage, input_topic, self.cb_image, qos)
        self.get_logger().info(f'📥 Subscribing: {input_topic}')
        self.get_logger().info(f'📤 Publishing:  {output_topic}')

        self.frames = 0
        self.last_log = time.monotonic()

    def cb_image(self, msg: CompressedImage):
        # 1. Decode the JPEG (at reduced resolution)
        img = cv2.imdecode(np.frombuffer(msg.data, np.uint8), self.decode_flag)
        if img is None:
            self.get_logger().warn('Failed to decode image')
            return

        # 2. Run YOLO on the GPU
        result = self.model.predict(img, device=0, quantize=16, conf=self.conf,
                                    imgsz=self.imgsz, verbose=False)[0]

        # 3. Draw the bounding boxes and labels on the image
        annotated = result.plot()

        # 4. Publish as compressed JPEG, keeping the original header (timestamp)
        ok, jpeg = cv2.imencode('.jpg', annotated,
                                [cv2.IMWRITE_JPEG_QUALITY, JPEG_QUALITY])
        if not ok:
            self.get_logger().warn('Failed to encode image')
            return
        out = CompressedImage()
        out.header = msg.header
        out.format = 'jpeg'
        out.data = jpeg.tobytes()
        self.pub.publish(out)

        # Periodic statistics: frame rate and what was detected
        self.frames += 1
        now = time.monotonic()
        if now - self.last_log >= LOG_PERIOD:
            fps = self.frames / (now - self.last_log)
            names = [result.names[int(c)] for c in result.boxes.cls]
            self.get_logger().info(
                f'{fps:.1f} fps | {len(names)} objects: {", ".join(names)}')
            self.frames = 0
            self.last_log = now


def main(args=None):
    rclpy.init(args=args)
    node = YoloDetectionNode()
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
