// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/TaskMasterState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TM_MAIN_STATE_IDLE'.
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_MAIN_STATE_IDLE = 0
};

/// Constant 'TM_MAIN_STATE_RELOCALIZATION'.
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_MAIN_STATE_RELOCALIZATION = 1
};

/// Constant 'TM_MAIN_STATE_MAPPING'.
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_MAIN_STATE_MAPPING = 2
};

/// Constant 'TM_MAIN_STATE_FIX_LINE_INTRO'.
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_MAIN_STATE_FIX_LINE_INTRO = 3
};

/// Constant 'TM_MAIN_STATE_RECORDING_PATH'.
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_MAIN_STATE_RECORDING_PATH = 4
};

/// Constant 'TM_MAIN_STATE_PILOT'.
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_MAIN_STATE_PILOT = 5
};

/// Constant 'TM_SUB_STATE_NONE'.
/**
  * 定义(顶层)子状态
 */
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_SUB_STATE_NONE = 0
};

/// Constant 'TM_SUB_STATE_RESUME'.
/**
  * 长程任务：运行中
 */
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_SUB_STATE_RESUME = 1
};

/// Constant 'TM_SUB_STATE_PAUSE'.
/**
  * 长程任务：暂停中
 */
enum
{
  aimdk_msgs__msg__TaskMasterState__TM_SUB_STATE_PAUSE = 2
};

/// Constant 'SLAM_STATE_IDLE'.
/**
  * 定义SLAM状态
 */
enum
{
  aimdk_msgs__msg__TaskMasterState__SLAM_STATE_IDLE = 0
};

/// Constant 'SLAM_STATE_RELOCALIZATION'.
enum
{
  aimdk_msgs__msg__TaskMasterState__SLAM_STATE_RELOCALIZATION = 1
};

/// Constant 'SLAM_STATE_MAPPING'.
enum
{
  aimdk_msgs__msg__TaskMasterState__SLAM_STATE_MAPPING = 2
};

/// Constant 'SLAM_STATE_LOCALIZATION'.
enum
{
  aimdk_msgs__msg__TaskMasterState__SLAM_STATE_LOCALIZATION = 3
};

// Include directives for member types
// Member 'loc_map_name'
// Member 'reserve_info'
#include "rosidl_runtime_c/string.h"
// Member 'fix_line_intro_state'
#include "aimdk_msgs/msg/detail/fix_line_intro_state__struct.h"
// Member 'pilot_state'
#include "aimdk_msgs/msg/detail/pilot_state__struct.h"

/// Struct defined in msg/TaskMasterState in the package aimdk_msgs.
/**
  * 定义(顶层)主状态
 */
typedef struct aimdk_msgs__msg__TaskMasterState
{
  /// 当前主状态
  uint8_t main_state;
  /// 当前子状态
  uint8_t sub_state;
  /// 当前SLAM状态
  uint8_t slam_state;
  /// 当前定位地图信息：
  /// [slam_state]=[SLAM_STATE_LOCALIZATION] 时字段有效
  uint64_t loc_map_id;
  rosidl_runtime_c__String loc_map_name;
  /// 任意状态，用户预设置任务相关字段，总是有效：
  /// [main_state]=[TM_MAIN_STATE_FIX_LINE_INTRO]时，其他相关字段有效
  aimdk_msgs__msg__FixLineIntroState fix_line_intro_state;
  /// [main_state]=[TM_MAIN_STATE_PILOT]时字段有效：
  aimdk_msgs__msg__PilotState pilot_state;
  /// 保留信息
  rosidl_runtime_c__String reserve_info;
} aimdk_msgs__msg__TaskMasterState;

// Struct for a sequence of aimdk_msgs__msg__TaskMasterState.
typedef struct aimdk_msgs__msg__TaskMasterState__Sequence
{
  aimdk_msgs__msg__TaskMasterState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__TaskMasterState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__STRUCT_H_
