// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/msg/detail/mc_common_state__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/msg/detail/mc_common_state__functions.h"
#include "aimdk_msgs/msg/detail/mc_common_state__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/message_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__rosidl_typesupport_introspection_c.h"
// Member `input_source`
#include "aimdk_msgs/msg/mc_input_source.h"
// Member `input_source`
#include "aimdk_msgs/msg/detail/mc_input_source__rosidl_typesupport_introspection_c.h"
// Member `action_info`
#include "aimdk_msgs/msg/mc_action_info.h"
// Member `action_info`
#include "aimdk_msgs/msg/detail/mc_action_info__rosidl_typesupport_introspection_c.h"
// Member `runtime_model`
#include "aimdk_msgs/msg/mc_runtime_model.h"
// Member `runtime_model`
#include "aimdk_msgs/msg/detail/mc_runtime_model__rosidl_typesupport_introspection_c.h"
// Member `motion_status`
#include "aimdk_msgs/msg/mc_motion_status.h"
// Member `motion_status`
#include "aimdk_msgs/msg/detail/mc_motion_status__rosidl_typesupport_introspection_c.h"
// Member `servo_status`
#include "aimdk_msgs/msg/mc_servo_status.h"
// Member `servo_status`
#include "aimdk_msgs/msg/detail/mc_servo_status__rosidl_typesupport_introspection_c.h"
// Member `fsm_state`
#include "aimdk_msgs/msg/mc_fsm_state.h"
// Member `fsm_state`
#include "aimdk_msgs/msg/detail/mc_fsm_state__rosidl_typesupport_introspection_c.h"
// Member `body_status`
#include "aimdk_msgs/msg/mc_body_pose_status.h"
// Member `body_status`
#include "aimdk_msgs/msg/detail/mc_body_pose_status__rosidl_typesupport_introspection_c.h"
// Member `speed_status`
#include "aimdk_msgs/msg/mc_locomotion_speed_status.h"
// Member `speed_status`
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__msg__McCommonState__init(message_memory);
}

void aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_fini_function(void * message_memory)
{
  aimdk_msgs__msg__McCommonState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, input_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, action_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "runtime_model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, runtime_model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, motion_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, servo_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fsm_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, fsm_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, body_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__msg__McCommonState, speed_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_members = {
  "aimdk_msgs__msg",  // message namespace
  "McCommonState",  // message name
  9,  // number of fields
  sizeof(aimdk_msgs__msg__McCommonState),
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array,  // message members
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_type_support_handle = {
  0,
  &aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McCommonState)() {
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, MessageHeader)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McInputSource)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McActionInfo)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McRuntimeModel)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McMotionStatus)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McServoStatus)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McFsmState)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McBodyPoseStatus)();
  aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)();
  if (!aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__msg__McCommonState__rosidl_typesupport_introspection_c__McCommonState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
