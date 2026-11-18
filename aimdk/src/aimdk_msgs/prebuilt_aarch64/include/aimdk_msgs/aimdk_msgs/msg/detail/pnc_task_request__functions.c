// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/pnc_task_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__functions.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `reference_line`
// Member `trajectory_pos`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
// Member `trajectory_vel`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
aimdk_msgs__msg__PncTaskRequest__init(aimdk_msgs__msg__PncTaskRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__init(&msg->header)) {
    aimdk_msgs__msg__PncTaskRequest__fini(msg);
    return false;
  }
  // task_type
  // task_request
  // pnc_mode
  // task_id
  // map_id
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    aimdk_msgs__msg__PncTaskRequest__fini(msg);
    return false;
  }
  // reference_line
  if (!geometry_msgs__msg__Pose2D__Sequence__init(&msg->reference_line, 0)) {
    aimdk_msgs__msg__PncTaskRequest__fini(msg);
    return false;
  }
  // target_pose_radius
  // max_forward_speed
  // trajectory_pos
  if (!geometry_msgs__msg__Pose2D__Sequence__init(&msg->trajectory_pos, 0)) {
    aimdk_msgs__msg__PncTaskRequest__fini(msg);
    return false;
  }
  // trajectory_vel
  if (!geometry_msgs__msg__Twist__Sequence__init(&msg->trajectory_vel, 0)) {
    aimdk_msgs__msg__PncTaskRequest__fini(msg);
    return false;
  }
  // play_timestamp
  // time_duration
  // reserve_info
  return true;
}

void
aimdk_msgs__msg__PncTaskRequest__fini(aimdk_msgs__msg__PncTaskRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  aimdk_msgs__msg__MessageHeader__fini(&msg->header);
  // task_type
  // task_request
  // pnc_mode
  // task_id
  // map_id
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
  // reference_line
  geometry_msgs__msg__Pose2D__Sequence__fini(&msg->reference_line);
  // target_pose_radius
  // max_forward_speed
  // trajectory_pos
  geometry_msgs__msg__Pose2D__Sequence__fini(&msg->trajectory_pos);
  // trajectory_vel
  geometry_msgs__msg__Twist__Sequence__fini(&msg->trajectory_vel);
  // play_timestamp
  // time_duration
  // reserve_info
}

bool
aimdk_msgs__msg__PncTaskRequest__are_equal(const aimdk_msgs__msg__PncTaskRequest * lhs, const aimdk_msgs__msg__PncTaskRequest * rhs)
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
  // task_type
  if (lhs->task_type != rhs->task_type) {
    return false;
  }
  // task_request
  if (lhs->task_request != rhs->task_request) {
    return false;
  }
  // pnc_mode
  if (lhs->pnc_mode != rhs->pnc_mode) {
    return false;
  }
  // task_id
  if (lhs->task_id != rhs->task_id) {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  // reference_line
  if (!geometry_msgs__msg__Pose2D__Sequence__are_equal(
      &(lhs->reference_line), &(rhs->reference_line)))
  {
    return false;
  }
  // target_pose_radius
  if (lhs->target_pose_radius != rhs->target_pose_radius) {
    return false;
  }
  // max_forward_speed
  if (lhs->max_forward_speed != rhs->max_forward_speed) {
    return false;
  }
  // trajectory_pos
  if (!geometry_msgs__msg__Pose2D__Sequence__are_equal(
      &(lhs->trajectory_pos), &(rhs->trajectory_pos)))
  {
    return false;
  }
  // trajectory_vel
  if (!geometry_msgs__msg__Twist__Sequence__are_equal(
      &(lhs->trajectory_vel), &(rhs->trajectory_vel)))
  {
    return false;
  }
  // play_timestamp
  if (lhs->play_timestamp != rhs->play_timestamp) {
    return false;
  }
  // time_duration
  if (lhs->time_duration != rhs->time_duration) {
    return false;
  }
  // reserve_info
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->reserve_info[i] != rhs->reserve_info[i]) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__PncTaskRequest__copy(
  const aimdk_msgs__msg__PncTaskRequest * input,
  aimdk_msgs__msg__PncTaskRequest * output)
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
  // task_type
  output->task_type = input->task_type;
  // task_request
  output->task_request = input->task_request;
  // pnc_mode
  output->pnc_mode = input->pnc_mode;
  // task_id
  output->task_id = input->task_id;
  // map_id
  output->map_id = input->map_id;
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  // reference_line
  if (!geometry_msgs__msg__Pose2D__Sequence__copy(
      &(input->reference_line), &(output->reference_line)))
  {
    return false;
  }
  // target_pose_radius
  output->target_pose_radius = input->target_pose_radius;
  // max_forward_speed
  output->max_forward_speed = input->max_forward_speed;
  // trajectory_pos
  if (!geometry_msgs__msg__Pose2D__Sequence__copy(
      &(input->trajectory_pos), &(output->trajectory_pos)))
  {
    return false;
  }
  // trajectory_vel
  if (!geometry_msgs__msg__Twist__Sequence__copy(
      &(input->trajectory_vel), &(output->trajectory_vel)))
  {
    return false;
  }
  // play_timestamp
  output->play_timestamp = input->play_timestamp;
  // time_duration
  output->time_duration = input->time_duration;
  // reserve_info
  for (size_t i = 0; i < 64; ++i) {
    output->reserve_info[i] = input->reserve_info[i];
  }
  return true;
}

aimdk_msgs__msg__PncTaskRequest *
aimdk_msgs__msg__PncTaskRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PncTaskRequest * msg = (aimdk_msgs__msg__PncTaskRequest *)allocator.allocate(sizeof(aimdk_msgs__msg__PncTaskRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__PncTaskRequest));
  bool success = aimdk_msgs__msg__PncTaskRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__PncTaskRequest__destroy(aimdk_msgs__msg__PncTaskRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__PncTaskRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__PncTaskRequest__Sequence__init(aimdk_msgs__msg__PncTaskRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PncTaskRequest * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__PncTaskRequest *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__PncTaskRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__PncTaskRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__PncTaskRequest__fini(&data[i - 1]);
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
aimdk_msgs__msg__PncTaskRequest__Sequence__fini(aimdk_msgs__msg__PncTaskRequest__Sequence * array)
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
      aimdk_msgs__msg__PncTaskRequest__fini(&array->data[i]);
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

aimdk_msgs__msg__PncTaskRequest__Sequence *
aimdk_msgs__msg__PncTaskRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PncTaskRequest__Sequence * array = (aimdk_msgs__msg__PncTaskRequest__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__PncTaskRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__PncTaskRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__PncTaskRequest__Sequence__destroy(aimdk_msgs__msg__PncTaskRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__PncTaskRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__PncTaskRequest__Sequence__are_equal(const aimdk_msgs__msg__PncTaskRequest__Sequence * lhs, const aimdk_msgs__msg__PncTaskRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__PncTaskRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__PncTaskRequest__Sequence__copy(
  const aimdk_msgs__msg__PncTaskRequest__Sequence * input,
  aimdk_msgs__msg__PncTaskRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__PncTaskRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__PncTaskRequest * data =
      (aimdk_msgs__msg__PncTaskRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__PncTaskRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__PncTaskRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__PncTaskRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
