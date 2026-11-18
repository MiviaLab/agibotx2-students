// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'speed_mode'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_mode__traits.hpp"
// Member 'forward_bounds'
// Member 'lateral_bounds'
// Member 'angular_bounds'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_bounds__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McLocomotionSpeedStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_mode
  {
    out << "speed_mode: ";
    to_flow_style_yaml(msg.speed_mode, out);
    out << ", ";
  }

  // member: forward_bounds
  {
    out << "forward_bounds: ";
    to_flow_style_yaml(msg.forward_bounds, out);
    out << ", ";
  }

  // member: lateral_bounds
  {
    out << "lateral_bounds: ";
    to_flow_style_yaml(msg.lateral_bounds, out);
    out << ", ";
  }

  // member: angular_bounds
  {
    out << "angular_bounds: ";
    to_flow_style_yaml(msg.angular_bounds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McLocomotionSpeedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mode:\n";
    to_block_style_yaml(msg.speed_mode, out, indentation + 2);
  }

  // member: forward_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_bounds:\n";
    to_block_style_yaml(msg.forward_bounds, out, indentation + 2);
  }

  // member: lateral_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_bounds:\n";
    to_block_style_yaml(msg.lateral_bounds, out, indentation + 2);
  }

  // member: angular_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_bounds:\n";
    to_block_style_yaml(msg.angular_bounds, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McLocomotionSpeedStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::msg::McLocomotionSpeedStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McLocomotionSpeedStatus & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McLocomotionSpeedStatus>()
{
  return "aimdk_msgs::msg::McLocomotionSpeedStatus";
}

template<>
inline const char * name<aimdk_msgs::msg::McLocomotionSpeedStatus>()
{
  return "aimdk_msgs/msg/McLocomotionSpeedStatus";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McLocomotionSpeedStatus>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::McLocomotionSpeedBounds>::value && has_fixed_size<aimdk_msgs::msg::McLocomotionSpeedMode>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McLocomotionSpeedStatus>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::McLocomotionSpeedBounds>::value && has_bounded_size<aimdk_msgs::msg::McLocomotionSpeedMode>::value> {};

template<>
struct is_message<aimdk_msgs::msg::McLocomotionSpeedStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__TRAITS_HPP_
