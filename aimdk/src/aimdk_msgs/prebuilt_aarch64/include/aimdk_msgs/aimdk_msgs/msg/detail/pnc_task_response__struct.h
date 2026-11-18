// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/PncTaskResponse.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TASK_TYPE_NONE'.
/**
  * ========== 枚举定义 TASK_TYPE ==========
 */
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_NONE = 0
};

/// Constant 'TASK_TYPE_PLANNING_NAVI_TO_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_PLANNING_NAVI_TO_GOAL = 1
};

/// Constant 'TASK_TYPE_PLANNING_NAVI_TO_POSE_2D'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_PLANNING_NAVI_TO_POSE_2D = 2
};

/// Constant 'TASK_TYPE_LINEAR_NAVI_TO_RELATIVE'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_LINEAR_NAVI_TO_RELATIVE = 3
};

/// Constant 'TASK_TYPE_LINEAR_NAVI_TO_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_LINEAR_NAVI_TO_GOAL = 4
};

/// Constant 'TASK_TYPE_LINEAR_NAVI_TO_POSE_2D'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_LINEAR_NAVI_TO_POSE_2D = 5
};

/// Constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL = 6
};

/// Constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_DIRECT_NAVI_TO_RELATIVE = 7
};

/// Constant 'TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD = 8
};

/// Constant 'TASK_TYPE_SPIN_TURN'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_SPIN_TURN = 9
};

/// Constant 'TASK_TYPE_MOVE_FORWARD'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_MOVE_FORWARD = 10
};

/// Constant 'TASK_TYPE_PRECISE_NAVI_TO_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_PRECISE_NAVI_TO_GOAL = 11
};

/// Constant 'TASK_TYPE_NO_MAP_FOLLOW'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_NO_MAP_FOLLOW = 12
};

/// Constant 'TASK_TYPE_AUTO_EXPLORE'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_AUTO_EXPLORE = 13
};

/// Constant 'TASK_TYPE_VOICE_CONTROL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_VOICE_CONTROL = 14
};

/// Constant 'TASK_TYPE_RELATIVE_TARGET_TRACKING'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_RELATIVE_TARGET_TRACKING = 15
};

/// Constant 'TASK_TYPE_PLANNING_NAVI_WITH_RL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_TYPE_PLANNING_NAVI_WITH_RL = 16
};

/// Constant 'TASK_STATUS_UNKONW'.
/**
  * ========== 枚举定义 TASK_STATUS =========
  * refs: https://agirobot.feishu.cn/wiki/MY9mwPTCVi19Q4kfCQtcAv69nub?larkTabName=space
 */
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_UNKONW = 0
};

/// Constant 'TASK_STATUS_RUNNING'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_RUNNING = 1
};

/// Constant 'TASK_STATUS_FAILED'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_FAILED = 2
};

/// Constant 'TASK_STATUS_PAUSED'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_PAUSED = 3
};

/// Constant 'TASK_STATUS_FINISHED'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_FINISHED = 4
};

/// Constant 'TASK_STATUS_UNKNOW_BLOCK'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_UNKNOW_BLOCK = 10
};

/// Constant 'TASK_STATUS_SPIN_BLOCK'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_SPIN_BLOCK = 11
};

/// Constant 'TASK_STATUS_TRAJ_COLLISION_BLOCK'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_TRAJ_COLLISION_BLOCK = 12
};

/// Constant 'TASK_STATUS_CONTOLLER_COLLISION_BLOCK'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_CONTOLLER_COLLISION_BLOCK = 13
};

/// Constant 'TASK_STATUS_SPIN_BLOCK_WITH_HUMAN'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_SPIN_BLOCK_WITH_HUMAN = 14
};

/// Constant 'TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN = 15
};

/// Constant 'TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN = 16
};

/// Constant 'TASK_STATUS_LOCAL_OPTIMAL_FAILED'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_LOCAL_OPTIMAL_FAILED = 17
};

/// Constant 'TASK_STATUS_GOBAL_PATH_BLOCK'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_GOBAL_PATH_BLOCK = 18
};

/// Constant 'TASK_STATUS_RECOVERY_GLOBAL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_RECOVERY_GLOBAL = 20
};

/// Constant 'TASK_STATUS_RECOVERY_LOCAL'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_RECOVERY_LOCAL = 21
};

/// Constant 'TASK_STATUS_RECOVERY_TIMEOUT'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_RECOVERY_TIMEOUT = 22
};

/// Constant 'TASK_STATUS_EXPLORE_TO_RECOVERY'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_EXPLORE_TO_RECOVERY = 23
};

/// Constant 'TASK_STATUS_EXPLORE_SUCCESS'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_EXPLORE_SUCCESS = 24
};

/// Constant 'TASK_STATUS_EXPLORE_FAILED'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_EXPLORE_FAILED = 25
};

/// Constant 'TASK_STATUS_GOAL_BLOCK_CONTINUE'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_GOAL_BLOCK_CONTINUE = 30
};

/// Constant 'TASK_STATUS_GOAL_BLOCK_ABORT'.
enum
{
  aimdk_msgs__msg__PncTaskResponse__TASK_STATUS_GOAL_BLOCK_ABORT = 31
};

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"

/// Struct defined in msg/PncTaskResponse in the package aimdk_msgs.
/**
  * PncTaskResponse.msg
 */
typedef struct aimdk_msgs__msg__PncTaskResponse
{
  aimdk_msgs__msg__MessageHeader header;
  /// 枚举定义 TASK_TYPE
  uint8_t task_type;
  /// 同 header.sequence, 描述唯一的某一任务指令(在同一任务的TASK_STATUS中，task_id相同)
  uint64_t task_id;
  /// 地图ID：区分当前使用地图
  uint64_t map_id;
  /// 枚举定义 TASK_STATUS
  uint8_t task_status;
  /// 64 byte 保留字段
  uint8_t reserve_info[64];
} aimdk_msgs__msg__PncTaskResponse;

// Struct for a sequence of aimdk_msgs__msg__PncTaskResponse.
typedef struct aimdk_msgs__msg__PncTaskResponse__Sequence
{
  aimdk_msgs__msg__PncTaskResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__PncTaskResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__STRUCT_H_
