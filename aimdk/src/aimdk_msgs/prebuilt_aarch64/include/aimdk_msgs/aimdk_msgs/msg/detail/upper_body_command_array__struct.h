// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aimdk_msgs:msg/UpperBodyCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__STRUCT_H_
#define AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAND_CLAW_OPEN_CLOSE'.
/**
  * --- hand_sub_mode 取值（与 HAL/手部驱动约定对齐）---
 */
enum
{
  aimdk_msgs__msg__UpperBodyCommandArray__HAND_CLAW_OPEN_CLOSE = 1
};

/// Constant 'HAND_DEXTEROUS_JOINT'.
enum
{
  aimdk_msgs__msg__UpperBodyCommandArray__HAND_DEXTEROUS_JOINT = 2
};

/// Constant 'HAND_DEXTEROUS_GESTURE'.
enum
{
  aimdk_msgs__msg__UpperBodyCommandArray__HAND_DEXTEROUS_GESTURE = 3
};

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.h"
// Member 'source'
#include "rosidl_runtime_c/string.h"
// Member 'hand_pos'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/UpperBodyCommandArray in the package aimdk_msgs.
/**
  * 上半身（头 + 双臂 + 手）关节/目标指令，供运动控制或下游分解为 HAL 关节命令。
  * 与 McBodyPose（躯干/站姿）正交：本消息侧重头、手臂与末端手的目标。
 */
typedef struct aimdk_msgs__msg__UpperBodyCommandArray
{
  /// 消息头（时间戳、坐标系、序列号等）
  aimdk_msgs__msg__MessageHeader header;
  /// 指令来源标识，便于仲裁与调试（例如 teleop、planner、replay 等）
  rosidl_runtime_c__String source;
  /// 手部子模式，与 hand_pos 的语义一致，取值见下方 HAND_* 常量
  uint8_t hand_sub_mode;
  /// 头部关节目标位置，固定长度 2；元素顺序与具体机型 neck 定义一致（常见为两自由度）
  /// 单位：rad
  double head_pos[2];
  /// 双臂关节目标位置，固定长度 14：通常按「左臂 7 + 右臂 7」与机型臂链顺序一致
  /// 单位：rad
  double arm_pos[14];
  /// 手部目标：长度随 hand_sub_mode 与手型变化（夹爪开合度、灵巧手关节、手势参数等）
  /// 单位：依子模式约定（多为 rad 或归一化开合量）
  rosidl_runtime_c__double__Sequence hand_pos;
} aimdk_msgs__msg__UpperBodyCommandArray;

// Struct for a sequence of aimdk_msgs__msg__UpperBodyCommandArray.
typedef struct aimdk_msgs__msg__UpperBodyCommandArray__Sequence
{
  aimdk_msgs__msg__UpperBodyCommandArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aimdk_msgs__msg__UpperBodyCommandArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__STRUCT_H_
