// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/UpperBodyCommandArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/upper_body_command_array__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/upper_body_command_array__functions.h"
#include "aimdk_msgs/msg/detail/upper_body_command_array__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/message_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__rosidl_typesupport_introspection_c.h"
// Member `source`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_pos`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__UpperBodyCommandArray__init(message_memory);
}

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_fini_function(void * message_memory)
{
  aimdk_msgs__msg__UpperBodyCommandArray__fini(message_memory);
}

size_t aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__size_function__UpperBodyCommandArray__head_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__head_pos(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__head_pos(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__fetch_function__UpperBodyCommandArray__head_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__head_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__assign_function__UpperBodyCommandArray__head_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__head_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__size_function__UpperBodyCommandArray__arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 14;
}

const void * aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__arm_pos(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__arm_pos(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__fetch_function__UpperBodyCommandArray__arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__arm_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__assign_function__UpperBodyCommandArray__arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__arm_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__size_function__UpperBodyCommandArray__hand_pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__hand_pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__hand_pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__fetch_function__UpperBodyCommandArray__hand_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__hand_pos(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__assign_function__UpperBodyCommandArray__hand_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__hand_pos(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__resize_function__UpperBodyCommandArray__hand_pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__UpperBodyCommandArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__UpperBodyCommandArray, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_sub_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__UpperBodyCommandArray, hand_sub_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__UpperBodyCommandArray, head_pos),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__size_function__UpperBodyCommandArray__head_pos,  // size() function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__head_pos,  // get_const(index) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__head_pos,  // get(index) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__fetch_function__UpperBodyCommandArray__head_pos,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__assign_function__UpperBodyCommandArray__head_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    14,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__UpperBodyCommandArray, arm_pos),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__size_function__UpperBodyCommandArray__arm_pos,  // size() function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__arm_pos,  // get_const(index) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__arm_pos,  // get(index) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__fetch_function__UpperBodyCommandArray__arm_pos,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__assign_function__UpperBodyCommandArray__arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__UpperBodyCommandArray, hand_pos),  // bytes offset in struct
    NULL,  // default value
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__size_function__UpperBodyCommandArray__hand_pos,  // size() function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_const_function__UpperBodyCommandArray__hand_pos,  // get_const(index) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__get_function__UpperBodyCommandArray__hand_pos,  // get(index) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__fetch_function__UpperBodyCommandArray__hand_pos,  // fetch(index, &value) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__assign_function__UpperBodyCommandArray__hand_pos,  // assign(index, value) function pointer
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__resize_function__UpperBodyCommandArray__hand_pos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "UpperBodyCommandArray",  // message name
  6,  // number of fields
  sizeof(aimdk_msgs__msg__UpperBodyCommandArray),
  aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_member_array,  // message members
  aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, UpperBodyCommandArray)() {
  aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, MessageHeader)();
  if (!aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__UpperBodyCommandArray__rosidl_typesupport_introspection_c__UpperBodyCommandArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
