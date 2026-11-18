// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aimdk_msgs:msg/HdsEventRecord.idl
// generated code does not contain a copyright notice
#include "aimdk_msgs/msg/detail/hds_event_record__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `alert_code`
// Member `alert_location`
#include "rosidl_runtime_c/string_functions.h"

bool
aimdk_msgs__msg__HdsEventRecord__init(aimdk_msgs__msg__HdsEventRecord * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // diag_code
  // alert_code
  if (!rosidl_runtime_c__String__init(&msg->alert_code)) {
    aimdk_msgs__msg__HdsEventRecord__fini(msg);
    return false;
  }
  // alert_location
  if (!rosidl_runtime_c__String__init(&msg->alert_location)) {
    aimdk_msgs__msg__HdsEventRecord__fini(msg);
    return false;
  }
  // first_timestamp
  // last_timestamp
  // recover_timestamp
  // duration_ns
  // recovered
  return true;
}

void
aimdk_msgs__msg__HdsEventRecord__fini(aimdk_msgs__msg__HdsEventRecord * msg)
{
  if (!msg) {
    return;
  }
  // id
  // diag_code
  // alert_code
  rosidl_runtime_c__String__fini(&msg->alert_code);
  // alert_location
  rosidl_runtime_c__String__fini(&msg->alert_location);
  // first_timestamp
  // last_timestamp
  // recover_timestamp
  // duration_ns
  // recovered
}

bool
aimdk_msgs__msg__HdsEventRecord__are_equal(const aimdk_msgs__msg__HdsEventRecord * lhs, const aimdk_msgs__msg__HdsEventRecord * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // diag_code
  if (lhs->diag_code != rhs->diag_code) {
    return false;
  }
  // alert_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->alert_code), &(rhs->alert_code)))
  {
    return false;
  }
  // alert_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->alert_location), &(rhs->alert_location)))
  {
    return false;
  }
  // first_timestamp
  if (lhs->first_timestamp != rhs->first_timestamp) {
    return false;
  }
  // last_timestamp
  if (lhs->last_timestamp != rhs->last_timestamp) {
    return false;
  }
  // recover_timestamp
  if (lhs->recover_timestamp != rhs->recover_timestamp) {
    return false;
  }
  // duration_ns
  if (lhs->duration_ns != rhs->duration_ns) {
    return false;
  }
  // recovered
  if (lhs->recovered != rhs->recovered) {
    return false;
  }
  return true;
}

bool
aimdk_msgs__msg__HdsEventRecord__copy(
  const aimdk_msgs__msg__HdsEventRecord * input,
  aimdk_msgs__msg__HdsEventRecord * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // diag_code
  output->diag_code = input->diag_code;
  // alert_code
  if (!rosidl_runtime_c__String__copy(
      &(input->alert_code), &(output->alert_code)))
  {
    return false;
  }
  // alert_location
  if (!rosidl_runtime_c__String__copy(
      &(input->alert_location), &(output->alert_location)))
  {
    return false;
  }
  // first_timestamp
  output->first_timestamp = input->first_timestamp;
  // last_timestamp
  output->last_timestamp = input->last_timestamp;
  // recover_timestamp
  output->recover_timestamp = input->recover_timestamp;
  // duration_ns
  output->duration_ns = input->duration_ns;
  // recovered
  output->recovered = input->recovered;
  return true;
}

aimdk_msgs__msg__HdsEventRecord *
aimdk_msgs__msg__HdsEventRecord__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__HdsEventRecord * msg = (aimdk_msgs__msg__HdsEventRecord *)allocator.allocate(sizeof(aimdk_msgs__msg__HdsEventRecord), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aimdk_msgs__msg__HdsEventRecord));
  bool success = aimdk_msgs__msg__HdsEventRecord__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aimdk_msgs__msg__HdsEventRecord__destroy(aimdk_msgs__msg__HdsEventRecord * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aimdk_msgs__msg__HdsEventRecord__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aimdk_msgs__msg__HdsEventRecord__Sequence__init(aimdk_msgs__msg__HdsEventRecord__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__HdsEventRecord * data = NULL;

  if (size) {
    data = (aimdk_msgs__msg__HdsEventRecord *)allocator.zero_allocate(size, sizeof(aimdk_msgs__msg__HdsEventRecord), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aimdk_msgs__msg__HdsEventRecord__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aimdk_msgs__msg__HdsEventRecord__fini(&data[i - 1]);
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
aimdk_msgs__msg__HdsEventRecord__Sequence__fini(aimdk_msgs__msg__HdsEventRecord__Sequence * array)
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
      aimdk_msgs__msg__HdsEventRecord__fini(&array->data[i]);
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

aimdk_msgs__msg__HdsEventRecord__Sequence *
aimdk_msgs__msg__HdsEventRecord__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aimdk_msgs__msg__HdsEventRecord__Sequence * array = (aimdk_msgs__msg__HdsEventRecord__Sequence *)allocator.allocate(sizeof(aimdk_msgs__msg__HdsEventRecord__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aimdk_msgs__msg__HdsEventRecord__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aimdk_msgs__msg__HdsEventRecord__Sequence__destroy(aimdk_msgs__msg__HdsEventRecord__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aimdk_msgs__msg__HdsEventRecord__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aimdk_msgs__msg__HdsEventRecord__Sequence__are_equal(const aimdk_msgs__msg__HdsEventRecord__Sequence * lhs, const aimdk_msgs__msg__HdsEventRecord__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aimdk_msgs__msg__HdsEventRecord__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aimdk_msgs__msg__HdsEventRecord__Sequence__copy(
  const aimdk_msgs__msg__HdsEventRecord__Sequence * input,
  aimdk_msgs__msg__HdsEventRecord__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aimdk_msgs__msg__HdsEventRecord);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aimdk_msgs__msg__HdsEventRecord * data =
      (aimdk_msgs__msg__HdsEventRecord *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aimdk_msgs__msg__HdsEventRecord__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aimdk_msgs__msg__HdsEventRecord__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aimdk_msgs__msg__HdsEventRecord__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
