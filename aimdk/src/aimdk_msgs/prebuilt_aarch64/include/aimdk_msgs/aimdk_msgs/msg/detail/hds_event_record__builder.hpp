// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/HdsEventRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/hds_event_record__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_HdsEventRecord_recovered
{
public:
  explicit Init_HdsEventRecord_recovered(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::HdsEventRecord recovered(::aimdk_msgs::msg::HdsEventRecord::_recovered_type arg)
  {
    msg_.recovered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_duration_ns
{
public:
  explicit Init_HdsEventRecord_duration_ns(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  Init_HdsEventRecord_recovered duration_ns(::aimdk_msgs::msg::HdsEventRecord::_duration_ns_type arg)
  {
    msg_.duration_ns = std::move(arg);
    return Init_HdsEventRecord_recovered(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_recover_timestamp
{
public:
  explicit Init_HdsEventRecord_recover_timestamp(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  Init_HdsEventRecord_duration_ns recover_timestamp(::aimdk_msgs::msg::HdsEventRecord::_recover_timestamp_type arg)
  {
    msg_.recover_timestamp = std::move(arg);
    return Init_HdsEventRecord_duration_ns(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_last_timestamp
{
public:
  explicit Init_HdsEventRecord_last_timestamp(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  Init_HdsEventRecord_recover_timestamp last_timestamp(::aimdk_msgs::msg::HdsEventRecord::_last_timestamp_type arg)
  {
    msg_.last_timestamp = std::move(arg);
    return Init_HdsEventRecord_recover_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_first_timestamp
{
public:
  explicit Init_HdsEventRecord_first_timestamp(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  Init_HdsEventRecord_last_timestamp first_timestamp(::aimdk_msgs::msg::HdsEventRecord::_first_timestamp_type arg)
  {
    msg_.first_timestamp = std::move(arg);
    return Init_HdsEventRecord_last_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_alert_location
{
public:
  explicit Init_HdsEventRecord_alert_location(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  Init_HdsEventRecord_first_timestamp alert_location(::aimdk_msgs::msg::HdsEventRecord::_alert_location_type arg)
  {
    msg_.alert_location = std::move(arg);
    return Init_HdsEventRecord_first_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_alert_code
{
public:
  explicit Init_HdsEventRecord_alert_code(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  Init_HdsEventRecord_alert_location alert_code(::aimdk_msgs::msg::HdsEventRecord::_alert_code_type arg)
  {
    msg_.alert_code = std::move(arg);
    return Init_HdsEventRecord_alert_location(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_diag_code
{
public:
  explicit Init_HdsEventRecord_diag_code(::aimdk_msgs::msg::HdsEventRecord & msg)
  : msg_(msg)
  {}
  Init_HdsEventRecord_alert_code diag_code(::aimdk_msgs::msg::HdsEventRecord::_diag_code_type arg)
  {
    msg_.diag_code = std::move(arg);
    return Init_HdsEventRecord_alert_code(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

class Init_HdsEventRecord_id
{
public:
  Init_HdsEventRecord_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HdsEventRecord_diag_code id(::aimdk_msgs::msg::HdsEventRecord::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_HdsEventRecord_diag_code(msg_);
  }

private:
  ::aimdk_msgs::msg::HdsEventRecord msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::HdsEventRecord>()
{
  return aimdk_msgs::msg::builder::Init_HdsEventRecord_id();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__BUILDER_HPP_
