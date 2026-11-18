// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aimdk_msgs:srv/PlayEmojiGroup.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__PLAY_EMOJI_GROUP__BUILDER_HPP_
#define AIMDK_MSGS__SRV__DETAIL__PLAY_EMOJI_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aimdk_msgs/srv/detail/play_emoji_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayEmojiGroup_Request_priority
{
public:
  explicit Init_PlayEmojiGroup_Request_priority(::aimdk_msgs::srv::PlayEmojiGroup_Request & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::PlayEmojiGroup_Request priority(::aimdk_msgs::srv::PlayEmojiGroup_Request::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::PlayEmojiGroup_Request msg_;
};

class Init_PlayEmojiGroup_Request_mode
{
public:
  explicit Init_PlayEmojiGroup_Request_mode(::aimdk_msgs::srv::PlayEmojiGroup_Request & msg)
  : msg_(msg)
  {}
  Init_PlayEmojiGroup_Request_priority mode(::aimdk_msgs::srv::PlayEmojiGroup_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_PlayEmojiGroup_Request_priority(msg_);
  }

private:
  ::aimdk_msgs::srv::PlayEmojiGroup_Request msg_;
};

class Init_PlayEmojiGroup_Request_emotion_ids
{
public:
  explicit Init_PlayEmojiGroup_Request_emotion_ids(::aimdk_msgs::srv::PlayEmojiGroup_Request & msg)
  : msg_(msg)
  {}
  Init_PlayEmojiGroup_Request_mode emotion_ids(::aimdk_msgs::srv::PlayEmojiGroup_Request::_emotion_ids_type arg)
  {
    msg_.emotion_ids = std::move(arg);
    return Init_PlayEmojiGroup_Request_mode(msg_);
  }

private:
  ::aimdk_msgs::srv::PlayEmojiGroup_Request msg_;
};

class Init_PlayEmojiGroup_Request_header
{
public:
  Init_PlayEmojiGroup_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayEmojiGroup_Request_emotion_ids header(::aimdk_msgs::srv::PlayEmojiGroup_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlayEmojiGroup_Request_emotion_ids(msg_);
  }

private:
  ::aimdk_msgs::srv::PlayEmojiGroup_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::PlayEmojiGroup_Request>()
{
  return aimdk_msgs::srv::builder::Init_PlayEmojiGroup_Request_header();
}

}  // namespace aimdk_msgs


namespace aimdk_msgs
{

namespace srv
{

namespace builder
{

class Init_PlayEmojiGroup_Response_message
{
public:
  explicit Init_PlayEmojiGroup_Response_message(::aimdk_msgs::srv::PlayEmojiGroup_Response & msg)
  : msg_(msg)
  {}
  ::aimdk_msgs::srv::PlayEmojiGroup_Response message(::aimdk_msgs::srv::PlayEmojiGroup_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aimdk_msgs::srv::PlayEmojiGroup_Response msg_;
};

class Init_PlayEmojiGroup_Response_success
{
public:
  explicit Init_PlayEmojiGroup_Response_success(::aimdk_msgs::srv::PlayEmojiGroup_Response & msg)
  : msg_(msg)
  {}
  Init_PlayEmojiGroup_Response_message success(::aimdk_msgs::srv::PlayEmojiGroup_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlayEmojiGroup_Response_message(msg_);
  }

private:
  ::aimdk_msgs::srv::PlayEmojiGroup_Response msg_;
};

class Init_PlayEmojiGroup_Response_header
{
public:
  Init_PlayEmojiGroup_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlayEmojiGroup_Response_success header(::aimdk_msgs::srv::PlayEmojiGroup_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlayEmojiGroup_Response_success(msg_);
  }

private:
  ::aimdk_msgs::srv::PlayEmojiGroup_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aimdk_msgs::srv::PlayEmojiGroup_Response>()
{
  return aimdk_msgs::srv::builder::Init_PlayEmojiGroup_Response_header();
}

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__PLAY_EMOJI_GROUP__BUILDER_HPP_
