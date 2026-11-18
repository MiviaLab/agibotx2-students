// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PilotState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/pilot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PilotState_pilot_state
{
public:
  explicit Init_PilotState_pilot_state(::aimdk_msgs::msg::PilotState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PilotState pilot_state(::aimdk_msgs::msg::PilotState::_pilot_state_type arg)
  {
    msg_.pilot_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PilotState msg_;
};

class Init_PilotState_map_id
{
public:
  explicit Init_PilotState_map_id(::aimdk_msgs::msg::PilotState & msg)
  : msg_(msg)
  {}
  Init_PilotState_pilot_state map_id(::aimdk_msgs::msg::PilotState::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_PilotState_pilot_state(msg_);
  }

private:
  ::aimdk_msgs::msg::PilotState msg_;
};

class Init_PilotState_map_name
{
public:
  explicit Init_PilotState_map_name(::aimdk_msgs::msg::PilotState & msg)
  : msg_(msg)
  {}
  Init_PilotState_map_id map_name(::aimdk_msgs::msg::PilotState::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_PilotState_map_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PilotState msg_;
};

class Init_PilotState_intro_task_id
{
public:
  explicit Init_PilotState_intro_task_id(::aimdk_msgs::msg::PilotState & msg)
  : msg_(msg)
  {}
  Init_PilotState_map_name intro_task_id(::aimdk_msgs::msg::PilotState::_intro_task_id_type arg)
  {
    msg_.intro_task_id = std::move(arg);
    return Init_PilotState_map_name(msg_);
  }

private:
  ::aimdk_msgs::msg::PilotState msg_;
};

class Init_PilotState_intro_task_name
{
public:
  explicit Init_PilotState_intro_task_name(::aimdk_msgs::msg::PilotState & msg)
  : msg_(msg)
  {}
  Init_PilotState_intro_task_id intro_task_name(::aimdk_msgs::msg::PilotState::_intro_task_name_type arg)
  {
    msg_.intro_task_name = std::move(arg);
    return Init_PilotState_intro_task_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PilotState msg_;
};

class Init_PilotState_target_id
{
public:
  explicit Init_PilotState_target_id(::aimdk_msgs::msg::PilotState & msg)
  : msg_(msg)
  {}
  Init_PilotState_intro_task_name target_id(::aimdk_msgs::msg::PilotState::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_PilotState_intro_task_name(msg_);
  }

private:
  ::aimdk_msgs::msg::PilotState msg_;
};

class Init_PilotState_target_name
{
public:
  Init_PilotState_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PilotState_target_id target_name(::aimdk_msgs::msg::PilotState::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return Init_PilotState_target_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PilotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PilotState>()
{
  return aimdk_msgs::msg::builder::Init_PilotState_target_name();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__BUILDER_HPP_
