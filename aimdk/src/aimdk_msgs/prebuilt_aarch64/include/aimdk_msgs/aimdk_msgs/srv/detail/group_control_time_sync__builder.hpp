// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GroupControlTimeSync.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/group_control_time_sync__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GroupControlTimeSync_Request_slaves
{
public:
  explicit Init_GroupControlTimeSync_Request_slaves(::aimdk_msgs::srv::GroupControlTimeSync_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GroupControlTimeSync_Request slaves(::aimdk_msgs::srv::GroupControlTimeSync_Request::_slaves_type arg)
  {
    msg_.slaves = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GroupControlTimeSync_Request msg_;
};

class Init_GroupControlTimeSync_Request_header
{
public:
  Init_GroupControlTimeSync_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupControlTimeSync_Request_slaves header(::aimdk_msgs::srv::GroupControlTimeSync_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GroupControlTimeSync_Request_slaves(msg_);
  }

private:
  ::aimdk_msgs::srv::GroupControlTimeSync_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GroupControlTimeSync_Request>()
{
  return aimdk_msgs::srv::builder::Init_GroupControlTimeSync_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GroupControlTimeSync_Response_error_msg
{
public:
  explicit Init_GroupControlTimeSync_Response_error_msg(::aimdk_msgs::srv::GroupControlTimeSync_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GroupControlTimeSync_Response error_msg(::aimdk_msgs::srv::GroupControlTimeSync_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GroupControlTimeSync_Response msg_;
};

class Init_GroupControlTimeSync_Response_error_code
{
public:
  explicit Init_GroupControlTimeSync_Response_error_code(::aimdk_msgs::srv::GroupControlTimeSync_Response & msg)
  : msg_(msg)
  {}
  Init_GroupControlTimeSync_Response_error_msg error_code(::aimdk_msgs::srv::GroupControlTimeSync_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_GroupControlTimeSync_Response_error_msg(msg_);
  }

private:
  ::aimdk_msgs::srv::GroupControlTimeSync_Response msg_;
};

class Init_GroupControlTimeSync_Response_header
{
public:
  Init_GroupControlTimeSync_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupControlTimeSync_Response_error_code header(::aimdk_msgs::srv::GroupControlTimeSync_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GroupControlTimeSync_Response_error_code(msg_);
  }

private:
  ::aimdk_msgs::srv::GroupControlTimeSync_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GroupControlTimeSync_Response>()
{
  return aimdk_msgs::srv::builder::Init_GroupControlTimeSync_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__BUILDER_HPP_
