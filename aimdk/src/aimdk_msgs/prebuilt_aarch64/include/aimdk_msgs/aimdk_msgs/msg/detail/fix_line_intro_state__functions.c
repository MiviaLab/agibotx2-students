// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/FixLineIntroState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/fix_line_intro_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `set_task_name`
// Member `task_name`
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__FixLineIntroState__init(aimdk_msgs__msg__FixLineIntroState * msg)
{
  if (!msg) {
    return false;
  }
  // set_task_id
  // set_task_name
  if (!rosidl_runtime_c__String__init(&msg->set_task_name)) {
    aimdk_msgs__msg__FixLineIntroState__fini(msg);
    return false;
  }
  // task_name
  if (!rosidl_runtime_c__String__init(&msg->task_name)) {
    aimdk_msgs__msg__FixLineIntroState__fini(msg);
    return false;
  }
  // task_id
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    aimdk_msgs__msg__FixLineIntroState__fini(msg);
    return false;
  }
  // map_id
  // rest_site_number
  // fix_line_intro_state
  // cur_target_id
  return true;
}

void
aimdk_msgs__msg__FixLineIntroState__fini(aimdk_msgs__msg__FixLineIntroState * msg)
{
  if (!msg) {
    return;
  }
  // set_task_id
  // set_task_name
  rosidl_runtime_c__String__fini(&msg->set_task_name);
  // task_name
  rosidl_runtime_c__String__fini(&msg->task_name);
  // task_id
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // map_id
  // rest_site_number
  // fix_line_intro_state
  // cur_target_id
}

bool
aimdk_msgs__msg__FixLineIntroState__are_equal(const aimdk_msgs__msg__FixLineIntroState * lhs, const aimdk_msgs__msg__FixLineIntroState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // set_task_id
  if (lhs->set_task_id != rhs->set_task_id) {
    return false;
  }
  // set_task_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->set_task_name), &(rhs->set_task_name)))
  {
    return false;
  }
  // task_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_name), &(rhs->task_name)))
  {
    return false;
  }
  // task_id
  if (lhs->task_id != rhs->task_id) {
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
  // rest_site_number
  if (lhs->rest_site_number != rhs->rest_site_number) {
    return false;
  }
  // fix_line_intro_state
  if (lhs->fix_line_intro_state != rhs->fix_line_intro_state) {
    return false;
  }
  // cur_target_id
  if (lhs->cur_target_id != rhs->cur_target_id) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__FixLineIntroState__copy(
  const aimdk_msgs__msg__FixLineIntroState * input,
  aimdk_msgs__msg__FixLineIntroState * output)
{
  if (!input || !output) {
    return false;
  }
  // set_task_id
  output->set_task_id = input->set_task_id;
  // set_task_name
  if (!rosidl_runtime_c__String__copy(
      &(input->set_task_name), &(output->set_task_name)))
  {
    return false;
  }
  // task_name
  if (!rosidl_runtime_c__String__copy(
      &(input->task_name), &(output->task_name)))
  {
    return false;
  }
  // task_id
  output->task_id = input->task_id;
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // map_id
  output->map_id = input->map_id;
  // rest_site_number
  output->rest_site_number = input->rest_site_number;
  // fix_line_intro_state
  output->fix_line_intro_state = input->fix_line_intro_state;
  // cur_target_id
  output->cur_target_id = input->cur_target_id;
  return true;
}

aimdk_msgs__msg__FixLineIntroState *
aimdk_msgs__msg__FixLineIntroState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__FixLineIntroState * msg = (aimdk_msgs__msg__FixLineIntroState *)allocator.allocate(sizeof(aimdk_msgs__msg__FixLineIntroState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__FixLineIntroState));
  bool success = aimdk_msgs__msg__FixLineIntroState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__FixLineIntroState__destroy(aimdk_msgs__msg__FixLineIntroState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__FixLineIntroState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__FixLineIntroState__Sequence__init(aimdk_msgs__msg__FixLineIntroState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__FixLineIntroState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__FixLineIntroState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__FixLineIntroState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__FixLineIntroState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__FixLineIntroState__fini(&data[i - 1]);
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
aimdk_msgs__msg__FixLineIntroState__Sequence__fini(aimdk_msgs__msg__FixLineIntroState__Sequence * array)
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
      aimdk_msgs__msg__FixLineIntroState__fini(&array->data[i]);
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

aimdk_msgs__msg__FixLineIntroState__Sequence *
aimdk_msgs__msg__FixLineIntroState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__FixLineIntroState__Sequence * array = (aimdk_msgs__msg__FixLineIntroState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__FixLineIntroState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__FixLineIntroState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__FixLineIntroState__Sequence__destroy(aimdk_msgs__msg__FixLineIntroState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__FixLineIntroState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__FixLineIntroState__Sequence__are_equal(const aimdk_msgs__msg__FixLineIntroState__Sequence * lhs, const aimdk_msgs__msg__FixLineIntroState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__FixLineIntroState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__FixLineIntroState__Sequence__copy(
  const aimdk_msgs__msg__FixLineIntroState__Sequence * input,
  aimdk_msgs__msg__FixLineIntroState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__FixLineIntroState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__FixLineIntroState * data =
      (aimdk_msgs__msg__FixLineIntroState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__FixLineIntroState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__FixLineIntroState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__FixLineIntroState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
