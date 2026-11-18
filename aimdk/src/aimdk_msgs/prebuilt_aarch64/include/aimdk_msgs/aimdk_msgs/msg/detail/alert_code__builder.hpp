// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/alert_code__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_AlertCode_code
{
public:
  explicit Init_AlertCode_code(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::AlertCode code(::aimdk_msgs::msg::AlertCode::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_first_timestamp
{
public:
  explicit Init_AlertCode_first_timestamp(::aimdk_msgs::msg::AlertCode & msg)
  : msg_(msg)
  {}
  Init_AlertCode_code first_timestamp(::aimdk_msgs::msg::AlertCode::_first_timestamp_type arg)
  {
    msg_.first_timestamp = std::move(arg);
    return Init_AlertCode_code(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

class Init_AlertCode_timestamp
{
public:
  Init_AlertCode_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlertCode_first_timestamp timestamp(::aimdk_msgs::msg::AlertCode::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AlertCode_first_timestamp(msg_);
  }

private:
  ::aimdk_msgs::msg::AlertCode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::AlertCode>()
{
  return aimdk_msgs::msg::builder::Init_AlertCode_timestamp();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__BUILDER_HPP_
