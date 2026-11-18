// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/HdsEventQuery.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/hds_event_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HdsEventQuery & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_time
  {
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: diag_codes
  {
    if (msg.diag_codes.size() == 0) {
      out << "diag_codes: []";
    } else {
      out << "diag_codes: [";
      size_t pending_items = msg.diag_codes.size();
      for (auto item : msg.diag_codes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: alert_codes
  {
    if (msg.alert_codes.size() == 0) {
      out << "alert_codes: []";
    } else {
      out << "alert_codes: [";
      size_t pending_items = msg.alert_codes.size();
      for (auto item : msg.alert_codes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: alert_locations
  {
    if (msg.alert_locations.size() == 0) {
      out << "alert_locations: []";
    } else {
      out << "alert_locations: [";
      size_t pending_items = msg.alert_locations.size();
      for (auto item : msg.alert_locations) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: order_desc
  {
    out << "order_desc: ";
    rosidl_generator_traits::value_to_yaml(msg.order_desc, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: limit
  {
    out << "limit: ";
    rosidl_generator_traits::value_to_yaml(msg.limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HdsEventQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << "\n";
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << "\n";
  }

  // member: diag_codes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.diag_codes.size() == 0) {
      out << "diag_codes: []\n";
    } else {
      out << "diag_codes:\n";
      for (auto item : msg.diag_codes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: alert_codes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alert_codes.size() == 0) {
      out << "alert_codes: []\n";
    } else {
      out << "alert_codes:\n";
      for (auto item : msg.alert_codes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: alert_locations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alert_locations.size() == 0) {
      out << "alert_locations: []\n";
    } else {
      out << "alert_locations:\n";
      for (auto item : msg.alert_locations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: order_desc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_desc: ";
    rosidl_generator_traits::value_to_yaml(msg.order_desc, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit: ";
    rosidl_generator_traits::value_to_yaml(msg.limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HdsEventQuery & msg, bool use_flow_style = false)
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
  const aimdk_msgs::msg::HdsEventQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::HdsEventQuery & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::HdsEventQuery>()
{
  return "aimdk_msgs::msg::HdsEventQuery";
}

template<>
inline const char * name<aimdk_msgs::msg::HdsEventQuery>()
{
  return "aimdk_msgs/msg/HdsEventQuery";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::HdsEventQuery>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::HdsEventQuery>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::HdsEventQuery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__TRAITS_HPP_
