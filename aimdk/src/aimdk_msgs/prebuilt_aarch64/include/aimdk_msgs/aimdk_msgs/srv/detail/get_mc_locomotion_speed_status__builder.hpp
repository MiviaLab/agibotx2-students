// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetMcLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcLocomotionSpeedStatus_Request_request
{
public:
  Init_GetMcLocomotionSpeedStatus_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request request(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetMcLocomotionSpeedStatus_Request_request();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMcLocomotionSpeedStatus_Response_step_speed_status
{
public:
  explicit Init_GetMcLocomotionSpeedStatus_Response_step_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response step_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response::_step_speed_status_type arg)
  {
    msg_.step_speed_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response msg_;
};

class Init_GetMcLocomotionSpeedStatus_Response_high_speed_status
{
public:
  explicit Init_GetMcLocomotionSpeedStatus_Response_high_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetMcLocomotionSpeedStatus_Response_step_speed_status high_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response::_high_speed_status_type arg)
  {
    msg_.high_speed_status = std::move(arg);
    return Init_GetMcLocomotionSpeedStatus_Response_step_speed_status(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response msg_;
};

class Init_GetMcLocomotionSpeedStatus_Response_medium_speed_status
{
public:
  explicit Init_GetMcLocomotionSpeedStatus_Response_medium_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetMcLocomotionSpeedStatus_Response_high_speed_status medium_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response::_medium_speed_status_type arg)
  {
    msg_.medium_speed_status = std::move(arg);
    return Init_GetMcLocomotionSpeedStatus_Response_high_speed_status(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response msg_;
};

class Init_GetMcLocomotionSpeedStatus_Response_low_speed_status
{
public:
  explicit Init_GetMcLocomotionSpeedStatus_Response_low_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetMcLocomotionSpeedStatus_Response_medium_speed_status low_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response::_low_speed_status_type arg)
  {
    msg_.low_speed_status = std::move(arg);
    return Init_GetMcLocomotionSpeedStatus_Response_medium_speed_status(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response msg_;
};

class Init_GetMcLocomotionSpeedStatus_Response_none_speed_status
{
public:
  explicit Init_GetMcLocomotionSpeedStatus_Response_none_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetMcLocomotionSpeedStatus_Response_low_speed_status none_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response::_none_speed_status_type arg)
  {
    msg_.none_speed_status = std::move(arg);
    return Init_GetMcLocomotionSpeedStatus_Response_low_speed_status(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response msg_;
};

class Init_GetMcLocomotionSpeedStatus_Response_current_speed_status
{
public:
  explicit Init_GetMcLocomotionSpeedStatus_Response_current_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetMcLocomotionSpeedStatus_Response_none_speed_status current_speed_status(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response::_current_speed_status_type arg)
  {
    msg_.current_speed_status = std::move(arg);
    return Init_GetMcLocomotionSpeedStatus_Response_none_speed_status(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response msg_;
};

class Init_GetMcLocomotionSpeedStatus_Response_header
{
public:
  Init_GetMcLocomotionSpeedStatus_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMcLocomotionSpeedStatus_Response_current_speed_status header(::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetMcLocomotionSpeedStatus_Response_current_speed_status(msg_);
  }

private:
  ::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetMcLocomotionSpeedStatus_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__BUILDER_HPP_
