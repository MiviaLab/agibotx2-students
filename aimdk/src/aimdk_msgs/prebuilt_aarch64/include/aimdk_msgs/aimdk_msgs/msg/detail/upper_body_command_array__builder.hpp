// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/UpperBodyCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/upper_body_command_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_UpperBodyCommandArray_hand_pos
{
public:
  explicit Init_UpperBodyCommandArray_hand_pos(::aimdk_msgs::msg::UpperBodyCommandArray & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::UpperBodyCommandArray hand_pos(::aimdk_msgs::msg::UpperBodyCommandArray::_hand_pos_type arg)
  {
    msg_.hand_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::UpperBodyCommandArray msg_;
};

class Init_UpperBodyCommandArray_arm_pos
{
public:
  explicit Init_UpperBodyCommandArray_arm_pos(::aimdk_msgs::msg::UpperBodyCommandArray & msg)
  : msg_(msg)
  {}
  Init_UpperBodyCommandArray_hand_pos arm_pos(::aimdk_msgs::msg::UpperBodyCommandArray::_arm_pos_type arg)
  {
    msg_.arm_pos = std::move(arg);
    return Init_UpperBodyCommandArray_hand_pos(msg_);
  }

private:
  ::aimdk_msgs::msg::UpperBodyCommandArray msg_;
};

class Init_UpperBodyCommandArray_head_pos
{
public:
  explicit Init_UpperBodyCommandArray_head_pos(::aimdk_msgs::msg::UpperBodyCommandArray & msg)
  : msg_(msg)
  {}
  Init_UpperBodyCommandArray_arm_pos head_pos(::aimdk_msgs::msg::UpperBodyCommandArray::_head_pos_type arg)
  {
    msg_.head_pos = std::move(arg);
    return Init_UpperBodyCommandArray_arm_pos(msg_);
  }

private:
  ::aimdk_msgs::msg::UpperBodyCommandArray msg_;
};

class Init_UpperBodyCommandArray_hand_sub_mode
{
public:
  explicit Init_UpperBodyCommandArray_hand_sub_mode(::aimdk_msgs::msg::UpperBodyCommandArray & msg)
  : msg_(msg)
  {}
  Init_UpperBodyCommandArray_head_pos hand_sub_mode(::aimdk_msgs::msg::UpperBodyCommandArray::_hand_sub_mode_type arg)
  {
    msg_.hand_sub_mode = std::move(arg);
    return Init_UpperBodyCommandArray_head_pos(msg_);
  }

private:
  ::aimdk_msgs::msg::UpperBodyCommandArray msg_;
};

class Init_UpperBodyCommandArray_source
{
public:
  explicit Init_UpperBodyCommandArray_source(::aimdk_msgs::msg::UpperBodyCommandArray & msg)
  : msg_(msg)
  {}
  Init_UpperBodyCommandArray_hand_sub_mode source(::aimdk_msgs::msg::UpperBodyCommandArray::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_UpperBodyCommandArray_hand_sub_mode(msg_);
  }

private:
  ::aimdk_msgs::msg::UpperBodyCommandArray msg_;
};

class Init_UpperBodyCommandArray_header
{
public:
  Init_UpperBodyCommandArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpperBodyCommandArray_source header(::aimdk_msgs::msg::UpperBodyCommandArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UpperBodyCommandArray_source(msg_);
  }

private:
  ::aimdk_msgs::msg::UpperBodyCommandArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::UpperBodyCommandArray>()
{
  return aimdk_msgs::msg::builder::Init_UpperBodyCommandArray_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__BUILDER_HPP_
