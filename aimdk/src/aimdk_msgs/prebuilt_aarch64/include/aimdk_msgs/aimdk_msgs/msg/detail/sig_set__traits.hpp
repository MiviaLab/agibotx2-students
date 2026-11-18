// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/SigSet.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SIG_SET__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SIG_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/sig_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SigSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_sig
  {
    out << "robot_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_sig, out);
    out << ", ";
  }

  // member: motion_sig
  {
    out << "motion_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_sig, out);
    out << ", ";
  }

  // member: sound_sig
  {
    out << "sound_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_sig, out);
    out << ", ";
  }

  // member: led_sig
  {
    out << "led_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.led_sig, out);
    out << ", ";
  }

  // member: facial_sig
  {
    out << "facial_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.facial_sig, out);
    out << ", ";
  }

  // member: reserve
  {
    out << "reserve: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve, out);
    out << ", ";
  }

  // member: funcdisable_sig
  {
    out << "funcdisable_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.funcdisable_sig, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SigSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_sig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_sig, out);
    out << "\n";
  }

  // member: motion_sig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_sig, out);
    out << "\n";
  }

  // member: sound_sig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_sig, out);
    out << "\n";
  }

  // member: led_sig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.led_sig, out);
    out << "\n";
  }

  // member: facial_sig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facial_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.facial_sig, out);
    out << "\n";
  }

  // member: reserve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve, out);
    out << "\n";
  }

  // member: funcdisable_sig
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "funcdisable_sig: ";
    rosidl_generator_traits::value_to_yaml(msg.funcdisable_sig, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SigSet & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::SigSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::SigSet & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::SigSet>()
{
  return "aimdk_msgs::msg::SigSet";
}

template<>
inline const char * name<aimdk_msgs::msg::SigSet>()
{
  return "aimdk_msgs/msg/SigSet";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::SigSet>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::SigSet>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aimdk_msgs::msg::SigSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__SIG_SET__TRAITS_HPP_
