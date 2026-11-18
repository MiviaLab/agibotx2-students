// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McCommonState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_common_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__functions.h"
// Member `input_source`
#include "aimdk_msgs/msg/detail/mc_input_source__functions.h"
// Member `action_info`
#include "aimdk_msgs/msg/detail/mc_action_info__functions.h"
// Member `runtime_model`
#include "aimdk_msgs/msg/detail/mc_runtime_model__functions.h"
// Member `motion_status`
#include "aimdk_msgs/msg/detail/mc_motion_status__functions.h"
// Member `servo_status`
#include "aimdk_msgs/msg/detail/mc_servo_status__functions.h"
// Member `fsm_state`
#include "aimdk_msgs/msg/detail/mc_fsm_state__functions.h"
// Member `body_status`
#include "aimdk_msgs/msg/detail/mc_body_pose_status__functions.h"
// Member `speed_status`
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__functions.h"

bool
aimdk_msgs__msg__McCommonState__init(aimdk_msgs__msg__McCommonState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__init(&msg->header)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // input_source
  if (!aimdk_msgs__msg__McInputSource__init(&msg->input_source)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // action_info
  if (!aimdk_msgs__msg__McActionInfo__init(&msg->action_info)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // runtime_model
  if (!aimdk_msgs__msg__McRuntimeModel__init(&msg->runtime_model)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // motion_status
  if (!aimdk_msgs__msg__McMotionStatus__init(&msg->motion_status)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // servo_status
  if (!aimdk_msgs__msg__McServoStatus__init(&msg->servo_status)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // fsm_state
  if (!aimdk_msgs__msg__McFsmState__init(&msg->fsm_state)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // body_status
  if (!aimdk_msgs__msg__McBodyPoseStatus__init(&msg->body_status)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  // speed_status
  if (!aimdk_msgs__msg__McLocomotionSpeedStatus__init(&msg->speed_status)) {
    aimdk_msgs__msg__McCommonState__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__McCommonState__fini(aimdk_msgs__msg__McCommonState * msg)
{
  if (!msg) {
    return;
  }
  // header
  aimdk_msgs__msg__MessageHeader__fini(&msg->header);
  // input_source
  aimdk_msgs__msg__McInputSource__fini(&msg->input_source);
  // action_info
  aimdk_msgs__msg__McActionInfo__fini(&msg->action_info);
  // runtime_model
  aimdk_msgs__msg__McRuntimeModel__fini(&msg->runtime_model);
  // motion_status
  aimdk_msgs__msg__McMotionStatus__fini(&msg->motion_status);
  // servo_status
  aimdk_msgs__msg__McServoStatus__fini(&msg->servo_status);
  // fsm_state
  aimdk_msgs__msg__McFsmState__fini(&msg->fsm_state);
  // body_status
  aimdk_msgs__msg__McBodyPoseStatus__fini(&msg->body_status);
  // speed_status
  aimdk_msgs__msg__McLocomotionSpeedStatus__fini(&msg->speed_status);
}

bool
aimdk_msgs__msg__McCommonState__are_equal(const aimdk_msgs__msg__McCommonState * lhs, const aimdk_msgs__msg__McCommonState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // input_source
  if (!aimdk_msgs__msg__McInputSource__are_equal(
      &(lhs->input_source), &(rhs->input_source)))
  {
    return false;
  }
  // action_info
  if (!aimdk_msgs__msg__McActionInfo__are_equal(
      &(lhs->action_info), &(rhs->action_info)))
  {
    return false;
  }
  // runtime_model
  if (!aimdk_msgs__msg__McRuntimeModel__are_equal(
      &(lhs->runtime_model), &(rhs->runtime_model)))
  {
    return false;
  }
  // motion_status
  if (!aimdk_msgs__msg__McMotionStatus__are_equal(
      &(lhs->motion_status), &(rhs->motion_status)))
  {
    return false;
  }
  // servo_status
  if (!aimdk_msgs__msg__McServoStatus__are_equal(
      &(lhs->servo_status), &(rhs->servo_status)))
  {
    return false;
  }
  // fsm_state
  if (!aimdk_msgs__msg__McFsmState__are_equal(
      &(lhs->fsm_state), &(rhs->fsm_state)))
  {
    return false;
  }
  // body_status
  if (!aimdk_msgs__msg__McBodyPoseStatus__are_equal(
      &(lhs->body_status), &(rhs->body_status)))
  {
    return false;
  }
  // speed_status
  if (!aimdk_msgs__msg__McLocomotionSpeedStatus__are_equal(
      &(lhs->speed_status), &(rhs->speed_status)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McCommonState__copy(
  const aimdk_msgs__msg__McCommonState * input,
  aimdk_msgs__msg__McCommonState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // input_source
  if (!aimdk_msgs__msg__McInputSource__copy(
      &(input->input_source), &(output->input_source)))
  {
    return false;
  }
  // action_info
  if (!aimdk_msgs__msg__McActionInfo__copy(
      &(input->action_info), &(output->action_info)))
  {
    return false;
  }
  // runtime_model
  if (!aimdk_msgs__msg__McRuntimeModel__copy(
      &(input->runtime_model), &(output->runtime_model)))
  {
    return false;
  }
  // motion_status
  if (!aimdk_msgs__msg__McMotionStatus__copy(
      &(input->motion_status), &(output->motion_status)))
  {
    return false;
  }
  // servo_status
  if (!aimdk_msgs__msg__McServoStatus__copy(
      &(input->servo_status), &(output->servo_status)))
  {
    return false;
  }
  // fsm_state
  if (!aimdk_msgs__msg__McFsmState__copy(
      &(input->fsm_state), &(output->fsm_state)))
  {
    return false;
  }
  // body_status
  if (!aimdk_msgs__msg__McBodyPoseStatus__copy(
      &(input->body_status), &(output->body_status)))
  {
    return false;
  }
  // speed_status
  if (!aimdk_msgs__msg__McLocomotionSpeedStatus__copy(
      &(input->speed_status), &(output->speed_status)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__McCommonState *
aimdk_msgs__msg__McCommonState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McCommonState * msg = (aimdk_msgs__msg__McCommonState *)allocator.allocate(sizeof(aimdk_msgs__msg__McCommonState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McCommonState));
  bool success = aimdk_msgs__msg__McCommonState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McCommonState__destroy(aimdk_msgs__msg__McCommonState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McCommonState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McCommonState__Sequence__init(aimdk_msgs__msg__McCommonState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McCommonState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McCommonState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McCommonState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McCommonState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McCommonState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aimdk_msgs__msg__McCommonState__Sequence__fini(aimdk_msgs__msg__McCommonState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aimdk_msgs__msg__McCommonState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aimdk_msgs__msg__McCommonState__Sequence *
aimdk_msgs__msg__McCommonState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McCommonState__Sequence * array = (aimdk_msgs__msg__McCommonState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McCommonState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McCommonState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McCommonState__Sequence__destroy(aimdk_msgs__msg__McCommonState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McCommonState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McCommonState__Sequence__are_equal(const aimdk_msgs__msg__McCommonState__Sequence * lhs, const aimdk_msgs__msg__McCommonState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McCommonState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McCommonState__Sequence__copy(
  const aimdk_msgs__msg__McCommonState__Sequence * input,
  aimdk_msgs__msg__McCommonState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McCommonState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McCommonState * data =
      (aimdk_msgs__msg__McCommonState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McCommonState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McCommonState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McCommonState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
