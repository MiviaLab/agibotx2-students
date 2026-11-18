// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/FixLineIntroState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/fix_line_intro_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_FixLineIntroState_cur_target_id
{
public:
  explicit Init_FixLineIntroState_cur_target_id(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::FixLineIntroState cur_target_id(::aimdk_msgs::msg::FixLineIntroState::_cur_target_id_type arg)
  {
    msg_.cur_target_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_fix_line_intro_state
{
public:
  explicit Init_FixLineIntroState_fix_line_intro_state(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  Init_FixLineIntroState_cur_target_id fix_line_intro_state(::aimdk_msgs::msg::FixLineIntroState::_fix_line_intro_state_type arg)
  {
    msg_.fix_line_intro_state = std::move(arg);
    return Init_FixLineIntroState_cur_target_id(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_rest_site_number
{
public:
  explicit Init_FixLineIntroState_rest_site_number(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  Init_FixLineIntroState_fix_line_intro_state rest_site_number(::aimdk_msgs::msg::FixLineIntroState::_rest_site_number_type arg)
  {
    msg_.rest_site_number = std::move(arg);
    return Init_FixLineIntroState_fix_line_intro_state(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_map_id
{
public:
  explicit Init_FixLineIntroState_map_id(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  Init_FixLineIntroState_rest_site_number map_id(::aimdk_msgs::msg::FixLineIntroState::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_FixLineIntroState_rest_site_number(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_map_name
{
public:
  explicit Init_FixLineIntroState_map_name(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  Init_FixLineIntroState_map_id map_name(::aimdk_msgs::msg::FixLineIntroState::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_FixLineIntroState_map_id(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_task_id
{
public:
  explicit Init_FixLineIntroState_task_id(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  Init_FixLineIntroState_map_name task_id(::aimdk_msgs::msg::FixLineIntroState::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_FixLineIntroState_map_name(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_task_name
{
public:
  explicit Init_FixLineIntroState_task_name(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  Init_FixLineIntroState_task_id task_name(::aimdk_msgs::msg::FixLineIntroState::_task_name_type arg)
  {
    msg_.task_name = std::move(arg);
    return Init_FixLineIntroState_task_id(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_set_task_name
{
public:
  explicit Init_FixLineIntroState_set_task_name(::aimdk_msgs::msg::FixLineIntroState & msg)
  : msg_(msg)
  {}
  Init_FixLineIntroState_task_name set_task_name(::aimdk_msgs::msg::FixLineIntroState::_set_task_name_type arg)
  {
    msg_.set_task_name = std::move(arg);
    return Init_FixLineIntroState_task_name(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

class Init_FixLineIntroState_set_task_id
{
public:
  Init_FixLineIntroState_set_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixLineIntroState_set_task_name set_task_id(::aimdk_msgs::msg::FixLineIntroState::_set_task_id_type arg)
  {
    msg_.set_task_id = std::move(arg);
    return Init_FixLineIntroState_set_task_name(msg_);
  }

private:
  ::aimdk_msgs::msg::FixLineIntroState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::FixLineIntroState>()
{
  return aimdk_msgs::msg::builder::Init_FixLineIntroState_set_task_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__BUILDER_HPP_
