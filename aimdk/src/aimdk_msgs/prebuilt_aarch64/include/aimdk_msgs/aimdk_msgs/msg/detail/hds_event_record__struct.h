// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/HdsEventRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'alert_code'
// Member 'alert_location'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HdsEventRecord in the package aimdk_msgs.
/**
  * 历史事件记录 ID
 */
typedef struct aimdk_msgs__msg__HdsEventRecord
{
  uint64_t id;
  /// 诊断码
  uint64_t diag_code;
  /// 告警码
  rosidl_runtime_c__String alert_code;
  /// 告警部位，当前预留
  rosidl_runtime_c__String alert_location;
  /// 首次发生时间戳，单位为纳秒
  uint64_t first_timestamp;
  /// 最近发生时间戳，单位为纳秒
  uint64_t last_timestamp;
  /// 恢复时间戳，单位为纳秒，0 表示未恢复
  uint64_t recover_timestamp;
  /// 持续时长，单位为纳秒
  uint64_t duration_ns;
  /// 是否已恢复
  bool recovered;
} aimdk_msgs__msg__HdsEventRecord;

// Struct for a sequence of aimdk_msgs__msg__HdsEventRecord.
typedef struct aimdk_msgs__msg__HdsEventRecord__Sequence
{
  aimdk_msgs__msg__HdsEventRecord * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__HdsEventRecord__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__STRUCT_H_
