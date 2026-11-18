#!/usr/bin/env python3
"""
Head control example (head yaw only).

Usage:
  ros2 run py_examples head_control [yaw]

  yaw — head yaw target in rad, range [-0.366, 0.366] (default 0.0)
        values outside the range are clamped to the joint limit

The program switches the MC mode by itself:
  1. STAND_DEFAULT
  2. HEAD_ONLY
  3. sends the head command until Ctrl+C
  4. STAND_DEFAULT
"""

import sys
import time

import rclpy
from rclpy.node import Node
from rclpy.signals import SignalHandlerOptions

from aimdk_msgs.msg import (CommonState, McActionCommand, MessageHeader,
                            RequestHeader, UpperBodyCommandArray)
from aimdk_msgs.srv import SetMcAction

# Head yaw joint limit (rad), from X2 URDF: head_yaw_joint
YAW_LIMIT = 0.366
# Publish period (s) -> 50 Hz
PERIOD = 0.02
# Pause after each mode switch, to let MC complete the transition (s)
MODE_SETTLE = 1.0


class HeadControlNode(Node):
    def __init__(self, yaw: float):
        super().__init__('head_control')
        target = max(-YAW_LIMIT, min(YAW_LIMIT, yaw))
        if target != yaw:
            self.get_logger().warn(
                f'yaw={yaw} out of range, clamped to {target}')
        # head_yaw, head_pitch (pitch fixed at 0)
        self.head_pos = [target, 0.0]
        self.pub = self.create_publisher(
            UpperBodyCommandArray, '/mc/upper_body_command', 10)
        self.mode_client = self.create_client(
            SetMcAction, '/aimdk_5Fmsgs/srv/SetMcAction')
        while not self.mode_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info('⏳ Service unavailable, waiting...')
        self.timer = None
        self._seq = 0

    def set_mode(self, action_name: str) -> bool:
        req = SetMcAction.Request()
        req.header = RequestHeader()
        req.source = 'node.head_control'
        req.command = McActionCommand()
        req.command.action_desc = action_name

        self.get_logger().info(f'📨 Setting robot mode: {action_name}')
        future = None
        for i in range(8):
            req.header.stamp = self.get_clock().now().to_msg()
            future = self.mode_client.call_async(req)
            rclpy.spin_until_future_complete(self, future, timeout_sec=0.25)
            if future.done():
                break
            # retry as remote peer is NOT handled well by ROS
            self.get_logger().info(f'trying ... [{i}]')

        response = future.result() if future.done() else None
        if response is None:
            self.get_logger().error('❌ Service call failed or timed out.')
            return False
        if response.response.status.value != CommonState.SUCCESS:
            self.get_logger().error(
                f'❌ Failed (code={response.response.header.code}): '
                f'{response.response.message}')
            return False
        self.get_logger().info('✅ Robot mode set successfully.')
        time.sleep(MODE_SETTLE)
        return True

    def start(self):
        self.timer = self.create_timer(PERIOD, self.publish)
        self.get_logger().info(
            f'head yaw={self.head_pos[0]}  (Ctrl+C to stop)')

    def publish(self):
        msg = UpperBodyCommandArray()
        now = self.get_clock().now()
        msg.header = MessageHeader()
        msg.header.stamp.sec = now.nanoseconds // 1_000_000_000
        msg.header.stamp.nanosec = now.nanoseconds % 1_000_000_000
        msg.header.frame_id = 'mc_upper_body'
        msg.header.sequence = self._seq
        self._seq += 1
        msg.source = 'head_control_example'
        msg.hand_sub_mode = 0
        msg.head_pos = self.head_pos
        msg.arm_pos = [0.0] * 14
        msg.hand_pos = []
        self.pub.publish(msg)


def main(args=None):
    argv = sys.argv[1:]
    try:
        if len(argv) > 1:
            raise ValueError
        yaw = float(argv[0]) if argv else 0.0
    except ValueError:
        print('Usage: head_control [yaw]')
        print(f'  yaw in [-{YAW_LIMIT}, {YAW_LIMIT}] rad (default 0.0)')
        return

    # Ctrl+C handled here, so STAND_DEFAULT can still be set on exit
    rclpy.init(args=args, signal_handler_options=SignalHandlerOptions.NO)
    node = HeadControlNode(yaw)
    try:
        if node.set_mode('STAND_DEFAULT') and node.set_mode('HEAD_ONLY'):
            node.start()
            rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node.timer:
            node.destroy_timer(node.timer)
        node.set_mode('STAND_DEFAULT')
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
