// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:srv/GroupControlTimeSync.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__STRUCT_H_
#define AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__STRUCT_H_

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
#include "aimdk_msgs/msg/detail/common_request__struct.h"
// Member 'slaves'
#include "aimdk_msgs/msg/detail/slave_device__struct.h"

/// Struct defined in srv/GroupControlTimeSync in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GroupControlTimeSync_Request
{
  /// ----------------------------------------------------
  /// 请求头
  aimdk_msgs__msg__CommonRequest header;
  /// ----------------------------------------------------
  /// 群控从节点
  aimdk_msgs__msg__SlaveDevice__Sequence slaves;
} aimdk_msgs__srv__GroupControlTimeSync_Request;

// Struct for a sequence of aimdk_msgs__srv__GroupControlTimeSync_Request.
typedef struct aimdk_msgs__srv__GroupControlTimeSync_Request__Sequence
{
  aimdk_msgs__srv__GroupControlTimeSync_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GroupControlTimeSync_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.h"
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GroupControlTimeSync in the package aimdk_msgs.
typedef struct aimdk_msgs__srv__GroupControlTimeSync_Response
{
  aimdk_msgs__msg__CommonResponse header;
  /// 错误码
  int32_t error_code;
  /// 错误信息
  rosidl_runtime_c__String error_msg;
} aimdk_msgs__srv__GroupControlTimeSync_Response;

// Struct for a sequence of aimdk_msgs__srv__GroupControlTimeSync_Response.
typedef struct aimdk_msgs__srv__GroupControlTimeSync_Response__Sequence
{
  aimdk_msgs__srv__GroupControlTimeSync_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__srv__GroupControlTimeSync_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__STRUCT_H_
