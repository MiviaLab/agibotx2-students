// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/GetHdsEventHistory.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/get_hds_event_history__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__traits.hpp"
// Member 'query'
#include "aimdk_msgs/msg/detail/hds_event_query__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetHdsEventHistory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: query
  {
    out << "query: ";
    to_flow_style_yaml(msg.query, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetHdsEventHistory_Request & msg,
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

  // member: query
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query:\n";
    to_block_style_yaml(msg.query, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetHdsEventHistory_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::srv::GetHdsEventHistory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetHdsEventHistory_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetHdsEventHistory_Request>()
{
  return "aimdk_msgs::srv::GetHdsEventHistory_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::GetHdsEventHistory_Request>()
{
  return "aimdk_msgs/srv/GetHdsEventHistory_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetHdsEventHistory_Request>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::HdsEventQuery>::value && has_fixed_size<aimdk_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetHdsEventHistory_Request>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::HdsEventQuery>::value && has_bounded_size<aimdk_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<aimdk_msgs::srv::GetHdsEventHistory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/response_header__traits.hpp"
// Member 'records'
#include "aimdk_msgs/msg/detail/hds_event_record__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetHdsEventHistory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: records
  {
    if (msg.records.size() == 0) {
      out << "records: []";
    } else {
      out << "records: [";
      size_t pending_items = msg.records.size();
      for (auto item : msg.records) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_count
  {
    out << "total_count: ";
    rosidl_generator_traits::value_to_yaml(msg.total_count, out);
    out << ", ";
  }

  // member: has_more
  {
    out << "has_more: ";
    rosidl_generator_traits::value_to_yaml(msg.has_more, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetHdsEventHistory_Response & msg,
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

  // member: records
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.records.size() == 0) {
      out << "records: []\n";
    } else {
      out << "records:\n";
      for (auto item : msg.records) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: total_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_count: ";
    rosidl_generator_traits::value_to_yaml(msg.total_count, out);
    out << "\n";
  }

  // member: has_more
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_more: ";
    rosidl_generator_traits::value_to_yaml(msg.has_more, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetHdsEventHistory_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::srv::GetHdsEventHistory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetHdsEventHistory_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetHdsEventHistory_Response>()
{
  return "aimdk_msgs::srv::GetHdsEventHistory_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::GetHdsEventHistory_Response>()
{
  return "aimdk_msgs/srv/GetHdsEventHistory_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetHdsEventHistory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetHdsEventHistory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::GetHdsEventHistory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::GetHdsEventHistory>()
{
  return "aimdk_msgs::srv::GetHdsEventHistory";
}

template<>
inline const char * name<aimdk_msgs::srv::GetHdsEventHistory>()
{
  return "aimdk_msgs/srv/GetHdsEventHistory";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetHdsEventHistory>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::GetHdsEventHistory_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::GetHdsEventHistory_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetHdsEventHistory>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::GetHdsEventHistory_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::GetHdsEventHistory_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::GetHdsEventHistory>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::GetHdsEventHistory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::GetHdsEventHistory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__TRAITS_HPP_
