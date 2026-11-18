#!/bin/bash
# Start the Foxglove bridge for the robot's ROS 2 topics (read-only).
# Usage: ~/foxglove/run.sh [port]   (default 8765; use another port if it is already taken)
set -e
PORT=${1:-8765}
HERE="$(cd "$(dirname "$(readlink -f "$0")")" && pwd)"

source /opt/ros/humble/setup.bash
source ~/aimdk/install/local_setup.bash

# Firmware files, copied on the host by setup-studenti.sh and mounted read-only:
#   - full aimdk_msgs of the firmware (the public SDK lacks some internal messages)
#   - robot URDF + meshes for the 3D panel
FW=/opt/agibot/aimdk_msgs
URDF_DIR=/opt/agibot/x2_urdf
for p in "$FW" "$URDF_DIR/x2_ultra.urdf"; do
  [ -e "$p" ] || { echo "$p missing: ask the instructor to run setup-studenti.sh" >&2; exit 1; }
done

# Minimal ament prefix exposing the URDF as package "x2_description", so that the
# bridge can serve the meshes as package://x2_description/meshes/...
PFX="$HERE/urdf_prefix"
mkdir -p "$PFX/share/ament_index/resource_index/packages"
ln -sfn "$URDF_DIR" "$PFX/share/x2_description"
touch "$PFX/share/ament_index/resource_index/packages/x2_description"

export AMENT_PREFIX_PATH=$FW:$PFX:$AMENT_PREFIX_PATH
export LD_LIBRARY_PATH=$FW/lib:$LD_LIBRARY_PATH

python3 "$HERE/pub_urdf.py" "$URDF_DIR/x2_ultra.urdf" & PUB=$!
trap "kill $PUB 2>/dev/null" EXIT

# Excluded topics: protobuf topics, camera metadata, raw images, full point cloud
# (too heavy for Wi-Fi: use the .../compressed and ..._down_sampling versions).
ros2 launch foxglove_bridge foxglove_bridge_launch.xml port:=$PORT \
  capabilities:="[connectionGraph,assets]" \
  topic_whitelist:="['^(?!.*pb_3A)(?!/camera/.*(metadata|imu_info|depth_to_))(?!.*/rgb_image$)(?!.*/lidar_pointcloud$).*']" \
  asset_uri_allowlist:="['^package://x2_description/meshes/[A-Za-z0-9_]+[.](STL|stl)$']"
