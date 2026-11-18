// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/SigSet.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SIG_SET__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__SIG_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SigSet in the package aimdk_msgs.
/**
  * SigSet.msg
  * 信号集合定义
 */
typedef struct aimdk_msgs__msg__SigSet
{
  /// 整机行为后处理信号
  int32_t robot_sig;
  /// 运动行为信号
  uint8_t motion_sig;
  /// 声音行为信号
  uint8_t sound_sig;
  /// 灯行为信号
  uint8_t led_sig;
  /// 表情行为信号
  uint8_t facial_sig;
  /// 预留信号
  uint32_t reserve;
  /// 功能禁用信号
  uint64_t funcdisable_sig;
} aimdk_msgs__msg__SigSet;

// Struct for a sequence of aimdk_msgs__msg__SigSet.
typedef struct aimdk_msgs__msg__SigSet__Sequence
{
  aimdk_msgs__msg__SigSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__SigSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__SIG_SET__STRUCT_H_
