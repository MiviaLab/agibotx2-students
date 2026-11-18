// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_H_

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
// Member 'input_source'
#include "aimdk_msgs/msg/detail/mc_input_source__struct.h"
// Member 'action_info'
#include "aimdk_msgs/msg/detail/mc_action_info__struct.h"
// Member 'runtime_model'
#include "aimdk_msgs/msg/detail/mc_runtime_model__struct.h"
// Member 'motion_status'
#include "aimdk_msgs/msg/detail/mc_motion_status__struct.h"
// Member 'servo_status'
#include "aimdk_msgs/msg/detail/mc_servo_status__struct.h"
// Member 'fsm_state'
#include "aimdk_msgs/msg/detail/mc_fsm_state__struct.h"
// Member 'body_status'
#include "aimdk_msgs/msg/detail/mc_body_pose_status__struct.h"
// Member 'speed_status'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__struct.h"

/// Struct defined in msg/McCommonState in the package aimdk_msgs.
/**
  * -----------------------------------------------------------------------------------
  * 机器人运控状态
  * -----------------------------------------------------------------------------------
 */
typedef struct aimdk_msgs__msg__McCommonState
{
  aimdk_msgs__msg__MessageHeader header;
  /// ------------ 输入源信息 ------------ #
  aimdk_msgs__msg__McInputSource input_source;
  /// ----------- Action 信息 ----------- #
  aimdk_msgs__msg__McActionInfo action_info;
  /// --------- 机器运行模型信息 ---------- #
  aimdk_msgs__msg__McRuntimeModel runtime_model;
  /// --------- 动作运行信息 ---------- #
  aimdk_msgs__msg__McMotionStatus motion_status;
  /// --------- 伺服控制运行信息 ---------- #
  aimdk_msgs__msg__McServoStatus servo_status;
  /// --------- 有限状态机状态 ---------- #
  aimdk_msgs__msg__McFsmState fsm_state;
  /// --------- 机器人姿态状态 ---------- #
  aimdk_msgs__msg__McBodyPoseStatus body_status;
  /// --------- 走跑速度状态 ---------- #
  aimdk_msgs__msg__McLocomotionSpeedStatus speed_status;
} aimdk_msgs__msg__McCommonState;

// Struct for a sequence of aimdk_msgs__msg__McCommonState.
typedef struct aimdk_msgs__msg__McCommonState__Sequence
{
  aimdk_msgs__msg__McCommonState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__McCommonState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_COMMON_STATE__STRUCT_H_
