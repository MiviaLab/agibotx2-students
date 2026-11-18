// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/PostProcSig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/post_proc_sig__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sig_set'
#include "aimdk_msgs/msg/detail/sig_set__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PostProcSig & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: diag_code
  {
    out << "diag_code: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_code, out);
    out << ", ";
  }

  // member: sig_set
  {
    out << "sig_set: ";
    to_flow_style_yaml(msg.sig_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PostProcSig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: diag_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_code: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_code, out);
    out << "\n";
  }

  // member: sig_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sig_set:\n";
    to_block_style_yaml(msg.sig_set, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PostProcSig & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::PostProcSig & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::PostProcSig & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::PostProcSig>()
{
  return "aimdk_msgs::msg::PostProcSig";
}

template<>
inline const char * name<aimdk_msgs::msg::PostProcSig>()
{
  return "aimdk_msgs/msg/PostProcSig";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::PostProcSig>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::SigSet>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::PostProcSig>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::SigSet>::value> {};

template<>
struct is_message<aimdk_msgs::msg::PostProcSig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__TRAITS_HPP_
