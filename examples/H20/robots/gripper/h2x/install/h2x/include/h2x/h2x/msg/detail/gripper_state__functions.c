// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/GripperState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/gripper_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_state`
#include "h2x/msg/detail/motor_state_gripper__functions.h"

bool
h2x__msg__GripperState__init(h2x__msg__GripperState * msg)
{
  if (!msg) {
    return false;
  }
  // tick
  // motor_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__MotorStateGripper__init(&msg->motor_state[i])) {
      h2x__msg__GripperState__fini(msg);
      return false;
    }
  }
  // is_data_valid
  // crc
  return true;
}

void
h2x__msg__GripperState__fini(h2x__msg__GripperState * msg)
{
  if (!msg) {
    return;
  }
  // tick
  // motor_state
  for (size_t i = 0; i < 2; ++i) {
    h2x__msg__MotorStateGripper__fini(&msg->motor_state[i]);
  }
  // is_data_valid
  // crc
}

bool
h2x__msg__GripperState__are_equal(const h2x__msg__GripperState * lhs, const h2x__msg__GripperState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tick
  if (lhs->tick != rhs->tick) {
    return false;
  }
  // motor_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__MotorStateGripper__are_equal(
        &(lhs->motor_state[i]), &(rhs->motor_state[i])))
    {
      return false;
    }
  }
  // is_data_valid
  if (lhs->is_data_valid != rhs->is_data_valid) {
    return false;
  }
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  return true;
}

bool
h2x__msg__GripperState__copy(
  const h2x__msg__GripperState * input,
  h2x__msg__GripperState * output)
{
  if (!input || !output) {
    return false;
  }
  // tick
  output->tick = input->tick;
  // motor_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__MotorStateGripper__copy(
        &(input->motor_state[i]), &(output->motor_state[i])))
    {
      return false;
    }
  }
  // is_data_valid
  output->is_data_valid = input->is_data_valid;
  // crc
  output->crc = input->crc;
  return true;
}

h2x__msg__GripperState *
h2x__msg__GripperState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__GripperState * msg = (h2x__msg__GripperState *)allocator.allocate(sizeof(h2x__msg__GripperState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__GripperState));
  bool success = h2x__msg__GripperState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__GripperState__destroy(h2x__msg__GripperState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__GripperState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__GripperState__Sequence__init(h2x__msg__GripperState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__GripperState * data = NULL;

  if (size) {
    data = (h2x__msg__GripperState *)allocator.zero_allocate(size, sizeof(h2x__msg__GripperState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__GripperState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__GripperState__fini(&data[i - 1]);
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
h2x__msg__GripperState__Sequence__fini(h2x__msg__GripperState__Sequence * array)
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
      h2x__msg__GripperState__fini(&array->data[i]);
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

h2x__msg__GripperState__Sequence *
h2x__msg__GripperState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__GripperState__Sequence * array = (h2x__msg__GripperState__Sequence *)allocator.allocate(sizeof(h2x__msg__GripperState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__GripperState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__GripperState__Sequence__destroy(h2x__msg__GripperState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__GripperState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__GripperState__Sequence__are_equal(const h2x__msg__GripperState__Sequence * lhs, const h2x__msg__GripperState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__GripperState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__GripperState__Sequence__copy(
  const h2x__msg__GripperState__Sequence * input,
  h2x__msg__GripperState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__GripperState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__GripperState * data =
      (h2x__msg__GripperState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__GripperState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__GripperState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__GripperState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
