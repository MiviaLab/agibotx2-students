// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/pnc_task_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PncTaskRequest_reserve_info
{
public:
  explicit Init_PncTaskRequest_reserve_info(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PncTaskRequest reserve_info(::aimdk_msgs::msg::PncTaskRequest::_reserve_info_type arg)
  {
    msg_.reserve_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_time_duration
{
public:
  explicit Init_PncTaskRequest_time_duration(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_reserve_info time_duration(::aimdk_msgs::msg::PncTaskRequest::_time_duration_type arg)
  {
    msg_.time_duration = std::move(arg);
    return Init_PncTaskRequest_reserve_info(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_play_timestamp
{
public:
  explicit Init_PncTaskRequest_play_timestamp(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_time_duration play_timestamp(::aimdk_msgs::msg::PncTaskRequest::_play_timestamp_type arg)
  {
    msg_.play_timestamp = std::move(arg);
    return Init_PncTaskRequest_time_duration(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_trajectory_vel
{
public:
  explicit Init_PncTaskRequest_trajectory_vel(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_play_timestamp trajectory_vel(::aimdk_msgs::msg::PncTaskRequest::_trajectory_vel_type arg)
  {
    msg_.trajectory_vel = std::move(arg);
    return Init_PncTaskRequest_play_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_trajectory_pos
{
public:
  explicit Init_PncTaskRequest_trajectory_pos(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_trajectory_vel trajectory_pos(::aimdk_msgs::msg::PncTaskRequest::_trajectory_pos_type arg)
  {
    msg_.trajectory_pos = std::move(arg);
    return Init_PncTaskRequest_trajectory_vel(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_max_forward_speed
{
public:
  explicit Init_PncTaskRequest_max_forward_speed(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_trajectory_pos max_forward_speed(::aimdk_msgs::msg::PncTaskRequest::_max_forward_speed_type arg)
  {
    msg_.max_forward_speed = std::move(arg);
    return Init_PncTaskRequest_trajectory_pos(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_target_pose_radius
{
public:
  explicit Init_PncTaskRequest_target_pose_radius(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_max_forward_speed target_pose_radius(::aimdk_msgs::msg::PncTaskRequest::_target_pose_radius_type arg)
  {
    msg_.target_pose_radius = std::move(arg);
    return Init_PncTaskRequest_max_forward_speed(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_reference_line
{
public:
  explicit Init_PncTaskRequest_reference_line(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_target_pose_radius reference_line(::aimdk_msgs::msg::PncTaskRequest::_reference_line_type arg)
  {
    msg_.reference_line = std::move(arg);
    return Init_PncTaskRequest_target_pose_radius(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_target_pose
{
public:
  explicit Init_PncTaskRequest_target_pose(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_reference_line target_pose(::aimdk_msgs::msg::PncTaskRequest::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_PncTaskRequest_reference_line(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_map_id
{
public:
  explicit Init_PncTaskRequest_map_id(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_target_pose map_id(::aimdk_msgs::msg::PncTaskRequest::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_PncTaskRequest_target_pose(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_task_id
{
public:
  explicit Init_PncTaskRequest_task_id(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_map_id task_id(::aimdk_msgs::msg::PncTaskRequest::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_PncTaskRequest_map_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_pnc_mode
{
public:
  explicit Init_PncTaskRequest_pnc_mode(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_task_id pnc_mode(::aimdk_msgs::msg::PncTaskRequest::_pnc_mode_type arg)
  {
    msg_.pnc_mode = std::move(arg);
    return Init_PncTaskRequest_task_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_task_request
{
public:
  explicit Init_PncTaskRequest_task_request(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_pnc_mode task_request(::aimdk_msgs::msg::PncTaskRequest::_task_request_type arg)
  {
    msg_.task_request = std::move(arg);
    return Init_PncTaskRequest_pnc_mode(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_task_type
{
public:
  explicit Init_PncTaskRequest_task_type(::aimdk_msgs::msg::PncTaskRequest & msg)
  : msg_(msg)
  {}
  Init_PncTaskRequest_task_request task_type(::aimdk_msgs::msg::PncTaskRequest::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_PncTaskRequest_task_request(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

class Init_PncTaskRequest_header
{
public:
  Init_PncTaskRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PncTaskRequest_task_type header(::aimdk_msgs::msg::PncTaskRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PncTaskRequest_task_type(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PncTaskRequest>()
{
  return aimdk_msgs::msg::builder::Init_PncTaskRequest_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__BUILDER_HPP_
