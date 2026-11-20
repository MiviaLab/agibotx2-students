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
  3. moves the arms from their current position to the targets at most at
     MAX_SPEED, then keeps sending the targets until Ctrl+C
  4. on Ctrl+C brings the arms back to the starting position at MAX_SPEED
     (a second Ctrl+C skips it)
  5. STAND_DEFAULT
"""

import signal
import sys
import time

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from rclpy.signals import SignalHandlerOptions

from aimdk_msgs.msg import (CommonState, JointStateArray, McActionCommand,
                            MessageHeader, RequestHeader,
                            UpperBodyCommandArray)
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
# Maximum joint speed while moving to the targets (rad/s): lower = slower
MAX_SPEED = 0.7
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
        # Current arm position, to start the movement from where the arms are
        self.current_pos = None
        self.create_subscription(
            JointStateArray, '/aima/hal/joint/arm/state',
            self.arm_state_callback, qos_profile_sensor_data)
        # Position sent at each step, moved towards arm_pos at MAX_SPEED
        self.cmd_pos = None
        self.mode_client = self.create_client(
            SetMcAction, '/aimdk_5Fmsgs/srv/SetMcAction')
        while not self.mode_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info('⏳ Service unavailable, waiting...')
        self.timer = None
        self._seq = 0
        # Number of Ctrl+C pressed (see main)
        self.interrupts = 0

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

    def arm_state_callback(self, msg: JointStateArray):
        # Joint names in the state end with "_joint" (e.g. left_elbow_joint)
        positions = {j.name: j.position for j in msg.joints}
        try:
            self.current_pos = [positions[f'{name}_joint'] for name in ARM_JOINTS]
        except KeyError:
            pass

    def start(self) -> bool:
        # Wait for the current arm position (at most 5 s)
        deadline = time.time() + 5.0
        while self.current_pos is None and time.time() < deadline:
            rclpy.spin_once(self, timeout_sec=0.1)
        if self.current_pos is None:
            self.get_logger().error(
                '❌ No arm position on /aima/hal/joint/arm/state')
            return False
        self.cmd_pos = list(self.current_pos)
        self.start_pos = list(self.current_pos)
        duration =max(abs(t - c) for t, c in zip(self.arm_pos, self.cmd_pos)) / MAX_SPEED
        self.timer = self.create_timer(PERIOD, self.publish)
        self.get_logger().info(
            f'left arm={self.arm_pos[:7]}  right arm={self.arm_pos[7:]}  '
            f'(about {duration:.1f} s at {MAX_SPEED} rad/s, Ctrl+C to stop)')
        return True

    def return_to_start(self):
        """Bring the arms back to the starting position at MAX_SPEED."""
        if self.cmd_pos is None:
            return
        self.arm_pos = self.start_pos
        self.get_logger().info('↩️ Returning to the starting position...')
        # a second Ctrl+C skips the slow return
        while self.cmd_pos != self.arm_pos and self.interrupts < 2:
            self.publish()
            time.sleep(PERIOD)

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
        # Move each joint towards its target by at most MAX_SPEED * PERIOD
        step = MAX_SPEED * PERIOD
        self.cmd_pos = [c + max(-step, min(step, t - c))
                        for c, t in zip(self.cmd_pos, self.arm_pos)]
        msg.arm_pos = self.cmd_pos
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

    # Ctrl+C only counts the presses, it does not raise KeyboardInterrupt: an
    # exception raised inside the ROS executor (e.g. while it reads a message)
    # can leave it unable to call the SetMcAction service afterwards.
    def on_ctrl_c(signum, frame):
        node.interrupts += 1

    signal.signal(signal.SIGINT, on_ctrl_c)
    try:
        if (node.set_mode('STAND_DEFAULT')
                and node.set_mode('UPPERBODY_REMOTE_SPLIT')
                and node.start()):
            while node.interrupts == 0:
                rclpy.spin_once(node, timeout_sec=0.1)
    finally:
        if node.timer:
            node.destroy_timer(node.timer)
        node.return_to_start()
        node.set_mode('STAND_DEFAULT')
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
