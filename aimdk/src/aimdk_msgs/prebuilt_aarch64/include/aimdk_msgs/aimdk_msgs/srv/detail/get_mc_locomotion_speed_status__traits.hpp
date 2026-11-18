// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:srv/GetMcLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__TRAITS_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMcLocomotionSpeedStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMcLocomotionSpeedStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMcLocomotionSpeedStatus_Request & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>()
{
  return "aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>()
{
  return "aimdk_msgs/srv/GetMcLocomotionSpeedStatus_Request";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::CommonRequest>::value> {};

template<>
struct is_message<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/response_header__traits.hpp"
// Member 'current_speed_status'
// Member 'none_speed_status'
// Member 'low_speed_status'
// Member 'medium_speed_status'
// Member 'high_speed_status'
// Member 'step_speed_status'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__traits.hpp"

namespace aimdk_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMcLocomotionSpeedStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_speed_status
  {
    out << "current_speed_status: ";
    to_flow_style_yaml(msg.current_speed_status, out);
    out << ", ";
  }

  // member: none_speed_status
  {
    out << "none_speed_status: ";
    to_flow_style_yaml(msg.none_speed_status, out);
    out << ", ";
  }

  // member: low_speed_status
  {
    out << "low_speed_status: ";
    to_flow_style_yaml(msg.low_speed_status, out);
    out << ", ";
  }

  // member: medium_speed_status
  {
    out << "medium_speed_status: ";
    to_flow_style_yaml(msg.medium_speed_status, out);
    out << ", ";
  }

  // member: high_speed_status
  {
    out << "high_speed_status: ";
    to_flow_style_yaml(msg.high_speed_status, out);
    out << ", ";
  }

  // member: step_speed_status
  {
    out << "step_speed_status: ";
    to_flow_style_yaml(msg.step_speed_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMcLocomotionSpeedStatus_Response & msg,
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

  // member: current_speed_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_speed_status:\n";
    to_block_style_yaml(msg.current_speed_status, out, indentation + 2);
  }

  // member: none_speed_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "none_speed_status:\n";
    to_block_style_yaml(msg.none_speed_status, out, indentation + 2);
  }

  // member: low_speed_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_speed_status:\n";
    to_block_style_yaml(msg.low_speed_status, out, indentation + 2);
  }

  // member: medium_speed_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "medium_speed_status:\n";
    to_block_style_yaml(msg.medium_speed_status, out, indentation + 2);
  }

  // member: high_speed_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_speed_status:\n";
    to_block_style_yaml(msg.high_speed_status, out, indentation + 2);
  }

  // member: step_speed_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_speed_status:\n";
    to_block_style_yaml(msg.step_speed_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMcLocomotionSpeedStatus_Response & msg, bool use_flow_style = false)
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
  const aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg)
{
  return aimdk_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>()
{
  return "aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>()
{
  return "aimdk_msgs/srv/GetMcLocomotionSpeedStatus_Response";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>
  : std::integral_constant<bool, has_fixed_size<aimdk_msgs::msg::McLocomotionSpeedStatus>::value && has_fixed_size<aimdk_msgs::msg::ResponseHeader>::value> {};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>
  : std::integral_constant<bool, has_bounded_size<aimdk_msgs::msg::McLocomotionSpeedStatus>::value && has_bounded_size<aimdk_msgs::msg::ResponseHeader>::value> {};

template<>
struct is_message<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aimdk_msgs::srv::GetMcLocomotionSpeedStatus>()
{
  return "aimdk_msgs::srv::GetMcLocomotionSpeedStatus";
}

template<>
inline const char * name<aimdk_msgs::srv::GetMcLocomotionSpeedStatus>()
{
  return "aimdk_msgs/srv/GetMcLocomotionSpeedStatus";
}

template<>
struct has_fixed_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>::value &&
    has_fixed_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>::value &&
    has_bounded_size<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>::value
  >
{
};

template<>
struct is_service<aimdk_msgs::srv::GetMcLocomotionSpeedStatus>
  : std::true_type
{
};

template<>
struct is_service_request<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__TRAITS_HPP_
