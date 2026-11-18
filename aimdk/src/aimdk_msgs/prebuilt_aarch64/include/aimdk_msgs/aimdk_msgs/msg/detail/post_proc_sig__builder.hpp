// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/PostProcSig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/post_proc_sig__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_PostProcSig_sig_set
{
public:
  explicit Init_PostProcSig_sig_set(::aimdk_msgs::msg::PostProcSig & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::PostProcSig sig_set(::aimdk_msgs::msg::PostProcSig::_sig_set_type arg)
  {
    msg_.sig_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::PostProcSig msg_;
};

class Init_PostProcSig_diag_code
{
public:
  explicit Init_PostProcSig_diag_code(::aimdk_msgs::msg::PostProcSig & msg)
  : msg_(msg)
  {}
  Init_PostProcSig_sig_set diag_code(::aimdk_msgs::msg::PostProcSig::_diag_code_type arg)
  {
    msg_.diag_code = std::move(arg);
    return Init_PostProcSig_sig_set(msg_);
  }

private:
  ::aimdk_msgs::msg::PostProcSig msg_;
};

class Init_PostProcSig_timestamp
{
public:
  Init_PostProcSig_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PostProcSig_diag_code timestamp(::aimdk_msgs::msg::PostProcSig::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PostProcSig_diag_code(msg_);
  }

private:
  ::aimdk_msgs::msg::PostProcSig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::PostProcSig>()
{
  return aimdk_msgs::msg::builder::Init_PostProcSig_timestamp();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__BUILDER_HPP_
