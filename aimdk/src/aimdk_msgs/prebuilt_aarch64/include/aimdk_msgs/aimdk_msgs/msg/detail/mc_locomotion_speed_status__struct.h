// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speed_mode'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_mode__struct.h"
// Member 'forward_bounds'
// Member 'lateral_bounds'
// Member 'angular_bounds'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_bounds__struct.h"

/// Struct defined in msg/McLocomotionSpeedStatus in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__McLocomotionSpeedStatus
{
  /// speed mode
  aimdk_msgs__msg__McLocomotionSpeedMode speed_mode;
  /// forward  (+ | front, - | back)
  aimdk_msgs__msg__McLocomotionSpeedBounds forward_bounds;
  /// lateral  (+ | left, - | right)
  aimdk_msgs__msg__McLocomotionSpeedBounds lateral_bounds;
  /// rotation (+ | left rotation, - | right rotation)
  aimdk_msgs__msg__McLocomotionSpeedBounds angular_bounds;
} aimdk_msgs__msg__McLocomotionSpeedStatus;

// Struct for a sequence of aimdk_msgs__msg__McLocomotionSpeedStatus.
typedef struct aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence
{
  aimdk_msgs__msg__McLocomotionSpeedStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__STRUCT_H_
