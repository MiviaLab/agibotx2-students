// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/TaskMasterState.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/task_master_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `loc_map_name`
// Member `reserve_info`
#include "rosidl_runtime_c/string_functions.h"
// Member `fix_line_intro_state`
#include "aimdk_msgs/msg/detail/fix_line_intro_state__functions.h"
// Member `pilot_state`
#include "aimdk_msgs/msg/detail/pilot_state__functions.h"

bool
aimdk_msgs__msg__TaskMasterState__init(aimdk_msgs__msg__TaskMasterState * msg)
{
  if (!msg) {
    return false;
  }
  // main_state
  // sub_state
  // slam_state
  // loc_map_id
  // loc_map_name
  if (!rosidl_runtime_c__String__init(&msg->loc_map_name)) {
    aimdk_msgs__msg__TaskMasterState__fini(msg);
    return false;
  }
  // fix_line_intro_state
  if (!aimdk_msgs__msg__FixLineIntroState__init(&msg->fix_line_intro_state)) {
    aimdk_msgs__msg__TaskMasterState__fini(msg);
    return false;
  }
  // pilot_state
  if (!aimdk_msgs__msg__PilotState__init(&msg->pilot_state)) {
    aimdk_msgs__msg__TaskMasterState__fini(msg);
    return false;
  }
  // reserve_info
  if (!rosidl_runtime_c__String__init(&msg->reserve_info)) {
    aimdk_msgs__msg__TaskMasterState__fini(msg);
    return false;
  }
  return true;
}

void
aimdk_msgs__msg__TaskMasterState__fini(aimdk_msgs__msg__TaskMasterState * msg)
{
  if (!msg) {
    return;
  }
  // main_state
  // sub_state
  // slam_state
  // loc_map_id
  // loc_map_name
  rosidl_runtime_c__String__fini(&msg->loc_map_name);
  // fix_line_intro_state
  aimdk_msgs__msg__FixLineIntroState__fini(&msg->fix_line_intro_state);
  // pilot_state
  aimdk_msgs__msg__PilotState__fini(&msg->pilot_state);
  // reserve_info
  rosidl_runtime_c__String__fini(&msg->reserve_info);
}

bool
aimdk_msgs__msg__TaskMasterState__are_equal(const aimdk_msgs__msg__TaskMasterState * lhs, const aimdk_msgs__msg__TaskMasterState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // main_state
  if (lhs->main_state != rhs->main_state) {
    return false;
  }
  // sub_state
  if (lhs->sub_state != rhs->sub_state) {
    return false;
  }
  // slam_state
  if (lhs->slam_state != rhs->slam_state) {
    return false;
  }
  // loc_map_id
  if (lhs->loc_map_id != rhs->loc_map_id) {
    return false;
  }
  // loc_map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->loc_map_name), &(rhs->loc_map_name)))
  {
    return false;
  }
  // fix_line_intro_state
  if (!aimdk_msgs__msg__FixLineIntroState__are_equal(
      &(lhs->fix_line_intro_state), &(rhs->fix_line_intro_state)))
  {
    return false;
  }
  // pilot_state
  if (!aimdk_msgs__msg__PilotState__are_equal(
      &(lhs->pilot_state), &(rhs->pilot_state)))
  {
    return false;
  }
  // reserve_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reserve_info), &(rhs->reserve_info)))
  {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__TaskMasterState__copy(
  const aimdk_msgs__msg__TaskMasterState * input,
  aimdk_msgs__msg__TaskMasterState * output)
{
  if (!input || !output) {
    return false;
  }
  // main_state
  output->main_state = input->main_state;
  // sub_state
  output->sub_state = input->sub_state;
  // slam_state
  output->slam_state = input->slam_state;
  // loc_map_id
  output->loc_map_id = input->loc_map_id;
  // loc_map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->loc_map_name), &(output->loc_map_name)))
  {
    return false;
  }
  // fix_line_intro_state
  if (!aimdk_msgs__msg__FixLineIntroState__copy(
      &(input->fix_line_intro_state), &(output->fix_line_intro_state)))
  {
    return false;
  }
  // pilot_state
  if (!aimdk_msgs__msg__PilotState__copy(
      &(input->pilot_state), &(output->pilot_state)))
  {
    return false;
  }
  // reserve_info
  if (!rosidl_runtime_c__String__copy(
      &(input->reserve_info), &(output->reserve_info)))
  {
    return false;
  }
  return true;
}

aimdk_msgs__msg__TaskMasterState *
aimdk_msgs__msg__TaskMasterState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__TaskMasterState * msg = (aimdk_msgs__msg__TaskMasterState *)allocator.allocate(sizeof(aimdk_msgs__msg__TaskMasterState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__TaskMasterState));
  bool success = aimdk_msgs__msg__TaskMasterState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__TaskMasterState__destroy(aimdk_msgs__msg__TaskMasterState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__TaskMasterState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__TaskMasterState__Sequence__init(aimdk_msgs__msg__TaskMasterState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__TaskMasterState * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__TaskMasterState *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__TaskMasterState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__TaskMasterState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__TaskMasterState__fini(&data[i - 1]);
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
aimdk_msgs__msg__TaskMasterState__Sequence__fini(aimdk_msgs__msg__TaskMasterState__Sequence * array)
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
      aimdk_msgs__msg__TaskMasterState__fini(&array->data[i]);
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

aimdk_msgs__msg__TaskMasterState__Sequence *
aimdk_msgs__msg__TaskMasterState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__TaskMasterState__Sequence * array = (aimdk_msgs__msg__TaskMasterState__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__TaskMasterState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__TaskMasterState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__TaskMasterState__Sequence__destroy(aimdk_msgs__msg__TaskMasterState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__TaskMasterState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__TaskMasterState__Sequence__are_equal(const aimdk_msgs__msg__TaskMasterState__Sequence * lhs, const aimdk_msgs__msg__TaskMasterState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__TaskMasterState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__TaskMasterState__Sequence__copy(
  const aimdk_msgs__msg__TaskMasterState__Sequence * input,
  aimdk_msgs__msg__TaskMasterState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__TaskMasterState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__TaskMasterState * data =
      (aimdk_msgs__msg__TaskMasterState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__TaskMasterState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__TaskMasterState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__TaskMasterState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
