// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_common_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McCommonState_speed_status
{
public:
  explicit Init_McCommonState_speed_status(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McCommonState speed_status(::aimdk_msgs::msg::McCommonState::_speed_status_type arg)
  {
    msg_.speed_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_body_status
{
public:
  explicit Init_McCommonState_body_status(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_speed_status body_status(::aimdk_msgs::msg::McCommonState::_body_status_type arg)
  {
    msg_.body_status = std::move(arg);
    return Init_McCommonState_speed_status(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_fsm_state
{
public:
  explicit Init_McCommonState_fsm_state(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_body_status fsm_state(::aimdk_msgs::msg::McCommonState::_fsm_state_type arg)
  {
    msg_.fsm_state = std::move(arg);
    return Init_McCommonState_body_status(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_servo_status
{
public:
  explicit Init_McCommonState_servo_status(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_fsm_state servo_status(::aimdk_msgs::msg::McCommonState::_servo_status_type arg)
  {
    msg_.servo_status = std::move(arg);
    return Init_McCommonState_fsm_state(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_motion_status
{
public:
  explicit Init_McCommonState_motion_status(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_servo_status motion_status(::aimdk_msgs::msg::McCommonState::_motion_status_type arg)
  {
    msg_.motion_status = std::move(arg);
    return Init_McCommonState_servo_status(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_runtime_model
{
public:
  explicit Init_McCommonState_runtime_model(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_motion_status runtime_model(::aimdk_msgs::msg::McCommonState::_runtime_model_type arg)
  {
    msg_.runtime_model = std::move(arg);
    return Init_McCommonState_motion_status(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_action_info
{
public:
  explicit Init_McCommonState_action_info(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_runtime_model action_info(::aimdk_msgs::msg::McCommonState::_action_info_type arg)
  {
    msg_.action_info = std::move(arg);
    return Init_McCommonState_runtime_model(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_input_source
{
public:
  explicit Init_McCommonState_input_source(::aimdk_msgs::msg::McCommonState & msg)
  : msg_(msg)
  {}
  Init_McCommonState_action_info input_source(::aimdk_msgs::msg::McCommonState::_input_source_type arg)
  {
    msg_.input_source = std::move(arg);
    return Init_McCommonState_action_info(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

class Init_McCommonState_header
{
public:
  Init_McCommonState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McCommonState_input_source header(::aimdk_msgs::msg::McCommonState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_McCommonState_input_source(msg_);
  }

private:
  ::aimdk_msgs::msg::McCommonState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McCommonState>()
{
  return aimdk_msgs::msg::builder::Init_McCommonState_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__BUILDER_HPP_
