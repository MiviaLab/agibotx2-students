// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/HdsEventQuery.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_ALL'.
enum
{
  aimdk_msgs__msg__HdsEventQuery__STATE_ALL = 0
};

/// Constant 'STATE_ACTIVE'.
enum
{
  aimdk_msgs__msg__HdsEventQuery__STATE_ACTIVE = 1
};

/// Constant 'STATE_RECOVERED'.
enum
{
  aimdk_msgs__msg__HdsEventQuery__STATE_RECOVERED = 2
};

// Include directives for member types
// Member 'diag_codes'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'alert_codes'
// Member 'alert_locations'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HdsEventQuery in the package aimdk_msgs.
/**
  * 起始时间戳，单位为纳秒，0 表示不限制
 */
typedef struct aimdk_msgs__msg__HdsEventQuery
{
  uint64_t start_time;
  /// 结束时间戳，单位为纳秒，0 表示不限制
  uint64_t end_time;
  /// 按诊断码过滤
  rosidl_runtime_c__uint64__Sequence diag_codes;
  /// 按告警码过滤
  rosidl_runtime_c__String__Sequence alert_codes;
  /// 按告警部位过滤
  rosidl_runtime_c__String__Sequence alert_locations;
  /// 状态过滤
  uint8_t state;
  /// 是否按时间倒序
  bool order_desc;
  /// 分页偏移
  uint32_t offset;
  /// 分页条数
  uint32_t limit;
} aimdk_msgs__msg__HdsEventQuery;

// Struct for a sequence of aimdk_msgs__msg__HdsEventQuery.
typedef struct aimdk_msgs__msg__HdsEventQuery__Sequence
{
  aimdk_msgs__msg__HdsEventQuery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__HdsEventQuery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__STRUCT_H_
