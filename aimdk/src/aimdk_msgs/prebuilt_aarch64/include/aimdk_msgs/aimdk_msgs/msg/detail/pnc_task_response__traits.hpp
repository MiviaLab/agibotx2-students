// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/PncTaskResponse.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/pnc_task_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PncTaskResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: task_type
  {
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: task_status
  {
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << ", ";
  }

  // member: reserve_info
  {
    if (msg.reserve_info.size() == 0) {
      out << "reserve_info: []";
    } else {
      out << "reserve_info: [";
      size_t pending_items = msg.reserve_info.size();
      for (auto item : msg.reserve_info) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PncTaskResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
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

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: task_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << "\n";
  }

  // member: reserve_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserve_info.size() == 0) {
      out << "reserve_info: []\n";
    } else {
      out << "reserve_info:\n";
      for (auto item : msg.reserve_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PncTaskResponse & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::PncTaskResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::PncTaskResponse & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::PncTaskResponse>()
{
  return "aimdk_msgs::msg::PncTaskResponse";
}

template<>
inline const char * name<aimdk_msgs::msg::PncTaskResponse>()
{
  return "aimdk_msgs/msg/PncTaskResponse";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::PncTaskResponse>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::MessageHeader>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::PncTaskResponse>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::MessageHeader>::value> {};

template<>
struct is_message<aimdk_msgs::msg::PncTaskResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__TRAITS_HPP_
