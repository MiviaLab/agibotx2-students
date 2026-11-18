// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_servo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McServoStatus_waist_roll_offset
{
public:
  explicit Init_McServoStatus_waist_roll_offset(::aimdk_msgs::msg::McServoStatus & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McServoStatus waist_roll_offset(::aimdk_msgs::msg::McServoStatus::_waist_roll_offset_type arg)
  {
    msg_.waist_roll_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

class Init_McServoStatus_waist_pitch_offset
{
public:
  explicit Init_McServoStatus_waist_pitch_offset(::aimdk_msgs::msg::McServoStatus & msg)
  : msg_(msg)
  {}
  Init_McServoStatus_waist_roll_offset waist_pitch_offset(::aimdk_msgs::msg::McServoStatus::_waist_pitch_offset_type arg)
  {
    msg_.waist_pitch_offset = std::move(arg);
    return Init_McServoStatus_waist_roll_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

class Init_McServoStatus_waist_yaw_offset
{
public:
  explicit Init_McServoStatus_waist_yaw_offset(::aimdk_msgs::msg::McServoStatus & msg)
  : msg_(msg)
  {}
  Init_McServoStatus_waist_pitch_offset waist_yaw_offset(::aimdk_msgs::msg::McServoStatus::_waist_yaw_offset_type arg)
  {
    msg_.waist_yaw_offset = std::move(arg);
    return Init_McServoStatus_waist_pitch_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

class Init_McServoStatus_head_pitch_offset
{
public:
  explicit Init_McServoStatus_head_pitch_offset(::aimdk_msgs::msg::McServoStatus & msg)
  : msg_(msg)
  {}
  Init_McServoStatus_waist_yaw_offset head_pitch_offset(::aimdk_msgs::msg::McServoStatus::_head_pitch_offset_type arg)
  {
    msg_.head_pitch_offset = std::move(arg);
    return Init_McServoStatus_waist_yaw_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

class Init_McServoStatus_head_yaw_offset
{
public:
  explicit Init_McServoStatus_head_yaw_offset(::aimdk_msgs::msg::McServoStatus & msg)
  : msg_(msg)
  {}
  Init_McServoStatus_head_pitch_offset head_yaw_offset(::aimdk_msgs::msg::McServoStatus::_head_yaw_offset_type arg)
  {
    msg_.head_yaw_offset = std::move(arg);
    return Init_McServoStatus_head_pitch_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

class Init_McServoStatus_squat_limit
{
public:
  explicit Init_McServoStatus_squat_limit(::aimdk_msgs::msg::McServoStatus & msg)
  : msg_(msg)
  {}
  Init_McServoStatus_head_yaw_offset squat_limit(::aimdk_msgs::msg::McServoStatus::_squat_limit_type arg)
  {
    msg_.squat_limit = std::move(arg);
    return Init_McServoStatus_head_yaw_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

class Init_McServoStatus_squat_offset
{
public:
  explicit Init_McServoStatus_squat_offset(::aimdk_msgs::msg::McServoStatus & msg)
  : msg_(msg)
  {}
  Init_McServoStatus_squat_limit squat_offset(::aimdk_msgs::msg::McServoStatus::_squat_offset_type arg)
  {
    msg_.squat_offset = std::move(arg);
    return Init_McServoStatus_squat_limit(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

class Init_McServoStatus_squat_enable
{
public:
  Init_McServoStatus_squat_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McServoStatus_squat_offset squat_enable(::aimdk_msgs::msg::McServoStatus::_squat_enable_type arg)
  {
    msg_.squat_enable = std::move(arg);
    return Init_McServoStatus_squat_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::McServoStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McServoStatus>()
{
  return aimdk_msgs::msg::builder::Init_McServoStatus_squat_enable();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__BUILDER_HPP_
