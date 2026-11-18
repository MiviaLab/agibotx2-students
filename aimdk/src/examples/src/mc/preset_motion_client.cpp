// Preset arm motion example (arms only).
//
// Usage:
//   ros2 run examples preset_motion_client
//
// The program first switches the robot to STAND_DEFAULT, then asks for the arm
// area and the preset motion. Only arm motions are allowed (see kArmMotions);
// whole-body motions (area 11: bow, hug, clap, ...) are rejected.

#include "aimdk_msgs/msg/common_response.hpp"
#include "aimdk_msgs/msg/common_state.hpp"
#include "aimdk_msgs/msg/common_task_response.hpp"
#include "aimdk_msgs/msg/mc_action_command.hpp"
#include "aimdk_msgs/msg/mc_control_area.hpp"
#include "aimdk_msgs/msg/mc_input_action.hpp"
#include "aimdk_msgs/msg/mc_preset_motion.hpp"
#include "aimdk_msgs/msg/request_header.hpp"
#include "aimdk_msgs/srv/set_mc_action.hpp"
#include "aimdk_msgs/srv/set_mc_input_source.hpp"
#include "aimdk_msgs/srv/set_mc_preset_motion.hpp"
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <cinttypes>
#include <iostream>
#include <map>
#include <memory>
#include <signal.h>
#include <string>
#include <thread>
#include <utility>
#include <vector>

namespace {
constexpr const char *kInputSourceName = "node.preset_motion";
constexpr int32_t kInputSourcePriority = 40;
constexpr int32_t kInputSourceTimeout = 1000;
// Pause after the mode switch, to let MC complete the transition
constexpr auto kModeSettle = std::chrono::seconds(1);

// Arm areas: 1 left arm, 2 right arm, 3 both arms
const std::map<int, std::string> kAreaNames = {
    {1, "left"}, {2, "right"}, {3, "both"}};
// Arm-only preset motions: motion ID -> (name, allowed areas)
const std::map<int, std::pair<std::string, std::vector<int>>> kArmMotions = {
    {1001, {"raise", {1, 2}}},
    {1002, {"wave", {1, 2}}},
    {1003, {"handshake", {1, 2}}},
    {1004, {"airkiss", {1, 2}}},
    {1007, {"heart gesture", {1, 2, 3}}},
    {1008, {"high-five", {1, 2}}},
    {1010, {"raise hand", {1, 2, 3}}},
    {1011, {"wave at chest", {1, 2}}},
    {1013, {"salute", {1, 2}}},
};

bool is_arm_motion(int area, int motion) {
  auto it = kArmMotions.find(motion);
  if (it == kArmMotions.end())
    return false;
  for (int a : it->second.second)
    if (a == area)
      return true;
  return false;
}
} // namespace

std::shared_ptr<rclcpp::Node> g_node = nullptr;

void signal_handler(int signal) {
  if (g_node) {
    RCLCPP_INFO(g_node->get_logger(), "Received signal %d, shutting down...",
                signal);
    g_node.reset();
  }
  rclcpp::shutdown();
  exit(signal);
}

class PresetMotionClient : public rclcpp::Node {
public:
  PresetMotionClient() : Node("preset_motion_client") {
    client_ = this->create_client<aimdk_msgs::srv::SetMcPresetMotion>(
        "/aimdk_5Fmsgs/srv/SetMcPresetMotion");
    input_source_client_ =
        this->create_client<aimdk_msgs::srv::SetMcInputSource>(
            "/aimdk_5Fmsgs/srv/SetMcInputSource");
    mode_client_ = this->create_client<aimdk_msgs::srv::SetMcAction>(
        "/aimdk_5Fmsgs/srv/SetMcAction");

    RCLCPP_INFO(this->get_logger(), "✅ SetMcPresetMotion client node created.");

    // Wait for the services to become available
    while (!client_->wait_for_service(std::chrono::seconds(2))) {
      RCLCPP_INFO(this->get_logger(), "⏳ Service unavailable, waiting...");
    }
    while (!mode_client_->wait_for_service(std::chrono::seconds(2))) {
      RCLCPP_INFO(this->get_logger(), "⏳ SetMcAction unavailable, waiting...");
    }
    RCLCPP_INFO(this->get_logger(),
                "🟢 Service available, ready to send request.");
  }

