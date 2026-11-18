// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/PncTaskResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/pnc_task_response__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/pnc_task_response__functions.h"
#include "aimdk_msgs/msg/detail/pnc_task_response__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/message_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__PncTaskResponse__init(message_memory);
}

void aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_fini_function(void * message_memory)
{
  aimdk_msgs__msg__PncTaskResponse__fini(message_memory);
}

size_t aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__size_function__PncTaskResponse__reserve_info(
  const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__get_const_function__PncTaskResponse__reserve_info(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__get_function__PncTaskResponse__reserve_info(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__fetch_function__PncTaskResponse__reserve_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__get_const_function__PncTaskResponse__reserve_info(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__assign_function__PncTaskResponse__reserve_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__get_function__PncTaskResponse__reserve_info(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskResponse, header),  // bytes offset in struct
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
    offsetof(aimdk_msgs__msg__PncTaskResponse, task_type),  // bytes offset in struct
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
    offsetof(aimdk_msgs__msg__PncTaskResponse, task_id),  // bytes offset in struct
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
    offsetof(aimdk_msgs__msg__PncTaskResponse, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PncTaskResponse, task_status),  // bytes offset in struct
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
    offsetof(aimdk_msgs__msg__PncTaskResponse, reserve_info),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__size_function__PncTaskResponse__reserve_info,  // size() function pointer
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__get_const_function__PncTaskResponse__reserve_info,  // get_const(index) function pointer
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__get_function__PncTaskResponse__reserve_info,  // get(index) function pointer
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__fetch_function__PncTaskResponse__reserve_info,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__assign_function__PncTaskResponse__reserve_info,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "PncTaskResponse",  // message name
  6,  // number of fields
  sizeof(aimdk_msgs__msg__PncTaskResponse),
  aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_member_array,  // message members
  aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, PncTaskResponse)() {
  aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, MessageHeader)();
  if (!aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__PncTaskResponse__rosidl_typesupport_introspection_c__PncTaskResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
