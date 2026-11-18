// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/PilotState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/pilot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_name`
// Member `intro_task_name`
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__PilotState__init(aimdk_msgs__msg__PilotState * msg)
{
  if (!msg) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__init(&msg->target_name)) {
    aimdk_msgs__msg__PilotState__fini(msg);
    return false;
  }
  // target_id
  // intro_task_name
  if (!rosidl_runtime_c__String__init(&msg->intro_task_name)) {
    aimdk_msgs__msg__PilotState__fini(msg);
    return false;
  }
  // intro_task_id
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    aimdk_msgs__msg__PilotState__fini(msg);
    return false;
  }
  // map_id
  // pilot_state
  return true;
}

void
aimdk_msgs__msg__PilotState__fini(aimdk_msgs__msg__PilotState * msg)
{
  if (!msg) {
    return;
  }
  // target_name
  rosidl_runtime_c__String__fini(&msg->target_name);
  // target_id
  // intro_task_name
  rosidl_runtime_c__String__fini(&msg->intro_task_name);
  // intro_task_id
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // map_id
  // pilot_state
}

bool
aimdk_msgs__msg__PilotState__are_equal(const aimdk_msgs__msg__PilotState * lhs, const aimdk_msgs__msg__PilotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_name), &(rhs->target_name)))
  {
    return false;
  }
  // target_id
  if (lhs->target_id != rhs->target_id) {
    return false;
  }
  // intro_task_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->intro_task_name), &(rhs->intro_task_name)))
  {
    return false;
  }
  // intro_task_id
  if (lhs->intro_task_id != rhs->intro_task_id) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // pilot_state
  if (lhs->pilot_state != rhs->pilot_state) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__PilotState__copy(
  const aimdk_msgs__msg__PilotState * input,
  aimdk_msgs__msg__PilotState * output)
{
  if (!input || !output) {
    return false;
  }
  // target_name
  if (!rosidl_runtime_c__String__copy(
      &(input->target_name), &(output->target_name)))
  {
    return false;
  }
  // target_id
  output->target_id = input->target_id;
  // intro_task_name
  if (!rosidl_runtime_c__String__copy(
      &(input->intro_task_name), &(output->intro_task_name)))
  {
    return false;
  }
  // intro_task_id
  output->intro_task_id = input->intro_task_id;
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // map_id
  output->map_id = input->map_id;
  // pilot_state
  output->pilot_state = input->pilot_state;
  return true;
}

aimdk_msgs__msg__PilotState *
aimdk_msgs__msg__PilotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PilotState * msg = (aimdk_msgs__msg__PilotState *)allocator.allocate(sizeof(aimdk_msgs__msg__PilotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__PilotState));
  bool success = aimdk_msgs__msg__PilotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__PilotState__destroy(aimdk_msgs__msg__PilotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__PilotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__PilotState__Sequence__init(aimdk_msgs__msg__PilotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PilotState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__PilotState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__PilotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__PilotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__PilotState__fini(&data[i - 1]);
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
aimdk_msgs__msg__PilotState__Sequence__fini(aimdk_msgs__msg__PilotState__Sequence * array)
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
      aimdk_msgs__msg__PilotState__fini(&array->data[i]);
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

aimdk_msgs__msg__PilotState__Sequence *
aimdk_msgs__msg__PilotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PilotState__Sequence * array = (aimdk_msgs__msg__PilotState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__PilotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__PilotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__PilotState__Sequence__destroy(aimdk_msgs__msg__PilotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__PilotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__PilotState__Sequence__are_equal(const aimdk_msgs__msg__PilotState__Sequence * lhs, const aimdk_msgs__msg__PilotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__PilotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__PilotState__Sequence__copy(
  const aimdk_msgs__msg__PilotState__Sequence * input,
  aimdk_msgs__msg__PilotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__PilotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__PilotState * data =
      (aimdk_msgs__msg__PilotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__PilotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__PilotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__PilotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
