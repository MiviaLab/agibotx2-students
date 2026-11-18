// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:msg/SigSet.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SIG_SET__BUILDER_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SIG_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/msg/detail/sig_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace msg
{

namespace builder
{

class Init_SigSet_funcdisable_sig
{
public:
  explicit Init_SigSet_funcdisable_sig(::aimdk_msgs::msg::SigSet & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::msg::SigSet funcdisable_sig(::aimdk_msgs::msg::SigSet::_funcdisable_sig_type arg)
  {
    msg_.funcdisable_sig = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::msg::SigSet msg_;
};

class Init_SigSet_reserve
{
public:
  explicit Init_SigSet_reserve(::aimdk_msgs::msg::SigSet & msg)
  : msg_(msg)
  {}
  Init_SigSet_funcdisable_sig reserve(::aimdk_msgs::msg::SigSet::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_SigSet_funcdisable_sig(msg_);
  }

private:
  ::aimdk_msgs::msg::SigSet msg_;
};

class Init_SigSet_facial_sig
{
public:
  explicit Init_SigSet_facial_sig(::aimdk_msgs::msg::SigSet & msg)
  : msg_(msg)
  {}
  Init_SigSet_reserve facial_sig(::aimdk_msgs::msg::SigSet::_facial_sig_type arg)
  {
    msg_.facial_sig = std::move(arg);
    return Init_SigSet_reserve(msg_);
  }

private:
  ::aimdk_msgs::msg::SigSet msg_;
};

class Init_SigSet_led_sig
{
public:
  explicit Init_SigSet_led_sig(::aimdk_msgs::msg::SigSet & msg)
  : msg_(msg)
  {}
  Init_SigSet_facial_sig led_sig(::aimdk_msgs::msg::SigSet::_led_sig_type arg)
  {
    msg_.led_sig = std::move(arg);
    return Init_SigSet_facial_sig(msg_);
  }

private:
  ::aimdk_msgs::msg::SigSet msg_;
};

class Init_SigSet_sound_sig
{
public:
  explicit Init_SigSet_sound_sig(::aimdk_msgs::msg::SigSet & msg)
  : msg_(msg)
  {}
  Init_SigSet_led_sig sound_sig(::aimdk_msgs::msg::SigSet::_sound_sig_type arg)
  {
    msg_.sound_sig = std::move(arg);
    return Init_SigSet_led_sig(msg_);
  }

private:
  ::aimdk_msgs::msg::SigSet msg_;
};

class Init_SigSet_motion_sig
{
public:
  explicit Init_SigSet_motion_sig(::aimdk_msgs::msg::SigSet & msg)
  : msg_(msg)
  {}
  Init_SigSet_sound_sig motion_sig(::aimdk_msgs::msg::SigSet::_motion_sig_type arg)
  {
    msg_.motion_sig = std::move(arg);
    return Init_SigSet_sound_sig(msg_);
  }

private:
  ::aimdk_msgs::msg::SigSet msg_;
};

class Init_SigSet_robot_sig
{
public:
  Init_SigSet_robot_sig()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SigSet_motion_sig robot_sig(::aimdk_msgs::msg::SigSet::_robot_sig_type arg)
  {
    msg_.robot_sig = std::move(arg);
    return Init_SigSet_motion_sig(msg_);
  }

private:
  ::aimdk_msgs::msg::SigSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::msg::SigSet>()
{
  return aimdk_msgs::msg::builder::Init_SigSet_robot_sig();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__SIG_SET__BUILDER_HPP_
