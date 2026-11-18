// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'code'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AlertCode in the package aimdk_msgs.
/**
  * ns 时间辍,单位为纳秒
 */
typedef struct aimdk_msgs__msg__AlertCode
{
  uint64_t timestamp;
  /// 告警第一次发生的时间戳，单位为纳秒
  uint64_t first_timestamp;
  /// 告警码，字符串形式
  rosidl_runtime_c__String code;
} aimdk_msgs__msg__AlertCode;

// Struct for a sequence of aimdk_msgs__msg__AlertCode.
typedef struct aimdk_msgs__msg__AlertCode__Sequence
{
  aimdk_msgs__msg__AlertCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__AlertCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_H_
