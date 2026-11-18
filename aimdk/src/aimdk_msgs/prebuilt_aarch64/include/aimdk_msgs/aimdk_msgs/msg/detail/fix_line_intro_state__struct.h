// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/FixLineIntroState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE'.
enum
{
  aimdk_msgs__msg__FixLineIntroState__TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE = 0
};

/// Constant 'TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS'.
enum
{
  aimdk_msgs__msg__FixLineIntroState__TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS = 1
};

/// Constant 'TM_FIX_LINE_INTRO_STATE_NAVI_RETURN'.
enum
{
  aimdk_msgs__msg__FixLineIntroState__TM_FIX_LINE_INTRO_STATE_NAVI_RETURN = 2
};

/// Constant 'TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI'.
enum
{
  aimdk_msgs__msg__FixLineIntroState__TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI = 3
};

/// Constant 'TM_FIX_LINE_INTRO_STATE_POI_ACTIONS'.
enum
{
  aimdk_msgs__msg__FixLineIntroState__TM_FIX_LINE_INTRO_STATE_POI_ACTIONS = 4
};

/// Constant 'TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS'.
enum
{
  aimdk_msgs__msg__FixLineIntroState__TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS = 5
};

// Include directives for member types
// Member 'set_task_name'
// Member 'task_name'
// Member 'map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FixLineIntroState in the package aimdk_msgs.
/**
  * 定义固定路线讲解任务状态
 */
typedef struct aimdk_msgs__msg__FixLineIntroState
{
  /// 用户预设置任务的 id, 若未设置过 set_task_id = 0
  /// 用户预设置任务的别名, 若未设置过 set_task_name = ""
  uint64_t set_task_id;
  rosidl_runtime_c__String set_task_name;
  /// 任务别名：用户取的任务别名
  /// 任务ID：全局唯一的id, 创建任务时生成(目前只有创建的导览任务):
  rosidl_runtime_c__String task_name;
  uint64_t task_id;
  /// 地图别名：用户取的任务别名. 若当前任务依赖地图时字段有效
  /// 地图ID：全局唯一的id, 创建地图时生成:
  rosidl_runtime_c__String map_name;
  uint64_t map_id;
  /// 剩余讲解点数量，若当前正在讲解，不包含当前讲解点
  uint32_t rest_site_number;
  /// 固定路线讲解任务状态
  uint8_t fix_line_intro_state;
  /// 当前目标点位 id
  /// 若[TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI], 当前插入POI任务-导航过程：id 为该 poi id
  /// 若[TM_FIX_LINE_INTRO_POI_ACTIONS], 当前插入POI任务-POI动作过程：id 为该 poi id
  /// 若[TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE], 当前讲解任务-导航过程：id 为下一个 讲解点 id
  /// 若[TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS], 当前讲解任务-动作过程：id 为当前 讲解点 id
  /// 若[TM_FIX_LINE_INTRO_STATE_NAVI_RETURN], 在返回待机点过程：id 无效（忽略该字段）
  uint64_t cur_target_id;
} aimdk_msgs__msg__FixLineIntroState;

// Struct for a sequence of aimdk_msgs__msg__FixLineIntroState.
typedef struct aimdk_msgs__msg__FixLineIntroState__Sequence
{
  aimdk_msgs__msg__FixLineIntroState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__FixLineIntroState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__STRUCT_H_
