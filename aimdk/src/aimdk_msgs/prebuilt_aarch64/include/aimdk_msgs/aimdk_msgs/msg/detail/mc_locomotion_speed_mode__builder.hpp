// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/McLocomotionSpeedMode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/mc_locomotion_speed_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_McLocomotionSpeedMode_value
{
public:
  Init_McLocomotionSpeedMode_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::msg::McLocomotionSpeedMode value(::aimdk_msgs::msg::McLocomotionSpeedMode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::McLocomotionSpeedMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::McLocomotionSpeedMode>()
{
  return aimdk_msgs::msg::builder::Init_McLocomotionSpeedMode_value();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__BUILDER_HPP_
