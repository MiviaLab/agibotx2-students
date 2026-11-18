// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/GetHdsEventHistory.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/get_hds_event_history__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetHdsEventHistory_Request_query
{
public:
  explicit Init_GetHdsEventHistory_Request_query(::aimdk_msgs::srv::GetHdsEventHistory_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetHdsEventHistory_Request query(::aimdk_msgs::srv::GetHdsEventHistory_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetHdsEventHistory_Request msg_;
};

class Init_GetHdsEventHistory_Request_header
{
public:
  Init_GetHdsEventHistory_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetHdsEventHistory_Request_query header(::aimdk_msgs::srv::GetHdsEventHistory_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetHdsEventHistory_Request_query(msg_);
  }

private:
  ::aimdk_msgs::srv::GetHdsEventHistory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetHdsEventHistory_Request>()
{
  return aimdk_msgs::srv::builder::Init_GetHdsEventHistory_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_GetHdsEventHistory_Response_has_more
{
public:
  explicit Init_GetHdsEventHistory_Response_has_more(::aimdk_msgs::srv::GetHdsEventHistory_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::GetHdsEventHistory_Response has_more(::aimdk_msgs::srv::GetHdsEventHistory_Response::_has_more_type arg)
  {
    msg_.has_more = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::GetHdsEventHistory_Response msg_;
};

class Init_GetHdsEventHistory_Response_total_count
{
public:
  explicit Init_GetHdsEventHistory_Response_total_count(::aimdk_msgs::srv::GetHdsEventHistory_Response & msg)
  : msg_(msg)
  {}
  Init_GetHdsEventHistory_Response_has_more total_count(::aimdk_msgs::srv::GetHdsEventHistory_Response::_total_count_type arg)
  {
    msg_.total_count = std::move(arg);
    return Init_GetHdsEventHistory_Response_has_more(msg_);
  }

private:
  ::aimdk_msgs::srv::GetHdsEventHistory_Response msg_;
};

class Init_GetHdsEventHistory_Response_records
{
public:
  explicit Init_GetHdsEventHistory_Response_records(::aimdk_msgs::srv::GetHdsEventHistory_Response & msg)
  : msg_(msg)
  {}
  Init_GetHdsEventHistory_Response_total_count records(::aimdk_msgs::srv::GetHdsEventHistory_Response::_records_type arg)
  {
    msg_.records = std::move(arg);
    return Init_GetHdsEventHistory_Response_total_count(msg_);
  }

private:
  ::aimdk_msgs::srv::GetHdsEventHistory_Response msg_;
};

class Init_GetHdsEventHistory_Response_header
{
public:
  Init_GetHdsEventHistory_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetHdsEventHistory_Response_records header(::aimdk_msgs::srv::GetHdsEventHistory_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetHdsEventHistory_Response_records(msg_);
  }

private:
  ::aimdk_msgs::srv::GetHdsEventHistory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::GetHdsEventHistory_Response>()
{
  return aimdk_msgs::srv::builder::Init_GetHdsEventHistory_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__BUILDER_HPP_
