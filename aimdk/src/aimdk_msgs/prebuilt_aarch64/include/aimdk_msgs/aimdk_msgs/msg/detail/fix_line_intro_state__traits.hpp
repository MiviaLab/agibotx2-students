// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/FixLineIntroState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/fix_line_intro_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FixLineIntroState & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_task_id
  {
    out << "set_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.set_task_id, out);
    out << ", ";
  }

  // member: set_task_name
  {
    out << "set_task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.set_task_name, out);
    out << ", ";
  }

  // member: task_name
  {
    out << "task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.task_name, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
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

  // member: rest_site_number
  {
    out << "rest_site_number: ";
    rosidl_generator_traits::value_to_yaml(msg.rest_site_number, out);
    out << ", ";
  }

  // member: fix_line_intro_state
  {
    out << "fix_line_intro_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_line_intro_state, out);
    out << ", ";
  }

  // member: cur_target_id
  {
    out << "cur_target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_target_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FixLineIntroState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.set_task_id, out);
    out << "\n";
  }

  // member: set_task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.set_task_name, out);
    out << "\n";
  }

  // member: task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.task_name, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
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

  // member: rest_site_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rest_site_number: ";
    rosidl_generator_traits::value_to_yaml(msg.rest_site_number, out);
    out << "\n";
  }

  // member: fix_line_intro_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_line_intro_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_line_intro_state, out);
    out << "\n";
  }

  // member: cur_target_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_target_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_target_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FixLineIntroState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::FixLineIntroState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::FixLineIntroState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::FixLineIntroState>()
{
  return "aimdk_msgs::msg::FixLineIntroState";
}

template<>
inline const char * name<aimdk_msgs::msg::FixLineIntroState>()
{
  return "aimdk_msgs/msg/FixLineIntroState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::FixLineIntroState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::FixLineIntroState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::FixLineIntroState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__TRAITS_HPP_
