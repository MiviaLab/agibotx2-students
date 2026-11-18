// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/SmSystemState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/sm_system_state__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/sm_system_state__functions.h"
#include "aimdk_msgs/msg/detail/sm_system_state__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/message_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__rosidl_typesupport_introspection_c.h"
// Member `cur_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `cur_status`
#include "aimdk_msgs/msg/system_status.h"
// Member `cur_status`
#include "aimdk_msgs/msg/detail/system_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__SmSystemState__init(message_memory);
}

void aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_fini_function(void * message_memory)
{
  aimdk_msgs__msg__SmSystemState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__SmSystemState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__SmSystemState, cur_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__SmSystemState, cur_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "SmSystemState",  // message name
  3,  // number of fields
  sizeof(aimdk_msgs__msg__SmSystemState),
  aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_member_array,  // message members
  aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, SmSystemState)() {
  aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, MessageHeader)();
  aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, SystemStatus)();
  if (!aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__SmSystemState__rosidl_typesupport_introspection_c__SmSystemState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
