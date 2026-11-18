// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetMcLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.h"

/// Struct defined in srv/GetMcLocomotionSpeedStatus in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request
{
  aimdk_msgs__msg__CommonRequest request;
} aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request;

// Struct for a sequence of aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request.
typedef struct aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__Sequence
{
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/response_header__struct.h"
// Member 'current_speed_status'
// Member 'none_speed_status'
// Member 'low_speed_status'
// Member 'medium_speed_status'
// Member 'high_speed_status'
// Member 'step_speed_status'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__struct.h"

/// Struct defined in srv/GetMcLocomotionSpeedStatus in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response
{
  /// 响应头
  aimdk_msgs__msg__ResponseHeader header;
  /// current speed mode and speed bounds
  aimdk_msgs__msg__McLocomotionSpeedStatus current_speed_status;
  /// none
  aimdk_msgs__msg__McLocomotionSpeedStatus none_speed_status;
  /// low
  aimdk_msgs__msg__McLocomotionSpeedStatus low_speed_status;
  /// medium
  aimdk_msgs__msg__McLocomotionSpeedStatus medium_speed_status;
  /// high
  aimdk_msgs__msg__McLocomotionSpeedStatus high_speed_status;
  /// locomotion_step
  aimdk_msgs__msg__McLocomotionSpeedStatus step_speed_status;
} aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response;

// Struct for a sequence of aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response.
typedef struct aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__Sequence
{
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__STRUCT_H_
