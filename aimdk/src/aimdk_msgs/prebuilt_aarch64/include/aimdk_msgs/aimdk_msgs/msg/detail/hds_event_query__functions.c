// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/HdsEventQuery.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/hds_event_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `diag_codes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `alert_codes`
// Member `alert_locations`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__HdsEventQuery__init(aimdk_msgs__msg__HdsEventQuery * msg)
{
  if (!msg) {
    return false;
  }
  // start_time
  // end_time
  // diag_codes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->diag_codes, 0)) {
    aimdk_msgs__msg__HdsEventQuery__fini(msg);
    return false;
  }
  // alert_codes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->alert_codes, 0)) {
    aimdk_msgs__msg__HdsEventQuery__fini(msg);
    return false;
  }
  // alert_locations
  if (!rosidl_runtime_c__String__Sequence__init(&msg->alert_locations, 0)) {
    aimdk_msgs__msg__HdsEventQuery__fini(msg);
    return false;
  }
  // state
  // order_desc
  // offset
  // limit
  return true;
}

void
aimdk_msgs__msg__HdsEventQuery__fini(aimdk_msgs__msg__HdsEventQuery * msg)
{
  if (!msg) {
    return;
  }
  // start_time
  // end_time
  // diag_codes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->diag_codes);
  // alert_codes
  rosidl_runtime_c__String__Sequence__fini(&msg->alert_codes);
  // alert_locations
  rosidl_runtime_c__String__Sequence__fini(&msg->alert_locations);
  // state
  // order_desc
  // offset
  // limit
}

bool
aimdk_msgs__msg__HdsEventQuery__are_equal(const aimdk_msgs__msg__HdsEventQuery * lhs, const aimdk_msgs__msg__HdsEventQuery * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_time
  if (lhs->start_time != rhs->start_time) {
    return false;
  }
  // end_time
  if (lhs->end_time != rhs->end_time) {
    return false;
  }
  // diag_codes
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->diag_codes), &(rhs->diag_codes)))
  {
    return false;
  }
  // alert_codes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->alert_codes), &(rhs->alert_codes)))
  {
    return false;
  }
  // alert_locations
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->alert_locations), &(rhs->alert_locations)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // order_desc
  if (lhs->order_desc != rhs->order_desc) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // limit
  if (lhs->limit != rhs->limit) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__HdsEventQuery__copy(
  const aimdk_msgs__msg__HdsEventQuery * input,
  aimdk_msgs__msg__HdsEventQuery * output)
{
  if (!input || !output) {
    return false;
  }
  // start_time
  output->start_time = input->start_time;
  // end_time
  output->end_time = input->end_time;
  // diag_codes
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->diag_codes), &(output->diag_codes)))
  {
    return false;
  }
  // alert_codes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->alert_codes), &(output->alert_codes)))
  {
    return false;
  }
  // alert_locations
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->alert_locations), &(output->alert_locations)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // order_desc
  output->order_desc = input->order_desc;
  // offset
  output->offset = input->offset;
  // limit
  output->limit = input->limit;
  return true;
}

aimdk_msgs__msg__HdsEventQuery *
aimdk_msgs__msg__HdsEventQuery__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__HdsEventQuery * msg = (aimdk_msgs__msg__HdsEventQuery *)allocator.allocate(sizeof(aimdk_msgs__msg__HdsEventQuery), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__HdsEventQuery));
  bool success = aimdk_msgs__msg__HdsEventQuery__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__HdsEventQuery__destroy(aimdk_msgs__msg__HdsEventQuery * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__HdsEventQuery__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__HdsEventQuery__Sequence__init(aimdk_msgs__msg__HdsEventQuery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__HdsEventQuery * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__HdsEventQuery *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__HdsEventQuery), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__HdsEventQuery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__HdsEventQuery__fini(&data[i - 1]);
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
aimdk_msgs__msg__HdsEventQuery__Sequence__fini(aimdk_msgs__msg__HdsEventQuery__Sequence * array)
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
      aimdk_msgs__msg__HdsEventQuery__fini(&array->data[i]);
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

aimdk_msgs__msg__HdsEventQuery__Sequence *
aimdk_msgs__msg__HdsEventQuery__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__HdsEventQuery__Sequence * array = (aimdk_msgs__msg__HdsEventQuery__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__HdsEventQuery__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__HdsEventQuery__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__HdsEventQuery__Sequence__destroy(aimdk_msgs__msg__HdsEventQuery__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__HdsEventQuery__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__HdsEventQuery__Sequence__are_equal(const aimdk_msgs__msg__HdsEventQuery__Sequence * lhs, const aimdk_msgs__msg__HdsEventQuery__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__HdsEventQuery__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__HdsEventQuery__Sequence__copy(
  const aimdk_msgs__msg__HdsEventQuery__Sequence * input,
  aimdk_msgs__msg__HdsEventQuery__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__HdsEventQuery);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__HdsEventQuery * data =
      (aimdk_msgs__msg__HdsEventQuery *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__HdsEventQuery__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__HdsEventQuery__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__HdsEventQuery__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
