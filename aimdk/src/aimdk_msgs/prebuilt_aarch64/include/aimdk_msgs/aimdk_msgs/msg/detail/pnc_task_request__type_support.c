// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/pnc_task_request__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/pnc_task_request__functions.h"
#include "aimdk_msgs/msg/detail/pnc_task_request__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/message_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__rosidl_typesupport_introspection_c.h"
// Member `target_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `reference_line`
// Member `trajectory_pos`
#include "geometry_msgs/msg/pose2_d.h"
// Member `reference_line`
// Member `trajectory_pos`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"
// Member `trajectory_vel`
#include "geometry_msgs/msg/twist.h"
// Member `trajectory_vel`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__PncTaskRequest__init(message_memory);
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_fini_function(void * message_memory)
{
  aimdk_msgs__msg__PncTaskRequest__fini(message_memory);
}

size_t aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__reference_line(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__reference_line(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__reference_line(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__reference_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose2D * item =
    ((const geometry_msgs__msg__Pose2D *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__reference_line(untyped_member, index));
  geometry_msgs__msg__Pose2D * value =
    (geometry_msgs__msg__Pose2D *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__reference_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose2D * item =
    ((geometry_msgs__msg__Pose2D *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__reference_line(untyped_member, index));
  const geometry_msgs__msg__Pose2D * value =
    (const geometry_msgs__msg__Pose2D *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__resize_function__PncTaskRequest__reference_line(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose2D__Sequence__fini(member);
  return geometry_msgs__msg__Pose2D__Sequence__init(member, size);
}

size_t aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__trajectory_pos(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__trajectory_pos(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__trajectory_pos(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__trajectory_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose2D * item =
    ((const geometry_msgs__msg__Pose2D *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__trajectory_pos(untyped_member, index));
  geometry_msgs__msg__Pose2D * value =
    (geometry_msgs__msg__Pose2D *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__trajectory_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose2D * item =
    ((geometry_msgs__msg__Pose2D *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__trajectory_pos(untyped_member, index));
  const geometry_msgs__msg__Pose2D * value =
    (const geometry_msgs__msg__Pose2D *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__resize_function__PncTaskRequest__trajectory_pos(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose2D__Sequence__fini(member);
  return geometry_msgs__msg__Pose2D__Sequence__init(member, size);
}

size_t aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__trajectory_vel(
  const void * untyped_member)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__trajectory_vel(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__trajectory_vel(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__trajectory_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Twist * item =
    ((const geometry_msgs__msg__Twist *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__trajectory_vel(untyped_member, index));
  geometry_msgs__msg__Twist * value =
    (geometry_msgs__msg__Twist *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__trajectory_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Twist * item =
    ((geometry_msgs__msg__Twist *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__trajectory_vel(untyped_member, index));
  const geometry_msgs__msg__Twist * value =
    (const geometry_msgs__msg__Twist *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__resize_function__PncTaskRequest__trajectory_vel(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  geometry_msgs__msg__Twist__Sequence__fini(member);
  return geometry_msgs__msg__Twist__Sequence__init(member, size);
}

size_t aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__reserve_info(
  const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__reserve_info(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__reserve_info(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__reserve_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__reserve_info(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__reserve_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__reserve_info(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, task_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, task_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pnc_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, pnc_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, reference_line),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__reference_line,  // size() function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__reference_line,  // get_const(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__reference_line,  // get(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__reference_line,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__reference_line,  // assign(index, value) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__resize_function__PncTaskRequest__reference_line  // resize(index) function pointer
  },
  {
    "target_pose_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, target_pose_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_forward_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, max_forward_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, trajectory_pos),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__trajectory_pos,  // size() function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__trajectory_pos,  // get_const(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__trajectory_pos,  // get(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__trajectory_pos,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__trajectory_pos,  // assign(index, value) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__resize_function__PncTaskRequest__trajectory_pos  // resize(index) function pointer
  },
  {
    "trajectory_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, trajectory_vel),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__trajectory_vel,  // size() function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__trajectory_vel,  // get_const(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__trajectory_vel,  // get(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__trajectory_vel,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__trajectory_vel,  // assign(index, value) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__resize_function__PncTaskRequest__trajectory_vel  // resize(index) function pointer
  },
  {
    "play_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, play_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, time_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskRequest, reserve_info),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__size_function__PncTaskRequest__reserve_info,  // size() function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_const_function__PncTaskRequest__reserve_info,  // get_const(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__get_function__PncTaskRequest__reserve_info,  // get(index) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__fetch_function__PncTaskRequest__reserve_info,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__assign_function__PncTaskRequest__reserve_info,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "PncTaskRequest",  // message name
  15,  // number of fields
  sizeof(aimdk_msgs__msg__PncTaskRequest),
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_member_array,  // message members
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, PncTaskRequest)() {
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, MessageHeader)();
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__PncTaskRequest__rosidl_typesupport_introspection_c__PncTaskRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
