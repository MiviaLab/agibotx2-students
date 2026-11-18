// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aimdk_msgs/msg/detail/pnc_task_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aimdk_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PncTaskRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aimdk_msgs::msg::PncTaskRequest(_init);
}

void PncTaskRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aimdk_msgs::msg::PncTaskRequest *>(message_memory);
  typed_message->~PncTaskRequest();
}

size_t size_function__PncTaskRequest__reference_line(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PncTaskRequest__reference_line(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void * get_function__PncTaskRequest__reference_line(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__PncTaskRequest__reference_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(
    get_const_function__PncTaskRequest__reference_line(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(untyped_value);
  value = item;
}

void assign_function__PncTaskRequest__reference_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(
    get_function__PncTaskRequest__reference_line(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(untyped_value);
  item = value;
}

void resize_function__PncTaskRequest__reference_line(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PncTaskRequest__trajectory_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PncTaskRequest__trajectory_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void * get_function__PncTaskRequest__trajectory_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__PncTaskRequest__trajectory_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(
    get_const_function__PncTaskRequest__trajectory_pos(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(untyped_value);
  value = item;
}

void assign_function__PncTaskRequest__trajectory_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose2D *>(
    get_function__PncTaskRequest__trajectory_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose2D *>(untyped_value);
  item = value;
}

void resize_function__PncTaskRequest__trajectory_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose2D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PncTaskRequest__trajectory_vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PncTaskRequest__trajectory_vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  return &member[index];
}

void * get_function__PncTaskRequest__trajectory_vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  return &member[index];
}

void fetch_function__PncTaskRequest__trajectory_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Twist *>(
    get_const_function__PncTaskRequest__trajectory_vel(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Twist *>(untyped_value);
  value = item;
}

void assign_function__PncTaskRequest__trajectory_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Twist *>(
    get_function__PncTaskRequest__trajectory_vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Twist *>(untyped_value);
  item = value;
}

void resize_function__PncTaskRequest__trajectory_vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PncTaskRequest__reserve_info(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__PncTaskRequest__reserve_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__PncTaskRequest__reserve_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 64> *>(untyped_member);
  return &member[index];
}

void fetch_function__PncTaskRequest__reserve_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PncTaskRequest__reserve_info(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PncTaskRequest__reserve_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PncTaskRequest__reserve_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PncTaskRequest_message_member_array[15] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aimdk_msgs::msg::MessageHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "task_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, task_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "task_request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, task_request),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pnc_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, pnc_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "task_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, task_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, map_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, target_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, reference_line),  // bytes offset in struct
    nullptr,  // default value
    size_function__PncTaskRequest__reference_line,  // size() function pointer
    get_const_function__PncTaskRequest__reference_line,  // get_const(index) function pointer
    get_function__PncTaskRequest__reference_line,  // get(index) function pointer
    fetch_function__PncTaskRequest__reference_line,  // fetch(index, &value) function pointer
    assign_function__PncTaskRequest__reference_line,  // assign(index, value) function pointer
    resize_function__PncTaskRequest__reference_line  // resize(index) function pointer
  },
  {
    "target_pose_radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, target_pose_radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_forward_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, max_forward_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, trajectory_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__PncTaskRequest__trajectory_pos,  // size() function pointer
    get_const_function__PncTaskRequest__trajectory_pos,  // get_const(index) function pointer
    get_function__PncTaskRequest__trajectory_pos,  // get(index) function pointer
    fetch_function__PncTaskRequest__trajectory_pos,  // fetch(index, &value) function pointer
    assign_function__PncTaskRequest__trajectory_pos,  // assign(index, value) function pointer
    resize_function__PncTaskRequest__trajectory_pos  // resize(index) function pointer
  },
  {
    "trajectory_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, trajectory_vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__PncTaskRequest__trajectory_vel,  // size() function pointer
    get_const_function__PncTaskRequest__trajectory_vel,  // get_const(index) function pointer
    get_function__PncTaskRequest__trajectory_vel,  // get(index) function pointer
    fetch_function__PncTaskRequest__trajectory_vel,  // fetch(index, &value) function pointer
    assign_function__PncTaskRequest__trajectory_vel,  // assign(index, value) function pointer
    resize_function__PncTaskRequest__trajectory_vel  // resize(index) function pointer
  },
  {
    "play_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, play_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, time_duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs::msg::PncTaskRequest, reserve_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__PncTaskRequest__reserve_info,  // size() function pointer
    get_const_function__PncTaskRequest__reserve_info,  // get_const(index) function pointer
    get_function__PncTaskRequest__reserve_info,  // get(index) function pointer
    fetch_function__PncTaskRequest__reserve_info,  // fetch(index, &value) function pointer
    assign_function__PncTaskRequest__reserve_info,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PncTaskRequest_message_members = {
  "aimdk_msgs::msg",  // message namespace
  "PncTaskRequest",  // message name
  15,  // number of fields
  sizeof(aimdk_msgs::msg::PncTaskRequest),
  PncTaskRequest_message_member_array,  // message members
  PncTaskRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  PncTaskRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PncTaskRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PncTaskRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aimdk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aimdk_msgs::msg::PncTaskRequest>()
{
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::PncTaskRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aimdk_msgs, msg, PncTaskRequest)() {
  return &::aimdk_msgs::msg::rosidl_typesupport_introspection_cpp::PncTaskRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
