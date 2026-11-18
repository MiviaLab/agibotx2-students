// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/PncTaskResponse.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/pnc_task_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/detail/message_header__functions.h"

bool
aimdk_msgs__msg__PncTaskResponse__init(aimdk_msgs__msg__PncTaskResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!aimdk_msgs__msg__MessageHeader__init(&msg->header)) {
    aimdk_msgs__msg__PncTaskResponse__fini(msg);
    return false;
  }
  // task_type
  // task_id
  // map_id
  // task_status
  // reserve_info
  return true;
}

void
aimdk_msgs__msg__PncTaskResponse__fini(aimdk_msgs__msg__PncTaskResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  aimdk_msgs__msg__MessageHeader__fini(&msg->header);
  // task_type
  // task_id
  // map_id
  // task_status
  // reserve_info
}

bool
aimdk_msgs__msg__PncTaskResponse__are_equal(const aimdk_msgs__msg__PncTaskResponse * lhs, const aimdk_msgs__msg__PncTaskResponse * rhs)
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
  // task_id
  if (lhs->task_id != rhs->task_id) {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // task_status
  if (lhs->task_status != rhs->task_status) {
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
aimdk_msgs__msg__PncTaskResponse__copy(
  const aimdk_msgs__msg__PncTaskResponse * input,
  aimdk_msgs__msg__PncTaskResponse * output)
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
  // task_id
  output->task_id = input->task_id;
  // map_id
  output->map_id = input->map_id;
  // task_status
  output->task_status = input->task_status;
  // reserve_info
  for (size_t i = 0; i < 64; ++i) {
    output->reserve_info[i] = input->reserve_info[i];
  }
  return true;
}

aimdk_msgs__msg__PncTaskResponse *
aimdk_msgs__msg__PncTaskResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PncTaskResponse * msg = (aimdk_msgs__msg__PncTaskResponse *)allocator.allocate(sizeof(aimdk_msgs__msg__PncTaskResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__PncTaskResponse));
  bool success = aimdk_msgs__msg__PncTaskResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__PncTaskResponse__destroy(aimdk_msgs__msg__PncTaskResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__PncTaskResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__PncTaskResponse__Sequence__init(aimdk_msgs__msg__PncTaskResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PncTaskResponse * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__PncTaskResponse *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__PncTaskResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__PncTaskResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__PncTaskResponse__fini(&data[i - 1]);
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
aimdk_msgs__msg__PncTaskResponse__Sequence__fini(aimdk_msgs__msg__PncTaskResponse__Sequence * array)
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
      aimdk_msgs__msg__PncTaskResponse__fini(&array->data[i]);
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

aimdk_msgs__msg__PncTaskResponse__Sequence *
aimdk_msgs__msg__PncTaskResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__PncTaskResponse__Sequence * array = (aimdk_msgs__msg__PncTaskResponse__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__PncTaskResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__PncTaskResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__PncTaskResponse__Sequence__destroy(aimdk_msgs__msg__PncTaskResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__PncTaskResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__PncTaskResponse__Sequence__are_equal(const aimdk_msgs__msg__PncTaskResponse__Sequence * lhs, const aimdk_msgs__msg__PncTaskResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__PncTaskResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__PncTaskResponse__Sequence__copy(
  const aimdk_msgs__msg__PncTaskResponse__Sequence * input,
  aimdk_msgs__msg__PncTaskResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__PncTaskResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__PncTaskResponse * data =
      (aimdk_msgs__msg__PncTaskResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__PncTaskResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__PncTaskResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__PncTaskResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
