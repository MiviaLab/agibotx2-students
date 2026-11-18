// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/TaskMasterState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/task_master_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fix_line_intro_state'
#include "aimdk_msgs/msg/detail/fix_line_intro_state__traits.hpp"
// Member 'pilot_state'
#include "aimdk_msgs/msg/detail/pilot_state__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskMasterState & msg,
  std::ostream & out)
{
  out << "{";
  // member: main_state
  {
    out << "main_state: ";
    rosidl_generator_traits::value_to_yaml(msg.main_state, out);
    out << ", ";
  }

  // member: sub_state
  {
    out << "sub_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_state, out);
    out << ", ";
  }

  // member: slam_state
  {
    out << "slam_state: ";
    rosidl_generator_traits::value_to_yaml(msg.slam_state, out);
    out << ", ";
  }

  // member: loc_map_id
  {
    out << "loc_map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_map_id, out);
    out << ", ";
  }

  // member: loc_map_name
  {
    out << "loc_map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_map_name, out);
    out << ", ";
  }

  // member: fix_line_intro_state
  {
    out << "fix_line_intro_state: ";
    to_flow_style_yaml(msg.fix_line_intro_state, out);
    out << ", ";
  }

  // member: pilot_state
  {
    out << "pilot_state: ";
    to_flow_style_yaml(msg.pilot_state, out);
    out << ", ";
  }

  // member: reserve_info
  {
    out << "reserve_info: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskMasterState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: main_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_state: ";
    rosidl_generator_traits::value_to_yaml(msg.main_state, out);
    out << "\n";
  }

  // member: sub_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_state, out);
    out << "\n";
  }

  // member: slam_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slam_state: ";
    rosidl_generator_traits::value_to_yaml(msg.slam_state, out);
    out << "\n";
  }

  // member: loc_map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_map_id, out);
    out << "\n";
  }

  // member: loc_map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_map_name, out);
    out << "\n";
  }

  // member: fix_line_intro_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_line_intro_state:\n";
    to_block_style_yaml(msg.fix_line_intro_state, out, indentation + 2);
  }

  // member: pilot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pilot_state:\n";
    to_block_style_yaml(msg.pilot_state, out, indentation + 2);
  }

  // member: reserve_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve_info: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve_info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskMasterState & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::TaskMasterState & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::TaskMasterState & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::TaskMasterState>()
{
  return "aimdk_msgs::msg::TaskMasterState";
}

template<>
inline const char * name<aimdk_msgs::msg::TaskMasterState>()
{
  return "aimdk_msgs/msg/TaskMasterState";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::TaskMasterState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::TaskMasterState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::TaskMasterState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__TRAITS_HPP_
