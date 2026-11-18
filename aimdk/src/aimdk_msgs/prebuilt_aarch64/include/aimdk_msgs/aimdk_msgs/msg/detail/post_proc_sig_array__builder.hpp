// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PostProcSigArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/post_proc_sig_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PostProcSigArray_post_proc_sig
{
public:
  explicit Init_PostProcSigArray_post_proc_sig(::aimdk_msgs::msg::PostProcSigArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PostProcSigArray post_proc_sig(::aimdk_msgs::msg::PostProcSigArray::_post_proc_sig_type arg)
  {
    msg_.post_proc_sig = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PostProcSigArray msg_;
};

class Init_PostProcSigArray_header
{
public:
  Init_PostProcSigArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostProcSigArray_post_proc_sig header(::aimdk_msgs::msg::PostProcSigArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PostProcSigArray_post_proc_sig(msg_);
  }

private:
  ::aimdk_msgs::msg::PostProcSigArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PostProcSigArray>()
{
  return aimdk_msgs::msg::builder::Init_PostProcSigArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG_ARRAY__BUILDER_HPP_
