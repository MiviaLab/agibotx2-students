// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/GroupControlTimeSync.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/group_control_time_sync__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"
// Member 'slaves'
#include "aimdk_msgs/msg/detail/slave_device__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GroupControlTimeSync_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: slaves
  {
    if (msg.slaves.size() == 0) {
      out << "slaves: []";
    } else {
      out << "slaves: [";
      size_t pending_items = msg.slaves.size();
      for (auto item : msg.slaves) {
        to_flow_style_yaml(item, out);
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
  const GroupControlTimeSync_Request & msg,
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

  // member: slaves
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.slaves.size() == 0) {
      out << "slaves: []\n";
    } else {
      out << "slaves:\n";
      for (auto item : msg.slaves) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupControlTimeSync_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GroupControlTimeSync_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GroupControlTimeSync_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GroupControlTimeSync_Request>()
{
  return "aimdk_msgs::srv::GroupControlTimeSync_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::GroupControlTimeSync_Request>()
{
  return "aimdk_msgs/srv/GroupControlTimeSync_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GroupControlTimeSync_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GroupControlTimeSync_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::GroupControlTimeSync_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GroupControlTimeSync_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroupControlTimeSync_Response & msg,
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

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupControlTimeSync_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GroupControlTimeSync_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GroupControlTimeSync_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GroupControlTimeSync_Response>()
{
  return "aimdk_msgs::srv::GroupControlTimeSync_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::GroupControlTimeSync_Response>()
{
  return "aimdk_msgs/srv/GroupControlTimeSync_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GroupControlTimeSync_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GroupControlTimeSync_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::srv::GroupControlTimeSync_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::GroupControlTimeSync>()
{
  return "aimdk_msgs::srv::GroupControlTimeSync";
}

template<>
inline const char * name<aimdk_msgs::srv::GroupControlTimeSync>()
{
  return "aimdk_msgs/srv/GroupControlTimeSync";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GroupControlTimeSync>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::GroupControlTimeSync_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::GroupControlTimeSync_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::GroupControlTimeSync>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::GroupControlTimeSync_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::GroupControlTimeSync_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::GroupControlTimeSync>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::GroupControlTimeSync_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::GroupControlTimeSync_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__TRAITS_HPP_
