// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PncTaskResponse.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/pnc_task_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PncTaskResponse_reserve_info
{
public:
  explicit Init_PncTaskResponse_reserve_info(::aimdk_msgs::msg::PncTaskResponse & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PncTaskResponse reserve_info(::aimdk_msgs::msg::PncTaskResponse::_reserve_info_type arg)
  {
    msg_.reserve_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskResponse msg_;
};

class Init_PncTaskResponse_task_status
{
public:
  explicit Init_PncTaskResponse_task_status(::aimdk_msgs::msg::PncTaskResponse & msg)
  : msg_(msg)
  {}
  Init_PncTaskResponse_reserve_info task_status(::aimdk_msgs::msg::PncTaskResponse::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_PncTaskResponse_reserve_info(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskResponse msg_;
};

class Init_PncTaskResponse_map_id
{
public:
  explicit Init_PncTaskResponse_map_id(::aimdk_msgs::msg::PncTaskResponse & msg)
  : msg_(msg)
  {}
  Init_PncTaskResponse_task_status map_id(::aimdk_msgs::msg::PncTaskResponse::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_PncTaskResponse_task_status(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskResponse msg_;
};

class Init_PncTaskResponse_task_id
{
public:
  explicit Init_PncTaskResponse_task_id(::aimdk_msgs::msg::PncTaskResponse & msg)
  : msg_(msg)
  {}
  Init_PncTaskResponse_map_id task_id(::aimdk_msgs::msg::PncTaskResponse::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_PncTaskResponse_map_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskResponse msg_;
};

class Init_PncTaskResponse_task_type
{
public:
  explicit Init_PncTaskResponse_task_type(::aimdk_msgs::msg::PncTaskResponse & msg)
  : msg_(msg)
  {}
  Init_PncTaskResponse_task_id task_type(::aimdk_msgs::msg::PncTaskResponse::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_PncTaskResponse_task_id(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskResponse msg_;
};

class Init_PncTaskResponse_header
{
public:
  Init_PncTaskResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PncTaskResponse_task_type header(::aimdk_msgs::msg::PncTaskResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PncTaskResponse_task_type(msg_);
  }

private:
  ::aimdk_msgs::msg::PncTaskResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PncTaskResponse>()
{
  return aimdk_msgs::msg::builder::Init_PncTaskResponse_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__BUILDER_HPP_
