// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/TaskMasterState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/task_master_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskMasterState_reserve_info
{
public:
  explicit Init_TaskMasterState_reserve_info(::aimdk_msgs::msg::TaskMasterState & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::TaskMasterState reserve_info(::aimdk_msgs::msg::TaskMasterState::_reserve_info_type arg)
  {
    msg_.reserve_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

class Init_TaskMasterState_pilot_state
{
public:
  explicit Init_TaskMasterState_pilot_state(::aimdk_msgs::msg::TaskMasterState & msg)
  : msg_(msg)
  {}
  Init_TaskMasterState_reserve_info pilot_state(::aimdk_msgs::msg::TaskMasterState::_pilot_state_type arg)
  {
    msg_.pilot_state = std::move(arg);
    return Init_TaskMasterState_reserve_info(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

class Init_TaskMasterState_fix_line_intro_state
{
public:
  explicit Init_TaskMasterState_fix_line_intro_state(::aimdk_msgs::msg::TaskMasterState & msg)
  : msg_(msg)
  {}
  Init_TaskMasterState_pilot_state fix_line_intro_state(::aimdk_msgs::msg::TaskMasterState::_fix_line_intro_state_type arg)
  {
    msg_.fix_line_intro_state = std::move(arg);
    return Init_TaskMasterState_pilot_state(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

class Init_TaskMasterState_loc_map_name
{
public:
  explicit Init_TaskMasterState_loc_map_name(::aimdk_msgs::msg::TaskMasterState & msg)
  : msg_(msg)
  {}
  Init_TaskMasterState_fix_line_intro_state loc_map_name(::aimdk_msgs::msg::TaskMasterState::_loc_map_name_type arg)
  {
    msg_.loc_map_name = std::move(arg);
    return Init_TaskMasterState_fix_line_intro_state(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

class Init_TaskMasterState_loc_map_id
{
public:
  explicit Init_TaskMasterState_loc_map_id(::aimdk_msgs::msg::TaskMasterState & msg)
  : msg_(msg)
  {}
  Init_TaskMasterState_loc_map_name loc_map_id(::aimdk_msgs::msg::TaskMasterState::_loc_map_id_type arg)
  {
    msg_.loc_map_id = std::move(arg);
    return Init_TaskMasterState_loc_map_name(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

class Init_TaskMasterState_slam_state
{
public:
  explicit Init_TaskMasterState_slam_state(::aimdk_msgs::msg::TaskMasterState & msg)
  : msg_(msg)
  {}
  Init_TaskMasterState_loc_map_id slam_state(::aimdk_msgs::msg::TaskMasterState::_slam_state_type arg)
  {
    msg_.slam_state = std::move(arg);
    return Init_TaskMasterState_loc_map_id(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

class Init_TaskMasterState_sub_state
{
public:
  explicit Init_TaskMasterState_sub_state(::aimdk_msgs::msg::TaskMasterState & msg)
  : msg_(msg)
  {}
  Init_TaskMasterState_slam_state sub_state(::aimdk_msgs::msg::TaskMasterState::_sub_state_type arg)
  {
    msg_.sub_state = std::move(arg);
    return Init_TaskMasterState_slam_state(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

class Init_TaskMasterState_main_state
{
public:
  Init_TaskMasterState_main_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskMasterState_sub_state main_state(::aimdk_msgs::msg::TaskMasterState::_main_state_type arg)
  {
    msg_.main_state = std::move(arg);
    return Init_TaskMasterState_sub_state(msg_);
  }

private:
  ::aimdk_msgs::msg::TaskMasterState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::TaskMasterState>()
{
  return aimdk_msgs::msg::builder::Init_TaskMasterState_main_state();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__BUILDER_HPP_
