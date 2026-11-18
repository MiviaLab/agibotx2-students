// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__functions.h"
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__struct.h"


// Include directives for member types
// Member `speed_mode`
#include "aimdk_msgs/msg/mc_locomotion_speed_mode.h"
// Member `speed_mode`
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_mode__rosidl_typesupport_introspection_c.h"
// Member `forward_bounds`
// Member `lateral_bounds`
// Member `angular_bounds`
#include "aimdk_msgs/msg/mc_locomotion_speed_bounds.h"
// Member `forward_bounds`
// Member `lateral_bounds`
// Member `angular_bounds`
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_bounds__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__McLocomotionSpeedStatus__init(message_memory);
}

void aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_fini_function(void * message_memory)
{
  aimdk_msgs__msg__McLocomotionSpeedStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_member_array[4] = {
  {
    "speed_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McLocomotionSpeedStatus, speed_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forward_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McLocomotionSpeedStatus, forward_bounds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lateral_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McLocomotionSpeedStatus, lateral_bounds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McLocomotionSpeedStatus, angular_bounds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "McLocomotionSpeedStatus",  // message name
  4,  // number of fields
  sizeof(aimdk_msgs__msg__McLocomotionSpeedStatus),
  aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_member_array,  // message members
  aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)() {
  aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedMode)();
  aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedBounds)();
  aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedBounds)();
  aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedBounds)();
  if (!aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__McLocomotionSpeedStatus__rosidl_typesupport_introspection_c__McLocomotionSpeedStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
