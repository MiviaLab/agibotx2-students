// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/PilotState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TM_PILOT_STATE_NAVI_TO_TARGET'.
enum
{
  aimdk_msgs__msg__PilotState__TM_PILOT_STATE_NAVI_TO_TARGET = 0
};

/// Constant 'TM_PILOT_STATE_TARGET_ACTIONS'.
enum
{
  aimdk_msgs__msg__PilotState__TM_PILOT_STATE_TARGET_ACTIONS = 1
};

/// Constant 'TM_PILOT_STATE_NAVI_RETURN'.
enum
{
  aimdk_msgs__msg__PilotState__TM_PILOT_STATE_NAVI_RETURN = 2
};

/// Constant 'TM_PILOT_STATE_STANDBY_ACTIONS'.
enum
{
  aimdk_msgs__msg__PilotState__TM_PILOT_STATE_STANDBY_ACTIONS = 3
};

// Include directives for member types
// Member 'target_name'
// Member 'intro_task_name'
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PilotState in the package aimdk_msgs.
/**
  * 定义领航任务状态
 */
typedef struct aimdk_msgs__msg__PilotState
{
  /// 目标点别名：若导航至POI，即POI别名； 若导航至讲解点，即讲解点别名
  /// 目标点ID：若导航至POI，即POI ID(创建POI时生成)； 若导航至讲解点，即讲解ID
  rosidl_runtime_c__String target_name;
  uint64_t target_id;
  /// 仅在导航至讲解任务创建的讲解点时有效
  /// 讲解任务别名：用户取的任务别名
  /// 讲解任务ID
  rosidl_runtime_c__String intro_task_name;
  uint64_t intro_task_id;
  /// 地图别名：用户取的任务别名. 若当前任务依赖地图时字段有效
  /// 地图ID：全局唯一的id, 创建地图时生成:
  rosidl_runtime_c__String map_name;
  uint64_t map_id;
  /// 领航任务状态
  uint8_t pilot_state;
} aimdk_msgs__msg__PilotState;

// Struct for a sequence of aimdk_msgs__msg__PilotState.
typedef struct aimdk_msgs__msg__PilotState__Sequence
{
  aimdk_msgs__msg__PilotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__PilotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__STRUCT_H_
