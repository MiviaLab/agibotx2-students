// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/McServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/mc_servo_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const McServoStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: squat_enable
  {
    out << "squat_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.squat_enable, out);
    out << ", ";
  }

  // member: squat_offset
  {
    out << "squat_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.squat_offset, out);
    out << ", ";
  }

  // member: squat_limit
  {
    out << "squat_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.squat_limit, out);
    out << ", ";
  }

  // member: head_yaw_offset
  {
    out << "head_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.head_yaw_offset, out);
    out << ", ";
  }

  // member: head_pitch_offset
  {
    out << "head_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.head_pitch_offset, out);
    out << ", ";
  }

  // member: waist_yaw_offset
  {
    out << "waist_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_yaw_offset, out);
    out << ", ";
  }

  // member: waist_pitch_offset
  {
    out << "waist_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_pitch_offset, out);
    out << ", ";
  }

  // member: waist_roll_offset
  {
    out << "waist_roll_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_roll_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const McServoStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: squat_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "squat_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.squat_enable, out);
    out << "\n";
  }

  // member: squat_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "squat_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.squat_offset, out);
    out << "\n";
  }

  // member: squat_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "squat_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.squat_limit, out);
    out << "\n";
  }

  // member: head_yaw_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.head_yaw_offset, out);
    out << "\n";
  }

  // member: head_pitch_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.head_pitch_offset, out);
    out << "\n";
  }

  // member: waist_yaw_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_yaw_offset, out);
    out << "\n";
  }

  // member: waist_pitch_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_pitch_offset, out);
    out << "\n";
  }

  // member: waist_roll_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_roll_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.waist_roll_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const McServoStatus & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::McServoStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::McServoStatus & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::McServoStatus>()
{
  return "aimdk_msgs::msg::McServoStatus";
}

template<>
inline const char * name<aimdk_msgs::msg::McServoStatus>()
{
  return "aimdk_msgs/msg/McServoStatus";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::McServoStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::McServoStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::msg::McServoStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__TRAITS_HPP_
