// Head control example (head yaw only).
//
// Usage:
//   ros2 run examples head_control [yaw]
//
//   yaw — head yaw target in rad, range [-0.366, 0.366] (default 0.0)
//         values outside the range are clamped to the joint limit
//
// The program switches the MC mode by itself:
//   1. STAND_DEFAULT
//   2. HEAD_ONLY
//   3. sends the head command until Ctrl+C
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

// Head yaw joint limit (rad), from X2 URDF: head_yaw_joint
constexpr double kYawLimit = 0.366;
// Publish period -> 50 Hz
constexpr auto kPeriod = 20ms;
// Pause after each mode switch, to let MC complete the transition
constexpr auto kModeSettle = 1s;

// Ctrl+C handled here, so STAND_DEFAULT can still be set on exit
static std::atomic<bool> g_stop(false);
static void signal_handler(int) { g_stop = true; }

class HeadControlNode : public rclcpp::Node {
public:
  HeadControlNode(double yaw)
      : Node("head_control"), seq_(0) {
    const double target = std::clamp(yaw, -kYawLimit, kYawLimit);
    if (target != yaw) {
      RCLCPP_WARN(get_logger(), "yaw=%.3f out of range, clamped to %.3f", yaw,
                  target);
    }
    // head_yaw, head_pitch (pitch fixed at 0)
    head_pos_ = {target, 0.0};
    pub_ = create_publisher<Msg>("/mc/upper_body_command", 10);
    mode_client_ = create_client<SetMcAction>("/aimdk_5Fmsgs/srv/SetMcAction");
    while (!mode_client_->wait_for_service(2s)) {
      RCLCPP_INFO(get_logger(), "⏳ Service unavailable, waiting...");
    }
  }

  bool set_mode(const std::string &action_name) {
    auto req = std::make_shared<SetMcAction::Request>();
    req->header = aimdk_msgs::msg::RequestHeader();
    req->source = "node.head_control";
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
    RCLCPP_INFO(get_logger(), "head yaw=%.3f  (Ctrl+C to stop)", head_pos_[0]);
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
    msg.source = "head_control_example";
    msg.hand_sub_mode = 0;
    msg.head_pos = head_pos_;
    msg.arm_pos.fill(0.0);
    msg.hand_pos.clear();
    pub_->publish(msg);
  }

  rclcpp::Publisher<Msg>::SharedPtr pub_;
  rclcpp::Client<SetMcAction>::SharedPtr mode_client_;
  rclcpp::TimerBase::SharedPtr timer_;
  uint32_t seq_;
  std::array<double, 2> head_pos_;
};

int main(int argc, char **argv) {
  // Strip ROS arguments (--ros-args ...) before parsing our own.
  auto args = rclcpp::remove_ros_arguments(argc, argv);

  double yaw = 0.0;
  try {
    if (args.size() > 2)
      throw std::invalid_argument("too many arguments");
    if (args.size() == 2)
      yaw = std::stod(args[1]);
  } catch (const std::exception &) {
    std::printf("Usage: head_control [yaw]\n");
    std::printf("  yaw in [-%.3f, %.3f] rad (default 0.0)\n", kYawLimit,
                kYawLimit);
    return 1;
  }

  rclcpp::init(argc, argv, rclcpp::InitOptions(),
               rclcpp::SignalHandlerOptions::None);
  std::signal(SIGINT, signal_handler);
  std::signal(SIGTERM, signal_handler);

  auto node = std::make_shared<HeadControlNode>(yaw);
  if (node->set_mode("STAND_DEFAULT") && !g_stop &&
      node->set_mode("HEAD_ONLY")) {
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
