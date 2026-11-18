// Arm control example (arms only).
//
// Usage:
//   ros2 run examples arm_control [j0 j1 ... j13]
//
//   j0..j13 — arm joint targets in rad (default: all 0.0)
//             left arm 0-6, right arm 7-13, in this order:
//             shoulder_pitch, shoulder_roll, shoulder_yaw, elbow,
//             wrist_yaw, wrist_pitch, wrist_roll
//             values outside the joint limits (kArmLimits) are clamped
//
// The program switches the MC mode by itself:
//   1. STAND_DEFAULT
//   2. UPPERBODY_REMOTE_SPLIT
//   3. sends the arm command until Ctrl+C
//   4. STAND_DEFAULT

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <csignal>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <thread>
#include <utility>

#include "aimdk_msgs/msg/common_state.hpp"
#include "aimdk_msgs/msg/mc_action_command.hpp"
#include "aimdk_msgs/msg/message_header.hpp"
#include "aimdk_msgs/msg/request_header.hpp"
#include "aimdk_msgs/msg/upper_body_command_array.hpp"
#include "aimdk_msgs/srv/set_mc_action.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;
using Msg = aimdk_msgs::msg::UpperBodyCommandArray;
using SetMcAction = aimdk_msgs::srv::SetMcAction;

constexpr size_t kNumArmJoints = 14;
// Arm joint names, in arm_pos order (left 0-6, right 7-13)
const std::array<const char *, kNumArmJoints> kArmJoints = {
    "left_shoulder_pitch",  "left_shoulder_roll", "left_shoulder_yaw",
    "left_elbow",           "left_wrist_yaw",     "left_wrist_pitch",
    "left_wrist_roll",      "right_shoulder_pitch", "right_shoulder_roll",
    "right_shoulder_yaw",   "right_elbow",        "right_wrist_yaw",
    "right_wrist_pitch",    "right_wrist_roll"};
// Arm joint limits (rad), from X2 URDF: {lower, upper}, same order as kArmJoints
const std::array<std::pair<double, double>, kNumArmJoints> kArmLimits = {{
    {-3.08, 2.04}, {-0.061, 2.993}, {-2.556, 2.556}, {-2.3556, 0.0},
    {-2.556, 2.556}, {-0.558, 0.558}, {-1.571, 0.724},
    {-3.08, 2.04}, {-2.993, 0.061}, {-2.556, 2.556}, {-2.3556, 0.0},
    {-2.556, 2.556}, {-0.558, 0.558}, {-0.724, 1.571},
}};
// Publish period -> 50 Hz
constexpr auto kPeriod = 20ms;
// Pause after each mode switch, to let MC complete the transition
constexpr auto kModeSettle = 1s;

// Ctrl+C handled here, so STAND_DEFAULT can still be set on exit
static std::atomic<bool> g_stop(false);
static void signal_handler(int) { g_stop = true; }

class ArmControlNode : public rclcpp::Node {
public:
  ArmControlNode(const std::array<double, kNumArmJoints> &arm_pos)
      : Node("arm_control"), seq_(0) {
    for (size_t i = 0; i < kNumArmJoints; i++) {
      const auto [lower, upper] = kArmLimits[i];
      arm_pos_[i] = std::clamp(arm_pos[i], lower, upper);
      if (arm_pos_[i] != arm_pos[i]) {
        RCLCPP_WARN(get_logger(), "%s=%.3f out of range, clamped to %.3f",
                    kArmJoints[i], arm_pos[i], arm_pos_[i]);
      }
    }
    pub_ = create_publisher<Msg>("/mc/upper_body_command", 10);
    mode_client_ = create_client<SetMcAction>("/aimdk_5Fmsgs/srv/SetMcAction");
    while (!mode_client_->wait_for_service(2s)) {
      RCLCPP_INFO(get_logger(), "⏳ Service unavailable, waiting...");
    }
  }

