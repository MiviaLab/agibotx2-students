"""Publish the robot URDF on /robot_description (latched) for the Foxglove 3D panel.

Mesh paths are rewritten to package://x2_description/... so the bridge can serve them.
Usage: python3 pub_urdf.py <path/to/x2_ultra.urdf>
"""
import sys

import rclpy
from rclpy.qos import DurabilityPolicy, QoSProfile
from std_msgs.msg import String

urdf = open(sys.argv[1]).read().replace(
    'filename="./meshes/', 'filename="package://x2_description/meshes/')
rclpy.init()
node = rclpy.create_node('x2_urdf_publisher')
pub = node.create_publisher(
    String, '/robot_description',
    QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL))
pub.publish(String(data=urdf))
try:
    rclpy.spin(node)
except Exception:
    pass
