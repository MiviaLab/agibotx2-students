// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/UpperBodyCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/upper_body_command_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UpperBodyCommandArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: hand_sub_mode
  {
    out << "hand_sub_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_sub_mode, out);
    out << ", ";
  }

  // member: head_pos
  {
    if (msg.head_pos.size() == 0) {
      out << "head_pos: []";
    } else {
      out << "head_pos: [";
      size_t pending_items = msg.head_pos.size();
      for (auto item : msg.head_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arm_pos
  {
    if (msg.arm_pos.size() == 0) {
      out << "arm_pos: []";
    } else {
      out << "arm_pos: [";
      size_t pending_items = msg.arm_pos.size();
      for (auto item : msg.arm_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hand_pos
  {
    if (msg.hand_pos.size() == 0) {
      out << "hand_pos: []";
    } else {
      out << "hand_pos: [";
      size_t pending_items = msg.hand_pos.size();
      for (auto item : msg.hand_pos) {
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
  const UpperBodyCommandArray & msg,
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

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: hand_sub_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_sub_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_sub_mode, out);
    out << "\n";
  }

  // member: head_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.head_pos.size() == 0) {
      out << "head_pos: []\n";
    } else {
      out << "head_pos:\n";
      for (auto item : msg.head_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arm_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arm_pos.size() == 0) {
      out << "arm_pos: []\n";
    } else {
      out << "arm_pos:\n";
      for (auto item : msg.arm_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hand_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_pos.size() == 0) {
      out << "hand_pos: []\n";
    } else {
      out << "hand_pos:\n";
      for (auto item : msg.hand_pos) {
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

inline std::string to_yaml(const UpperBodyCommandArray & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::UpperBodyCommandArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::UpperBodyCommandArray & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::UpperBodyCommandArray>()
{
  return "aimdk_msgs::msg::UpperBodyCommandArray";
}

template<>
inline const char * name<aimdk_msgs::msg::UpperBodyCommandArray>()
{
  return "aimdk_msgs/msg/UpperBodyCommandArray";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::UpperBodyCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::UpperBodyCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::UpperBodyCommandArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__TRAITS_HPP_
