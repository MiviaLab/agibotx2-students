// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/HdsEventRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/hds_event_record__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HdsEventRecord & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: diag_code
  {
    out << "diag_code: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_code, out);
    out << ", ";
  }

  // member: alert_code
  {
    out << "alert_code: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_code, out);
    out << ", ";
  }

  // member: alert_location
  {
    out << "alert_location: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_location, out);
    out << ", ";
  }

  // member: first_timestamp
  {
    out << "first_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.first_timestamp, out);
    out << ", ";
  }

  // member: last_timestamp
  {
    out << "last_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_timestamp, out);
    out << ", ";
  }

  // member: recover_timestamp
  {
    out << "recover_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.recover_timestamp, out);
    out << ", ";
  }

  // member: duration_ns
  {
    out << "duration_ns: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_ns, out);
    out << ", ";
  }

  // member: recovered
  {
    out << "recovered: ";
    rosidl_generator_traits::value_to_yaml(msg.recovered, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HdsEventRecord & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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

  // member: alert_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_code: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_code, out);
    out << "\n";
  }

  // member: alert_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_location: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_location, out);
    out << "\n";
  }

  // member: first_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.first_timestamp, out);
    out << "\n";
  }

  // member: last_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_timestamp, out);
    out << "\n";
  }

  // member: recover_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recover_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.recover_timestamp, out);
    out << "\n";
  }

  // member: duration_ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_ns: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_ns, out);
    out << "\n";
  }

  // member: recovered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recovered: ";
    rosidl_generator_traits::value_to_yaml(msg.recovered, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HdsEventRecord & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::HdsEventRecord & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::HdsEventRecord & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::HdsEventRecord>()
{
  return "aimdk_msgs::msg::HdsEventRecord";
}

template<>
inline const char * name<aimdk_msgs::msg::HdsEventRecord>()
{
  return "aimdk_msgs/msg/HdsEventRecord";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::HdsEventRecord>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::HdsEventRecord>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::HdsEventRecord>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__TRAITS_HPP_
