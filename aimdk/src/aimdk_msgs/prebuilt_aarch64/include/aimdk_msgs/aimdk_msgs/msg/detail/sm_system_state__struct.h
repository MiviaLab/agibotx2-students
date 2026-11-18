// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/SmSystemState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"
// Member 'cur_state'
#include "rosidl_runtime_c/string.h"
// Member 'cur_status'
#include "aimdk_msgs/msg/detail/system_status__struct.h"

/// Struct defined in msg/SmSystemState in the package aimdk_msgs.
typedef struct aimdk_msgs__msg__SmSystemState
{
  aimdk_msgs__msg__MessageHeader header;
  /// 系统状态
  rosidl_runtime_c__String cur_state;
  /// 系统当前情况
  aimdk_msgs__msg__SystemStatus cur_status;
} aimdk_msgs__msg__SmSystemState;

// Struct for a sequence of aimdk_msgs__msg__SmSystemState.
typedef struct aimdk_msgs__msg__SmSystemState__Sequence
{
  aimdk_msgs__msg__SmSystemState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__SmSystemState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__STRUCT_H_
