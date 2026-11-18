#!/usr/bin/env python3
"""
Arm control example (arms only).

Usage:
  ros2 run py_examples arm_control [j0 j1 ... j13]

  j0..j13 — arm joint targets in rad (default: all 0.0)
            left arm 0-6, right arm 7-13, in this order:
            shoulder_pitch, shoulder_roll, shoulder_yaw, elbow,
            wrist_yaw, wrist_pitch, wrist_roll
            values outside the joint limits (ARM_LIMITS) are clamped

The program switches the MC mode by itself:
  1. STAND_DEFAULT
  2. UPPERBODY_REMOTE_SPLIT
  3. sends the arm command until Ctrl+C
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

# Arm joint names, in arm_pos order (left 0-6, right 7-13)
ARM_JOINTS = [
    f'{side}_{joint}'
    for side in ('left', 'right')
    for joint in ('shoulder_pitch', 'shoulder_roll', 'shoulder_yaw', 'elbow',
                  'wrist_yaw', 'wrist_pitch', 'wrist_roll')
]
# Arm joint limits (rad), from X2 URDF: (lower, upper), same order as ARM_JOINTS
ARM_LIMITS = [
    (-3.08, 2.04), (-0.061, 2.993), (-2.556, 2.556), (-2.3556, 0.0),
    (-2.556, 2.556), (-0.558, 0.558), (-1.571, 0.724),
    (-3.08, 2.04), (-2.993, 0.061), (-2.556, 2.556), (-2.3556, 0.0),
    (-2.556, 2.556), (-0.558, 0.558), (-0.724, 1.571),
]
# Publish period (s) -> 50 Hz
PERIOD = 0.02
# Pause after each mode switch, to let MC complete the transition (s)
MODE_SETTLE = 1.0


class ArmControlNode(Node):
    def __init__(self, arm_pos: list):
        super().__init__('arm_control')
        self.arm_pos = []
        for name, value, (lower, upper) in zip(ARM_JOINTS, arm_pos, ARM_LIMITS):
            target = max(lower, min(upper, value))
            if target != value:
                self.get_logger().warn(
                    f'{name}={value} out of range, clamped to {target}')
            self.arm_pos.append(target)
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
        req.source = 'node.arm_control'
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
            f'left arm={self.arm_pos[:7]}  right arm={self.arm_pos[7:]}  '
            f'(Ctrl+C to stop)')

    def publish(self):
        msg = UpperBodyCommandArray()
        now = self.get_clock().now()
        msg.header = MessageHeader()
        msg.header.stamp.sec = now.nanoseconds // 1_000_000_000
        msg.header.stamp.nanosec = now.nanoseconds % 1_000_000_000
        msg.header.frame_id = 'mc_upper_body'
        msg.header.sequence = self._seq
        self._seq += 1
        msg.source = 'arm_control_example'
        # In UPPERBODY_REMOTE_SPLIT the command is ignored with hand_sub_mode 0:
        # use claw mode with both hands at 0 (no effect on silicone hands).
        # The head is ignored in this mode.
        msg.hand_sub_mode = UpperBodyCommandArray.HAND_CLAW_OPEN_CLOSE
        msg.head_pos = [0.0, 0.0]
        msg.arm_pos = self.arm_pos
        msg.hand_pos = [0.0, 0.0]
        self.pub.publish(msg)


def main(args=None):
    argv = sys.argv[1:]
    try:
        if len(argv) not in (0, len(ARM_JOINTS)):
            raise ValueError
        arm_pos = [float(v) for v in argv] if argv else [0.0] * len(ARM_JOINTS)
    except ValueError:
        print(f'Usage: arm_control [j0 ... j{len(ARM_JOINTS) - 1}]   '
              f'(rad, default all 0.0)')
        for i, (name, (lower, upper)) in enumerate(zip(ARM_JOINTS, ARM_LIMITS)):
            print(f'  j{i:<2} {name:<22} [{lower}, {upper}]')
        return

    # Ctrl+C handled here, so STAND_DEFAULT can still be set on exit
    rclpy.init(args=args, signal_handler_options=SignalHandlerOptions.NO)
    node = ArmControlNode(arm_pos)
    try:
        if (node.set_mode('STAND_DEFAULT')
                and node.set_mode('UPPERBODY_REMOTE_SPLIT')):
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