  bool set_mode(const std::string &action_name) {
    auto req = std::make_shared<aimdk_msgs::srv::SetMcAction::Request>();
    req->header = aimdk_msgs::msg::RequestHeader();
    req->source = "node.preset_motion_client";
    req->command.action_desc = action_name;

    RCLCPP_INFO(this->get_logger(), "📨 Setting robot mode: %s",
                action_name.c_str());
    const std::chrono::milliseconds timeout(250);
    for (int i = 0; i < 8; i++) {
      req->header.stamp = this->now();
      auto future = mode_client_->async_send_request(req);
      auto retcode = rclcpp::spin_until_future_complete(shared_from_this(),
                                                        future, timeout);
      if (retcode != rclcpp::FutureReturnCode::SUCCESS) {
        // retry as remote peer is NOT handled well by ROS
        RCLCPP_INFO(this->get_logger(), "trying ... [%d]", i);
        continue;
      }
      auto response = future.get();
      if (response->response.status.value !=
          aimdk_msgs::msg::CommonState::SUCCESS) {
        RCLCPP_ERROR(this->get_logger(), "❌ Failed (code=%ld): %s",
                     static_cast<long>(response->response.header.code),
                     response->response.message.c_str());
        return false;
      }
      RCLCPP_INFO(this->get_logger(), "✅ Robot mode set successfully.");
      std::this_thread::sleep_for(kModeSettle);
      return true;
    }
    RCLCPP_ERROR(this->get_logger(), "❌ Service call failed or timed out.");
    return false;
  }

  bool register_input_source() {
    if (!input_source_client_->wait_for_service(std::chrono::seconds(8))) {
      RCLCPP_ERROR(this->get_logger(),
                   "❌ SetMcInputSource service unavailable.");
      return false;
    }

    // Try ADD first; if it fails (likely already registered), fall back to
    // ENABLE
    if (call_input_source( // ADD (1001)
            aimdk_msgs::msg::McInputAction::INPUTACTION_ADD)) {
      RCLCPP_INFO(this->get_logger(), "✅ Input source \"%s\" registered (ADD).",
                  kInputSourceName);
      return true;
    }
    RCLCPP_INFO(this->get_logger(),
                "ADD failed (likely already registered), trying ENABLE...");
    if (call_input_source( // ENABLE (2001)
            aimdk_msgs::msg::McInputAction::INPUTACTION_ENABLE)) {
      RCLCPP_INFO(this->get_logger(), "✅ Input source \"%s\" enabled.",
                  kInputSourceName);
      return true;
    }
    RCLCPP_ERROR(this->get_logger(),
                 "❌ Failed to register input source via ADD or ENABLE.");
    return false;
  }

