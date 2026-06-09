// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/LowCmd.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/low_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_cmd`
#include "h2x/msg/detail/motor_cmd__functions.h"

bool
h2x__msg__LowCmd__init(h2x__msg__LowCmd * msg)
{
  if (!msg) {
    return false;
  }
  // mode_pr
  // motor_cmd
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__MotorCmd__init(&msg->motor_cmd[i])) {
      h2x__msg__LowCmd__fini(msg);
      return false;
    }
  }
  // reserved
  // crc
  return true;
}

void
h2x__msg__LowCmd__fini(h2x__msg__LowCmd * msg)
{
  if (!msg) {
    return;
  }
  // mode_pr
  // motor_cmd
  for (size_t i = 0; i < 37; ++i) {
    h2x__msg__MotorCmd__fini(&msg->motor_cmd[i]);
  }
  // reserved
  // crc
}

bool
h2x__msg__LowCmd__are_equal(const h2x__msg__LowCmd * lhs, const h2x__msg__LowCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode_pr
  if (lhs->mode_pr != rhs->mode_pr) {
    return false;
  }
  // motor_cmd
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__MotorCmd__are_equal(
        &(lhs->motor_cmd[i]), &(rhs->motor_cmd[i])))
    {
      return false;
    }
  }
  // reserved
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  return true;
}

bool
h2x__msg__LowCmd__copy(
  const h2x__msg__LowCmd * input,
  h2x__msg__LowCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // mode_pr
  output->mode_pr = input->mode_pr;
  // motor_cmd
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__MotorCmd__copy(
        &(input->motor_cmd[i]), &(output->motor_cmd[i])))
    {
      return false;
    }
  }
  // reserved
  for (size_t i = 0; i < 4; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  // crc
  output->crc = input->crc;
  return true;
}

h2x__msg__LowCmd *
h2x__msg__LowCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LowCmd * msg = (h2x__msg__LowCmd *)allocator.allocate(sizeof(h2x__msg__LowCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__LowCmd));
  bool success = h2x__msg__LowCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__LowCmd__destroy(h2x__msg__LowCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__LowCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__LowCmd__Sequence__init(h2x__msg__LowCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LowCmd * data = NULL;

  if (size) {
    data = (h2x__msg__LowCmd *)allocator.zero_allocate(size, sizeof(h2x__msg__LowCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__LowCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__LowCmd__fini(&data[i - 1]);
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
h2x__msg__LowCmd__Sequence__fini(h2x__msg__LowCmd__Sequence * array)
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
      h2x__msg__LowCmd__fini(&array->data[i]);
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

h2x__msg__LowCmd__Sequence *
h2x__msg__LowCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LowCmd__Sequence * array = (h2x__msg__LowCmd__Sequence *)allocator.allocate(sizeof(h2x__msg__LowCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__LowCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__LowCmd__Sequence__destroy(h2x__msg__LowCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__LowCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__LowCmd__Sequence__are_equal(const h2x__msg__LowCmd__Sequence * lhs, const h2x__msg__LowCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__LowCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__LowCmd__Sequence__copy(
  const h2x__msg__LowCmd__Sequence * input,
  h2x__msg__LowCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__LowCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__LowCmd * data =
      (h2x__msg__LowCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__LowCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__LowCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__LowCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
