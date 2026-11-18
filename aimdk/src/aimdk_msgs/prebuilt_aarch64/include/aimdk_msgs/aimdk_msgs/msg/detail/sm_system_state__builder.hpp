// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/SmSystemState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/sm_system_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_SmSystemState_cur_status
{
public:
  explicit Init_SmSystemState_cur_status(::aimdk_msgs::msg::SmSystemState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::SmSystemState cur_status(::aimdk_msgs::msg::SmSystemState::_cur_status_type arg)
  {
    msg_.cur_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::SmSystemState msg_;
};

class Init_SmSystemState_cur_state
{
public:
  explicit Init_SmSystemState_cur_state(::aimdk_msgs::msg::SmSystemState & msg)
  : msg_(msg)
  {}
  Init_SmSystemState_cur_status cur_state(::aimdk_msgs::msg::SmSystemState::_cur_state_type arg)
  {
    msg_.cur_state = std::move(arg);
    return Init_SmSystemState_cur_status(msg_);
  }

private:
  ::aimdk_msgs::msg::SmSystemState msg_;
};

class Init_SmSystemState_header
{
public:
  Init_SmSystemState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmSystemState_cur_state header(::aimdk_msgs::msg::SmSystemState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SmSystemState_cur_state(msg_);
  }

private:
  ::aimdk_msgs::msg::SmSystemState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::SmSystemState>()
{
  return aimdk_msgs::msg::builder::Init_SmSystemState_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__BUILDER_HPP_
