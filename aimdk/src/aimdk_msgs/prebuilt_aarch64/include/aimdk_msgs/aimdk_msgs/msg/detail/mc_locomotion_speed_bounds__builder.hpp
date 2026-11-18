// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McLocomotionSpeedBounds.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_locomotion_speed_bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McLocomotionSpeedBounds_max_value
{
public:
  explicit Init_McLocomotionSpeedBounds_max_value(::aimdk_msgs::msg::McLocomotionSpeedBounds & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::McLocomotionSpeedBounds max_value(::aimdk_msgs::msg::McLocomotionSpeedBounds::_max_value_type arg)
  {
    msg_.max_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McLocomotionSpeedBounds msg_;
};

class Init_McLocomotionSpeedBounds_min_value
{
public:
  Init_McLocomotionSpeedBounds_min_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McLocomotionSpeedBounds_max_value min_value(::aimdk_msgs::msg::McLocomotionSpeedBounds::_min_value_type arg)
  {
    msg_.min_value = std::move(arg);
    return Init_McLocomotionSpeedBounds_max_value(msg_);
  }

private:
  ::aimdk_msgs::msg::McLocomotionSpeedBounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McLocomotionSpeedBounds>()
{
  return aimdk_msgs::msg::builder::Init_McLocomotionSpeedBounds_min_value();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__BUILDER_HPP_
