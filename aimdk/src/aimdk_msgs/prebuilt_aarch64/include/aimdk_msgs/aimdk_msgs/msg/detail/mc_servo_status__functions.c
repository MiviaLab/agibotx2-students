// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McServoStatus.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_servo_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
aimdk_msgs__msg__McServoStatus__init(aimdk_msgs__msg__McServoStatus * msg)
{
  if (!msg) {
    return false;
  }
  // squat_enable
  // squat_offset
  // squat_limit
  // head_yaw_offset
  // head_pitch_offset
  // waist_yaw_offset
  // waist_pitch_offset
  // waist_roll_offset
  return true;
}

void
aimdk_msgs__msg__McServoStatus__fini(aimdk_msgs__msg__McServoStatus * msg)
{
  if (!msg) {
    return;
  }
  // squat_enable
  // squat_offset
  // squat_limit
  // head_yaw_offset
  // head_pitch_offset
  // waist_yaw_offset
  // waist_pitch_offset
  // waist_roll_offset
}

bool
aimdk_msgs__msg__McServoStatus__are_equal(const aimdk_msgs__msg__McServoStatus * lhs, const aimdk_msgs__msg__McServoStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // squat_enable
  if (lhs->squat_enable != rhs->squat_enable) {
    return false;
  }
  // squat_offset
  if (lhs->squat_offset != rhs->squat_offset) {
    return false;
  }
  // squat_limit
  if (lhs->squat_limit != rhs->squat_limit) {
    return false;
  }
  // head_yaw_offset
  if (lhs->head_yaw_offset != rhs->head_yaw_offset) {
    return false;
  }
  // head_pitch_offset
  if (lhs->head_pitch_offset != rhs->head_pitch_offset) {
    return false;
  }
  // waist_yaw_offset
  if (lhs->waist_yaw_offset != rhs->waist_yaw_offset) {
    return false;
  }
  // waist_pitch_offset
  if (lhs->waist_pitch_offset != rhs->waist_pitch_offset) {
    return false;
  }
  // waist_roll_offset
  if (lhs->waist_roll_offset != rhs->waist_roll_offset) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McServoStatus__copy(
  const aimdk_msgs__msg__McServoStatus * input,
  aimdk_msgs__msg__McServoStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // squat_enable
  output->squat_enable = input->squat_enable;
  // squat_offset
  output->squat_offset = input->squat_offset;
  // squat_limit
  output->squat_limit = input->squat_limit;
  // head_yaw_offset
  output->head_yaw_offset = input->head_yaw_offset;
  // head_pitch_offset
  output->head_pitch_offset = input->head_pitch_offset;
  // waist_yaw_offset
  output->waist_yaw_offset = input->waist_yaw_offset;
  // waist_pitch_offset
  output->waist_pitch_offset = input->waist_pitch_offset;
  // waist_roll_offset
  output->waist_roll_offset = input->waist_roll_offset;
  return true;
}

aimdk_msgs__msg__McServoStatus *
aimdk_msgs__msg__McServoStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McServoStatus * msg = (aimdk_msgs__msg__McServoStatus *)allocator.allocate(sizeof(aimdk_msgs__msg__McServoStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McServoStatus));
  bool success = aimdk_msgs__msg__McServoStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McServoStatus__destroy(aimdk_msgs__msg__McServoStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McServoStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McServoStatus__Sequence__init(aimdk_msgs__msg__McServoStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McServoStatus * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McServoStatus *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McServoStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McServoStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McServoStatus__fini(&data[i - 1]);
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
aimdk_msgs__msg__McServoStatus__Sequence__fini(aimdk_msgs__msg__McServoStatus__Sequence * array)
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
      aimdk_msgs__msg__McServoStatus__fini(&array->data[i]);
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

aimdk_msgs__msg__McServoStatus__Sequence *
aimdk_msgs__msg__McServoStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McServoStatus__Sequence * array = (aimdk_msgs__msg__McServoStatus__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McServoStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McServoStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McServoStatus__Sequence__destroy(aimdk_msgs__msg__McServoStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McServoStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McServoStatus__Sequence__are_equal(const aimdk_msgs__msg__McServoStatus__Sequence * lhs, const aimdk_msgs__msg__McServoStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McServoStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McServoStatus__Sequence__copy(
  const aimdk_msgs__msg__McServoStatus__Sequence * input,
  aimdk_msgs__msg__McServoStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McServoStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McServoStatus * data =
      (aimdk_msgs__msg__McServoStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McServoStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McServoStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McServoStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
