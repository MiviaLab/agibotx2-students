// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/PostProcSig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/post_proc_sig__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/post_proc_sig__functions.h"
#include "aimdk_msgs/msg/detail/post_proc_sig__struct.h"


// Include directives for member types
// Member `sig_set`
#include "aimdk_msgs/msg/sig_set.h"
// Member `sig_set`
#include "aimdk_msgs/msg/detail/sig_set__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__PostProcSig__init(message_memory);
}

void aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_fini_function(void * message_memory)
{
  aimdk_msgs__msg__PostProcSig__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PostProcSig, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PostProcSig, diag_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sig_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__PostProcSig, sig_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "PostProcSig",  // message name
  3,  // number of fields
  sizeof(aimdk_msgs__msg__PostProcSig),
  aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_member_array,  // message members
  aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, PostProcSig)() {
  aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, SigSet)();
  if (!aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__PostProcSig__rosidl_typesupport_introspection_c__PostProcSig_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
