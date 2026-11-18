// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PmuLedState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU_LED_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU_LED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/pmu_led_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PmuLedState_priority
{
public:
  explicit Init_PmuLedState_priority(::aimdk_msgs::msg::PmuLedState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PmuLedState priority(::aimdk_msgs::msg::PmuLedState::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuLedState msg_;
};

class Init_PmuLedState_b
{
public:
  explicit Init_PmuLedState_b(::aimdk_msgs::msg::PmuLedState & msg)
  : msg_(msg)
  {}
  Init_PmuLedState_priority b(::aimdk_msgs::msg::PmuLedState::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_PmuLedState_priority(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuLedState msg_;
};

class Init_PmuLedState_g
{
public:
  explicit Init_PmuLedState_g(::aimdk_msgs::msg::PmuLedState & msg)
  : msg_(msg)
  {}
  Init_PmuLedState_b g(::aimdk_msgs::msg::PmuLedState::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_PmuLedState_b(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuLedState msg_;
};

class Init_PmuLedState_r
{
public:
  explicit Init_PmuLedState_r(::aimdk_msgs::msg::PmuLedState & msg)
  : msg_(msg)
  {}
  Init_PmuLedState_g r(::aimdk_msgs::msg::PmuLedState::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_PmuLedState_g(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuLedState msg_;
};

class Init_PmuLedState_led_strip_mode
{
public:
  explicit Init_PmuLedState_led_strip_mode(::aimdk_msgs::msg::PmuLedState & msg)
  : msg_(msg)
  {}
  Init_PmuLedState_r led_strip_mode(::aimdk_msgs::msg::PmuLedState::_led_strip_mode_type arg)
  {
    msg_.led_strip_mode = std::move(arg);
    return Init_PmuLedState_r(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuLedState msg_;
};

class Init_PmuLedState_trace_id
{
public:
  explicit Init_PmuLedState_trace_id(::aimdk_msgs::msg::PmuLedState & msg)
  : msg_(msg)
  {}
  Init_PmuLedState_led_strip_mode trace_id(::aimdk_msgs::msg::PmuLedState::_trace_id_type arg)
  {
    msg_.trace_id = std::move(arg);
    return Init_PmuLedState_led_strip_mode(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuLedState msg_;
};

class Init_PmuLedState_header
{
public:
  Init_PmuLedState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PmuLedState_trace_id header(::aimdk_msgs::msg::PmuLedState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PmuLedState_trace_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PmuLedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PmuLedState>()
{
  return aimdk_msgs::msg::builder::Init_PmuLedState_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU_LED_STATE__BUILDER_HPP_
