// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McLocomotionSpeedMode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MC_LOCOMOTION_NONE_SPEED'.
/**
  * zero speed
 */
enum
{
  aimdk_msgs__msg__McLocomotionSpeedMode__MC_LOCOMOTION_NONE_SPEED = 0l
};

/// Constant 'MC_LOCOMOTION_LOW_SPEED'.
/**
  * low speed
 */
enum
{
  aimdk_msgs__msg__McLocomotionSpeedMode__MC_LOCOMOTION_LOW_SPEED = 1l
};

/// Constant 'MC_LOCOMOTION_MEIDUM_SPEED'.
/**
  * medium speed
 */
enum
{
  aimdk_msgs__msg__McLocomotionSpeedMode__MC_LOCOMOTION_MEIDUM_SPEED = 2l
};

/// Constant 'MC_LOCOMOTION_HIGH_SPEED'.
/**
  * high speed
 */
enum
{
  aimdk_msgs__msg__McLocomotionSpeedMode__MC_LOCOMOTION_HIGH_SPEED = 3l
};

/// Struct defined in msg/McLocomotionSpeedMode in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__McLocomotionSpeedMode
{
  int32_t value;
} aimdk_msgs__msg__McLocomotionSpeedMode;

// Struct for a sequence of aimdk_msgs__msg__McLocomotionSpeedMode.
typedef struct aimdk_msgs__msg__McLocomotionSpeedMode__Sequence
{
  aimdk_msgs__msg__McLocomotionSpeedMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McLocomotionSpeedMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__STRUCT_H_
