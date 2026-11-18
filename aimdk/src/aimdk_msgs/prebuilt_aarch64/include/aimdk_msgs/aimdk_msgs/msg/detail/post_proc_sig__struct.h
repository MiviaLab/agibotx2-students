// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/PostProcSig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sig_set'
#include "aimdk_msgs/msg/detail/sig_set__struct.h"

/// Struct defined in msg/PostProcSig in the package aimdk_msgs.
/**
  * PostProcSig.msg
  * 诊断码和信号集合的组合
 */
typedef struct aimdk_msgs__msg__PostProcSig
{
  /// 时间戳
  uint64_t timestamp;
  /// 诊断码
  uint64_t diag_code;
  /// 信号集合
  aimdk_msgs__msg__SigSet sig_set;
} aimdk_msgs__msg__PostProcSig;

// Struct for a sequence of aimdk_msgs__msg__PostProcSig.
typedef struct aimdk_msgs__msg__PostProcSig__Sequence
{
  aimdk_msgs__msg__PostProcSig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__PostProcSig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__STRUCT_H_
