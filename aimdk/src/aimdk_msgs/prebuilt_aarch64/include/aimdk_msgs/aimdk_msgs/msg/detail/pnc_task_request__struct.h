// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__STRUCT_H_

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
  * !!!! 增加枚举请在末尾增加，千万不要中间插入, 不要调换已有的顺序!!!!
 */
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_NONE = 0
};

/// Constant 'TASK_TYPE_PLANNING_NAVI_TO_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_PLANNING_NAVI_TO_GOAL = 1
};

/// Constant 'TASK_TYPE_PLANNING_NAVI_TO_POSE_2D'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_PLANNING_NAVI_TO_POSE_2D = 2
};

/// Constant 'TASK_TYPE_LINEAR_NAVI_TO_RELATIVE'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_LINEAR_NAVI_TO_RELATIVE = 3
};

/// Constant 'TASK_TYPE_LINEAR_NAVI_TO_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_LINEAR_NAVI_TO_GOAL = 4
};

/// Constant 'TASK_TYPE_LINEAR_NAVI_TO_POSE_2D'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_LINEAR_NAVI_TO_POSE_2D = 5
};

/// Constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL = 6
};

/// Constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_DIRECT_NAVI_TO_RELATIVE = 7
};

/// Constant 'TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD = 8
};

/// Constant 'TASK_TYPE_SPIN_TURN'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_SPIN_TURN = 9
};

/// Constant 'TASK_TYPE_MOVE_FORWARD'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_MOVE_FORWARD = 10
};

/// Constant 'TASK_TYPE_PRECISE_NAVI_TO_GOAL'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_PRECISE_NAVI_TO_GOAL = 11
};

/// Constant 'TASK_TYPE_NO_MAP_FOLLOW'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_NO_MAP_FOLLOW = 12
};

/// Constant 'TASK_TYPE_AUTO_EXPLORE'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_AUTO_EXPLORE = 13
};

/// Constant 'TASK_TYPE_VOICE_CONTROL'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_VOICE_CONTROL = 14
};

/// Constant 'TASK_TYPE_RELATIVE_TARGET_TRACKING'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_RELATIVE_TARGET_TRACKING = 15
};

/// Constant 'TASK_TYPE_PLANNING_NAVI_WITH_RL'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_PLANNING_NAVI_WITH_RL = 16
};

/// Constant 'TASK_TYPE_SWARM_CONTROL_NAVI_MODE'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_TYPE_SWARM_CONTROL_NAVI_MODE = 17
};

/// Constant 'TASK_REQUEST_NONE'.
/**
  * ========== 枚举定义 TASK_REQUEST =========
  * !!!! 增加枚举请在末尾增加，千万不要中间插入, 不要调换已有的顺序!!!!
 */
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_REQUEST_NONE = 0
};

/// Constant 'TASK_REQUEST_START'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_REQUEST_START = 1
};

/// Constant 'TASK_REQUEST_STOP'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_REQUEST_STOP = 2
};

/// Constant 'TASK_REQUEST_PAUSE'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_REQUEST_PAUSE = 3
};

/// Constant 'TASK_REQUEST_RESUME'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_REQUEST_RESUME = 4
};

/// Constant 'TASK_REQUEST_STATUS_INQUIRY'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__TASK_REQUEST_STATUS_INQUIRY = 5
};

/// Constant 'NORMAL'.
/**
  * ========== 枚举定义 PNC_MODE ===============
 */
enum
{
  aimdk_msgs__msg__PncTaskRequest__NORMAL = 0
};

/// Constant 'NO_PERCEPTION'.
enum
{
  aimdk_msgs__msg__PncTaskRequest__NO_PERCEPTION = 1
};

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'reference_line'
// Member 'trajectory_pos'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"
// Member 'trajectory_vel'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/PncTaskRequest in the package aimdk_msgs.
/**
  * PncTaskRequest.msg
 */
typedef struct aimdk_msgs__msg__PncTaskRequest
{
  aimdk_msgs__msg__MessageHeader header;
  /// 枚举定义 TASK_TYPE
  uint8_t task_type;
  /// 枚举定义 TASK_REQUEST
  uint8_t task_request;
  /// 枚举定义 PNC_MODE
  uint8_t pnc_mode;
  /// 任务ID：区分是导览路线，设定的任务点信息等
  uint64_t task_id;
  /// 地图ID：区分当前使用地图
  uint64_t map_id;
  /// 目标位姿                         # 枚举定义 TASK_STATUS
  geometry_msgs__msg__PoseStamped target_pose;
  /// 指引线仅考虑<x,y>, target_pose设置为目标姿态(yaw)
  geometry_msgs__msg__Pose2D__Sequence reference_line;
  /// 目标范围半径, 当 target_pose 被占据时，用于判断该次导航的目标点是否可以到达
  double target_pose_radius;
  /// 最大运行速度
  float max_forward_speed;
  /// 群控模式，轨迹的路点位置
  geometry_msgs__msg__Pose2D__Sequence trajectory_pos;
  /// 群控模式，轨迹的路点速度vx vy wz的填入
  geometry_msgs__msg__Twist__Sequence trajectory_vel;
  /// orin板子上启动机器人行走行为树的系统时间戳
  uint64_t play_timestamp;
  /// 群控模式下行走轨迹的时长
  uint64_t time_duration;
  /// 64 byte 保留字段
  uint8_t reserve_info[64];
} aimdk_msgs__msg__PncTaskRequest;

// Struct for a sequence of aimdk_msgs__msg__PncTaskRequest.
typedef struct aimdk_msgs__msg__PncTaskRequest__Sequence
{
  aimdk_msgs__msg__PncTaskRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__PncTaskRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__STRUCT_H_
