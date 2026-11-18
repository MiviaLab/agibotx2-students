// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BEFORE_LIMIT'.
/**
  * 未到限位
 */
enum
{
  aimdk_msgs__msg__McServoStatus__BEFORE_LIMIT = 0ul
};

/// Constant 'LOWER_LIMIT'.
/**
  * 下蹲到下限
 */
enum
{
  aimdk_msgs__msg__McServoStatus__LOWER_LIMIT = 1ul
};

/// Constant 'UPPER_LIMIT'.
/**
  * 下蹲到上限
 */
enum
{
  aimdk_msgs__msg__McServoStatus__UPPER_LIMIT = 2ul
};

/// Struct defined in msg/McServoStatus in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态 - 伺服控制运行状态
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McServoStatus
{
  /// --------- squat ---------
  /// 是否处于下蹲状态
  bool squat_enable;
  /// squat range: 0.0 ~ -0.5
  /// 下蹲高度偏置
  double squat_offset;
  /// 下蹲上下限位
  uint32_t squat_limit;
  /// --------- head ---------
  /// yaw range: -0.38 ~ 0.38
  double head_yaw_offset;
  /// pitch range: -0.35 ~ 0.35
  double head_pitch_offset;
  /// --------- waist ---------
  /// yaw range: -3.43 ~ 2.382
  double waist_yaw_offset;
  /// pitch range: -0.314 ~ 0.314
  double waist_pitch_offset;
  /// roll range: -0.488 ~ 0.488
  double waist_roll_offset;
} aimdk_msgs__msg__McServoStatus;

// Struct for a sequence of aimdk_msgs__msg__McServoStatus.
typedef struct aimdk_msgs__msg__McServoStatus__Sequence
{
  aimdk_msgs__msg__McServoStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McServoStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__STRUCT_H_
