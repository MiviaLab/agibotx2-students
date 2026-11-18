// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McBodyPoseStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE_STATUS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MC_BODY_POSE_UNKOWN'.
/**
  * 未知
 */
enum
{
  aimdk_msgs__msg__McBodyPoseStatus__MC_BODY_POSE_UNKOWN = 0l
};

/// Constant 'MC_BODY_POSE_STAND'.
/**
  * 站立
 */
enum
{
  aimdk_msgs__msg__McBodyPoseStatus__MC_BODY_POSE_STAND = 1l
};

/// Constant 'MC_BODY_POSE_LIE_FACE_UP'.
/**
  * 躺
 */
enum
{
  aimdk_msgs__msg__McBodyPoseStatus__MC_BODY_POSE_LIE_FACE_UP = 2l
};

/// Constant 'MC_BODY_POSE_LIE_FACE_DOWN'.
/**
  * 趴
 */
enum
{
  aimdk_msgs__msg__McBodyPoseStatus__MC_BODY_POSE_LIE_FACE_DOWN = 3l
};

/// Constant 'MC_BODY_POSE_SIT'.
/**
  * 坐
 */
enum
{
  aimdk_msgs__msg__McBodyPoseStatus__MC_BODY_POSE_SIT = 4l
};

/// Constant 'MC_BODY_POSE_SQUAT'.
/**
  * 蹲
 */
enum
{
  aimdk_msgs__msg__McBodyPoseStatus__MC_BODY_POSE_SQUAT = 5l
};

/// Struct defined in msg/McBodyPoseStatus in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__McBodyPoseStatus
{
  int32_t value;
} aimdk_msgs__msg__McBodyPoseStatus;

// Struct for a sequence of aimdk_msgs__msg__McBodyPoseStatus.
typedef struct aimdk_msgs__msg__McBodyPoseStatus__Sequence
{
  aimdk_msgs__msg__McBodyPoseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McBodyPoseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_BODY_POSE_STATUS__STRUCT_H_