  bool send_request(int area_id, int motion_id) {
    try {
      auto request =
          std::make_shared<aimdk_msgs::srv::SetMcPresetMotion::Request>();
      request->header = aimdk_msgs::msg::RequestHeader();

      request->input_source.name = kInputSourceName;
      request->input_source.priority = kInputSourcePriority;
      request->input_source.timeout = kInputSourceTimeout;

      aimdk_msgs::msg::McPresetMotion motion;
      aimdk_msgs::msg::McControlArea area;

      motion.value = motion_id; // Preset motion ID
      area.value = area_id;     // Control area ID
      request->motion = motion;
      request->area = area;
      request->interrupt = false; // Not interrupt current motion

      RCLCPP_INFO(this->get_logger(),
                  "📨 Sending request to set preset motion: motion=%d, area=%d",
                  motion_id, area_id);

      const std::chrono::milliseconds timeout(250);
      for (int i = 0; i < 8; i++) {
        request->header.stamp = this->now();
        auto future = client_->async_send_request(request);
        auto retcode = rclcpp::spin_until_future_complete(shared_from_this(),
                                                          future, timeout);
        if (retcode != rclcpp::FutureReturnCode::SUCCESS) {
          // retry as remote peer is NOT handled well by ROS
          RCLCPP_INFO(this->get_logger(), "trying ... [%d]", i);
          continue;
        }
        // future.done
        auto response = future.get();
        if (response->response.header.code == 0) {
          RCLCPP_INFO(this->get_logger(),
                      "✅ Preset motion set successfully: %" PRIu64,
                      response->response.task_id);
          return true;
        } else if (response->response.state.value ==
                   aimdk_msgs::msg::CommonState::RUNNING) { // RUNNING (400)
          RCLCPP_INFO(this->get_logger(), "⏳ Preset motion executing: %" PRIu64,
                      response->response.task_id);
          return true;
        } else {
          RCLCPP_WARN(this->get_logger(),
                      "❌ Failed to set preset motion: %" PRIu64,
                      response->response.task_id);
          return false;
        }
      }
      RCLCPP_ERROR(this->get_logger(), "❌ Service call failed or timed out.");
      return false;
    } catch (const std::exception &e) {
      RCLCPP_ERROR(this->get_logger(), "Exception occurred: %s", e.what());
      return false;
    }
  }

private:
  bool call_input_source(int32_t action_value) {
    auto req = std::make_shared<aimdk_msgs::srv::SetMcInputSource::Request>();
    req->action.value = action_value;
    req->input_source.name = kInputSourceName;
    req->input_source.priority = kInputSourcePriority;
    req->input_source.timeout = kInputSourceTimeout;

    const std::chrono::milliseconds timeout(250);
    for (int i = 0; i < 8; i++) {
      req->request.header.stamp = this->now();
      auto future = input_source_client_->async_send_request(req);
      auto retcode = rclcpp::spin_until_future_complete(shared_from_this(),
                                                        future, timeout);
      if (retcode != rclcpp::FutureReturnCode::SUCCESS) {
        // retry as remote peer is NOT handled well by ROS
        RCLCPP_INFO(
            this->get_logger(), "trying input source action %s (%d)... [%d]",
            action_value == aimdk_msgs::msg::McInputAction::INPUTACTION_ADD
                ? "ADD"
                : "ENABLE",
            action_value, i);
        continue;
      }
      auto response = future.get();
      return response->response.header.code == 0;
    }
    return false;
  }

  rclcpp::Client<aimdk_msgs::srv::SetMcPresetMotion>::SharedPtr client_;
  rclcpp::Client<aimdk_msgs::srv::SetMcInputSource>::SharedPtr
      input_source_client_;
  rclcpp::Client<aimdk_msgs::srv::SetMcAction>::SharedPtr mode_client_;
};

int main(int argc, char *argv[]) {
  try {
    rclcpp::init(argc, argv);
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);

    g_node = std::make_shared<PresetMotionClient>();
    // Cast g_node (std::shared_ptr<rclcpp::Node>) to a derived
    // PresetMotionClient pointer (std::shared_ptr<PresetMotionClient>)
    auto client = std::dynamic_pointer_cast<PresetMotionClient>(g_node);

    int area = 1;
    int motion = 1003;
    std::cout << "Enter arm area ID (1-left, 2-right, 3-both): ";
    std::cin >> area;
    std::cout << "Preset arm motions:" << std::endl;
    for (const auto &[id, info] : kArmMotions) {
      std::cout << "  " << id << " - " << info.first << "  areas:";
      for (int a : info.second)
        std::cout << " " << kAreaNames.at(a);
      std::cout << std::endl;
    }
    std::cout << "Enter preset motion ID: ";
    std::cin >> motion;

    // Only arm motions, with an area they support
    if (!std::cin || !is_arm_motion(area, motion)) {
      RCLCPP_ERROR(g_node->get_logger(),
                   "❌ motion %d with area %d is not an allowed arm motion",
                   motion, area);
      g_node.reset();
      rclcpp::shutdown();
      return 1;
    }

    if (client) {
      // Preset motions require Stable Stand
      if (!client->set_mode("STAND_DEFAULT")) {
        RCLCPP_ERROR(g_node->get_logger(),
                     "❌ Could not switch to STAND_DEFAULT, exiting");
      } else if (!client->register_input_source()) {
        RCLCPP_ERROR(g_node->get_logger(),
                     "❌ Input source registration failed, exiting");
      } else {
        client->send_request(area, motion);
      }
    }

    // Clean up resources
    g_node.reset();
    rclcpp::shutdown();

    return 0;
  } catch (const std::exception &e) {
    RCLCPP_ERROR(rclcpp::get_logger("main"),
                 "Program exited with exception: %s", e.what());
    return 1;
  }
}
