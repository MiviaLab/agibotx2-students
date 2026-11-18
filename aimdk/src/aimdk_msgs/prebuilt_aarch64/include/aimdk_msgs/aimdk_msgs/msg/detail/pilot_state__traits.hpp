// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/PilotState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/pilot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PilotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_name
  {
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << ", ";
  }

  // member: target_id
  {
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << ", ";
  }

  // member: intro_task_name
  {
    out << "intro_task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.intro_task_name, out);
    out << ", ";
  }

  // member: intro_task_id
  {
    out << "intro_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.intro_task_id, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: pilot_state
  {
    out << "pilot_state: ";
    rosidl_generator_traits::value_to_yaml(msg.pilot_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PilotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << "\n";
  }

  // member: target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_id, out);
    out << "\n";
  }

  // member: intro_task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intro_task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.intro_task_name, out);
    out << "\n";
  }

  // member: intro_task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intro_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.intro_task_id, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: pilot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pilot_state: ";
    rosidl_generator_traits::value_to_yaml(msg.pilot_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PilotState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::PilotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::PilotState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::PilotState>()
{
  return "aimdk_msgs::msg::PilotState";
}

template<>
inline const char * name<aimdk_msgs::msg::PilotState>()
{
  return "aimdk_msgs/msg/PilotState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::PilotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::PilotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::PilotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__TRAITS_HPP_
