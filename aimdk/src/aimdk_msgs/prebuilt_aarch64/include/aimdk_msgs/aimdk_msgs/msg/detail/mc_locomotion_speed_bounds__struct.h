// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McLocomotionSpeedBounds.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/McLocomotionSpeedBounds in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__McLocomotionSpeedBounds
{
  /// maximum reverse speed (-)
  double min_value;
  /// maximum forward speed (+)
  double max_value;
} aimdk_msgs__msg__McLocomotionSpeedBounds;

// Struct for a sequence of aimdk_msgs__msg__McLocomotionSpeedBounds.
typedef struct aimdk_msgs__msg__McLocomotionSpeedBounds__Sequence
{
  aimdk_msgs__msg__McLocomotionSpeedBounds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McLocomotionSpeedBounds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__STRUCT_H_
