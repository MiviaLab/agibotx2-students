// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McLocomotionSpeedStatus_angular_bounds
{
public:
  explicit Init_McLocomotionSpeedStatus_angular_bounds(::aimdk_msgs::msg::McLocomotionSpeedStatus & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McLocomotionSpeedStatus angular_bounds(::aimdk_msgs::msg::McLocomotionSpeedStatus::_angular_bounds_type arg)
  {
    msg_.angular_bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McLocomotionSpeedStatus msg_;
};

class Init_McLocomotionSpeedStatus_lateral_bounds
{
public:
  explicit Init_McLocomotionSpeedStatus_lateral_bounds(::aimdk_msgs::msg::McLocomotionSpeedStatus & msg)
  : msg_(msg)
  {}
  Init_McLocomotionSpeedStatus_angular_bounds lateral_bounds(::aimdk_msgs::msg::McLocomotionSpeedStatus::_lateral_bounds_type arg)
  {
    msg_.lateral_bounds = std::move(arg);
    return Init_McLocomotionSpeedStatus_angular_bounds(msg_);
  }

private:
  ::aimdk_msgs::msg::McLocomotionSpeedStatus msg_;
};

class Init_McLocomotionSpeedStatus_forward_bounds
{
public:
  explicit Init_McLocomotionSpeedStatus_forward_bounds(::aimdk_msgs::msg::McLocomotionSpeedStatus & msg)
  : msg_(msg)
  {}
  Init_McLocomotionSpeedStatus_lateral_bounds forward_bounds(::aimdk_msgs::msg::McLocomotionSpeedStatus::_forward_bounds_type arg)
  {
    msg_.forward_bounds = std::move(arg);
    return Init_McLocomotionSpeedStatus_lateral_bounds(msg_);
  }

private:
  ::aimdk_msgs::msg::McLocomotionSpeedStatus msg_;
};

class Init_McLocomotionSpeedStatus_speed_mode
{
public:
  Init_McLocomotionSpeedStatus_speed_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McLocomotionSpeedStatus_forward_bounds speed_mode(::aimdk_msgs::msg::McLocomotionSpeedStatus::_speed_mode_type arg)
  {
    msg_.speed_mode = std::move(arg);
    return Init_McLocomotionSpeedStatus_forward_bounds(msg_);
  }

private:
  ::aimdk_msgs::msg::McLocomotionSpeedStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McLocomotionSpeedStatus>()
{
  return aimdk_msgs::msg::builder::Init_McLocomotionSpeedStatus_speed_mode();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__BUILDER_HPP_