  bool set_mode(const std::string &action_name) {
    auto req = std::make_shared<SetMcAction::Request>();
    req->header = aimdk_msgs::msg::RequestHeader();
    req->source = "node.arm_control";
    req->command.action_desc = action_name;

    RCLCPP_INFO(get_logger(), "📨 Setting robot mode: %s", action_name.c_str());
    for (int i = 0; i < 8; i++) {
      req->header.stamp = now();
      auto future = mode_client_->async_send_request(req);
      auto ret =
          rclcpp::spin_until_future_complete(shared_from_this(), future, 250ms);
      if (ret != rclcpp::FutureReturnCode::SUCCESS) {
        // retry as remote peer is NOT handled well by ROS
        RCLCPP_INFO(get_logger(), "trying ... [%d]", i);
        continue;
      }
      auto resp = future.get();
      if (resp->response.status.value !=
          aimdk_msgs::msg::CommonState::SUCCESS) {
        RCLCPP_ERROR(get_logger(), "❌ Failed (code=%ld): %s",
                     static_cast<long>(resp->response.header.code),
                     resp->response.message.c_str());
        return false;
      }
      RCLCPP_INFO(get_logger(), "✅ Robot mode set successfully.");
      std::this_thread::sleep_for(kModeSettle);
      return true;
    }
    RCLCPP_ERROR(get_logger(), "❌ Service call failed or timed out.");
    return false;
  }

  void start() {
    timer_ = create_wall_timer(kPeriod, [this]() { publish(); });
    RCLCPP_INFO(get_logger(), "sending arm command  (Ctrl+C to stop)");
  }

  void stop() {
    if (timer_)
      timer_->cancel();
  }

private:
  void publish() {
    Msg msg;
    auto t = this->now();
    msg.header.stamp.sec = static_cast<int32_t>(t.seconds());
    msg.header.stamp.nanosec =
        static_cast<uint32_t>(t.nanoseconds() % 1000000000);
    msg.header.frame_id = "mc_upper_body";
    msg.header.sequence = seq_++;
    msg.source = "arm_control_example";
    // In UPPERBODY_REMOTE_SPLIT the command is ignored with hand_sub_mode 0:
    // use claw mode with both hands at 0 (no effect on silicone hands).
    // The head is ignored in this mode.
    msg.hand_sub_mode = Msg::HAND_CLAW_OPEN_CLOSE;
    msg.head_pos = {0.0, 0.0};
    msg.arm_pos = arm_pos_;
    msg.hand_pos = {0.0, 0.0};
    pub_->publish(msg);
  }

  rclcpp::Publisher<Msg>::SharedPtr pub_;
  rclcpp::Client<SetMcAction>::SharedPtr mode_client_;
  rclcpp::TimerBase::SharedPtr timer_;
  uint32_t seq_;
  std::array<double, kNumArmJoints> arm_pos_{};
};

static void print_usage() {
  std::printf("Usage: arm_control [j0 ... j13]   (rad, default all 0.0)\n");
  for (size_t i = 0; i < kNumArmJoints; i++) {
    std::printf("  j%-2zu %-22s [%.4g, %.4g]\n", i, kArmJoints[i],
                kArmLimits[i].first, kArmLimits[i].second);
  }
}

int main(int argc, char **argv) {
  // Strip ROS arguments (--ros-args ...) before parsing our own.
  auto args = rclcpp::remove_ros_arguments(argc, argv);

  std::array<double, kNumArmJoints> arm_pos{};
  try {
    if (args.size() != 1 && args.size() != kNumArmJoints + 1)
      throw std::invalid_argument("wrong number of arguments");
    for (size_t i = 1; i < args.size(); i++)
      arm_pos[i - 1] = std::stod(args[i]);
  } catch (const std::exception &) {
    print_usage();
    return 1;
  }

  rclcpp::init(argc, argv, rclcpp::InitOptions(),
               rclcpp::SignalHandlerOptions::None);
  std::signal(SIGINT, signal_handler);
  std::signal(SIGTERM, signal_handler);

  auto node = std::make_shared<ArmControlNode>(arm_pos);
  if (node->set_mode("STAND_DEFAULT") && !g_stop &&
      node->set_mode("UPPERBODY_REMOTE_SPLIT")) {
    node->start();
    rclcpp::executors::SingleThreadedExecutor exec;
    exec.add_node(node);
    while (!g_stop)
      exec.spin_once(kPeriod);
    exec.remove_node(node);
    node->stop();
  }
  node->set_mode("STAND_DEFAULT");

  node.reset();
  rclcpp::shutdown();
  return 0;
}
