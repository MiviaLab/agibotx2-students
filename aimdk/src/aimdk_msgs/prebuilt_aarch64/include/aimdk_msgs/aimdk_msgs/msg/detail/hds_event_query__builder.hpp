// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/HdsEventQuery.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/hds_event_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_HdsEventQuery_limit
{
public:
  explicit Init_HdsEventQuery_limit(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::HdsEventQuery limit(::aimdk_msgs::msg::HdsEventQuery::_limit_type arg)
  {
    msg_.limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_offset
{
public:
  explicit Init_HdsEventQuery_offset(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  Init_HdsEventQuery_limit offset(::aimdk_msgs::msg::HdsEventQuery::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_HdsEventQuery_limit(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_order_desc
{
public:
  explicit Init_HdsEventQuery_order_desc(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  Init_HdsEventQuery_offset order_desc(::aimdk_msgs::msg::HdsEventQuery::_order_desc_type arg)
  {
    msg_.order_desc = std::move(arg);
    return Init_HdsEventQuery_offset(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_state
{
public:
  explicit Init_HdsEventQuery_state(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  Init_HdsEventQuery_order_desc state(::aimdk_msgs::msg::HdsEventQuery::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_HdsEventQuery_order_desc(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_alert_locations
{
public:
  explicit Init_HdsEventQuery_alert_locations(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  Init_HdsEventQuery_state alert_locations(::aimdk_msgs::msg::HdsEventQuery::_alert_locations_type arg)
  {
    msg_.alert_locations = std::move(arg);
    return Init_HdsEventQuery_state(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_alert_codes
{
public:
  explicit Init_HdsEventQuery_alert_codes(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  Init_HdsEventQuery_alert_locations alert_codes(::aimdk_msgs::msg::HdsEventQuery::_alert_codes_type arg)
  {
    msg_.alert_codes = std::move(arg);
    return Init_HdsEventQuery_alert_locations(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_diag_codes
{
public:
  explicit Init_HdsEventQuery_diag_codes(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  Init_HdsEventQuery_alert_codes diag_codes(::aimdk_msgs::msg::HdsEventQuery::_diag_codes_type arg)
  {
    msg_.diag_codes = std::move(arg);
    return Init_HdsEventQuery_alert_codes(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_end_time
{
public:
  explicit Init_HdsEventQuery_end_time(::aimdk_msgs::msg::HdsEventQuery & msg)
  : msg_(msg)
  {}
  Init_HdsEventQuery_diag_codes end_time(::aimdk_msgs::msg::HdsEventQuery::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_HdsEventQuery_diag_codes(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

class Init_HdsEventQuery_start_time
{
public:
  Init_HdsEventQuery_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HdsEventQuery_end_time start_time(::aimdk_msgs::msg::HdsEventQuery::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_HdsEventQuery_end_time(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::HdsEventQuery>()
{
  return aimdk_msgs::msg::builder::Init_HdsEventQuery_start_time();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__BUILDER_HPP_
