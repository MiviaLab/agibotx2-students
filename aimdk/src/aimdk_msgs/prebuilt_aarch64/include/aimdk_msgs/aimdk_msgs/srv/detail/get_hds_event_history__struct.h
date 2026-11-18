// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GetHdsEventHistory.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__STRUCT_H_

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
#include "aimdk_msgs/msg/detail/request_header__struct.h"
// Member 'query'
#include "aimdk_msgs/msg/detail/hds_event_query__struct.h"

/// Struct defined in srv/GetHdsEventHistory in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetHdsEventHistory_Request
{
  aimdk_msgs__msg__RequestHeader header;
  /// 过滤条件
  aimdk_msgs__msg__HdsEventQuery query;
} aimdk_msgs__srv__GetHdsEventHistory_Request;

// Struct for a sequence of aimdk_msgs__srv__GetHdsEventHistory_Request.
typedef struct aimdk_msgs__srv__GetHdsEventHistory_Request__Sequence
{
  aimdk_msgs__srv__GetHdsEventHistory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetHdsEventHistory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/response_header__struct.h"
// Member 'records'
#include "aimdk_msgs/msg/detail/hds_event_record__struct.h"

/// Struct defined in srv/GetHdsEventHistory in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GetHdsEventHistory_Response
{
  /// 响应头
  aimdk_msgs__msg__ResponseHeader header;
  /// 历史事件记录
  aimdk_msgs__msg__HdsEventRecord__Sequence records;
  /// 满足过滤条件的总记录数
  uint32_t total_count;
  /// 是否还有更多数据
  bool has_more;
} aimdk_msgs__srv__GetHdsEventHistory_Response;

// Struct for a sequence of aimdk_msgs__srv__GetHdsEventHistory_Response.
typedef struct aimdk_msgs__srv__GetHdsEventHistory_Response__Sequence
{
  aimdk_msgs__srv__GetHdsEventHistory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GetHdsEventHistory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__STRUCT_H_
