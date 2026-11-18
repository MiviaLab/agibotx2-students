// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `speed_mode`
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_mode__functions.h"
// Member `forward_bounds`
// Member `lateral_bounds`
// Member `angular_bounds`
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_bounds__functions.h"

bool
aimdk_msgs__msg__McLocomotionSpeedStatus__init(aimdk_msgs__msg__McLocomotionSpeedStatus * msg)
{
  if (!msg) {
    return false;
  }
  // speed_mode
  if (!aimdk_msgs__msg__McLocomotionSpeedMode__init(&msg->speed_mode)) {
    aimdk_msgs__msg__McLocomotionSpeedStatus__fini(msg);
    return false;
  }
  // forward_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__init(&msg->forward_bounds)) {
    aimdk_msgs__msg__McLocomotionSpeedStatus__fini(msg);
    return false;
  }
  // lateral_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__init(&msg->lateral_bounds)) {
    aimdk_msgs__msg__McLocomotionSpeedStatus__fini(msg);
    return false;
  }
  // angular_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__init(&msg->angular_bounds)) {
    aimdk_msgs__msg__McLocomotionSpeedStatus__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__McLocomotionSpeedStatus__fini(aimdk_msgs__msg__McLocomotionSpeedStatus * msg)
{
  if (!msg) {
    return;
  }
  // speed_mode
  aimdk_msgs__msg__McLocomotionSpeedMode__fini(&msg->speed_mode);
  // forward_bounds
  aimdk_msgs__msg__McLocomotionSpeedBounds__fini(&msg->forward_bounds);
  // lateral_bounds
  aimdk_msgs__msg__McLocomotionSpeedBounds__fini(&msg->lateral_bounds);
  // angular_bounds
  aimdk_msgs__msg__McLocomotionSpeedBounds__fini(&msg->angular_bounds);
}

bool
aimdk_msgs__msg__McLocomotionSpeedStatus__are_equal(const aimdk_msgs__msg__McLocomotionSpeedStatus * lhs, const aimdk_msgs__msg__McLocomotionSpeedStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_mode
  if (!aimdk_msgs__msg__McLocomotionSpeedMode__are_equal(
      &(lhs->speed_mode), &(rhs->speed_mode)))
  {
    return false;
  }
  // forward_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__are_equal(
      &(lhs->forward_bounds), &(rhs->forward_bounds)))
  {
    return false;
  }
  // lateral_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__are_equal(
      &(lhs->lateral_bounds), &(rhs->lateral_bounds)))
  {
    return false;
  }
  // angular_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__are_equal(
      &(lhs->angular_bounds), &(rhs->angular_bounds)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__McLocomotionSpeedStatus__copy(
  const aimdk_msgs__msg__McLocomotionSpeedStatus * input,
  aimdk_msgs__msg__McLocomotionSpeedStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_mode
  if (!aimdk_msgs__msg__McLocomotionSpeedMode__copy(
      &(input->speed_mode), &(output->speed_mode)))
  {
    return false;
  }
  // forward_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__copy(
      &(input->forward_bounds), &(output->forward_bounds)))
  {
    return false;
  }
  // lateral_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__copy(
      &(input->lateral_bounds), &(output->lateral_bounds)))
  {
    return false;
  }
  // angular_bounds
  if (!aimdk_msgs__msg__McLocomotionSpeedBounds__copy(
      &(input->angular_bounds), &(output->angular_bounds)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__McLocomotionSpeedStatus *
aimdk_msgs__msg__McLocomotionSpeedStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McLocomotionSpeedStatus * msg = (aimdk_msgs__msg__McLocomotionSpeedStatus *)allocator.allocate(sizeof(aimdk_msgs__msg__McLocomotionSpeedStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__McLocomotionSpeedStatus));
  bool success = aimdk_msgs__msg__McLocomotionSpeedStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__McLocomotionSpeedStatus__destroy(aimdk_msgs__msg__McLocomotionSpeedStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__McLocomotionSpeedStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__init(aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McLocomotionSpeedStatus * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__McLocomotionSpeedStatus *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__McLocomotionSpeedStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__McLocomotionSpeedStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__McLocomotionSpeedStatus__fini(&data[i - 1]);
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
aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__fini(aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * array)
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
      aimdk_msgs__msg__McLocomotionSpeedStatus__fini(&array->data[i]);
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

aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence *
aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * array = (aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__destroy(aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__are_equal(const aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * lhs, const aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__McLocomotionSpeedStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence__copy(
  const aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * input,
  aimdk_msgs__msg__McLocomotionSpeedStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__McLocomotionSpeedStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__McLocomotionSpeedStatus * data =
      (aimdk_msgs__msg__McLocomotionSpeedStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__McLocomotionSpeedStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__McLocomotionSpeedStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__McLocomotionSpeedStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
