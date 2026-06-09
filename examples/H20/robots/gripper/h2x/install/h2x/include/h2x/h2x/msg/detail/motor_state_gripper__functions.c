// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/MotorStateGripper.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/motor_state_gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
h2x__msg__MotorStateGripper__init(h2x__msg__MotorStateGripper * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // operation_mode
  // arrive_signal
  // state
  // hold_state
  // q
  // dq
  // finger1_force
  // finger2_force
  // temperature
  // cur
  // error_code
  // warning_code
  // reserved
  return true;
}

void
h2x__msg__MotorStateGripper__fini(h2x__msg__MotorStateGripper * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // operation_mode
  // arrive_signal
  // state
  // hold_state
  // q
  // dq
  // finger1_force
  // finger2_force
  // temperature
  // cur
  // error_code
  // warning_code
  // reserved
}

bool
h2x__msg__MotorStateGripper__are_equal(const h2x__msg__MotorStateGripper * lhs, const h2x__msg__MotorStateGripper * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // operation_mode
  if (lhs->operation_mode != rhs->operation_mode) {
    return false;
  }
  // arrive_signal
  if (lhs->arrive_signal != rhs->arrive_signal) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // hold_state
  if (lhs->hold_state != rhs->hold_state) {
    return false;
  }
  // q
  if (lhs->q != rhs->q) {
    return false;
  }
  // dq
  if (lhs->dq != rhs->dq) {
    return false;
  }
  // finger1_force
  if (lhs->finger1_force != rhs->finger1_force) {
    return false;
  }
  // finger2_force
  if (lhs->finger2_force != rhs->finger2_force) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // cur
  if (lhs->cur != rhs->cur) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // warning_code
  if (lhs->warning_code != rhs->warning_code) {
    return false;
  }
  // reserved
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__MotorStateGripper__copy(
  const h2x__msg__MotorStateGripper * input,
  h2x__msg__MotorStateGripper * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // operation_mode
  output->operation_mode = input->operation_mode;
  // arrive_signal
  output->arrive_signal = input->arrive_signal;
  // state
  output->state = input->state;
  // hold_state
  output->hold_state = input->hold_state;
  // q
  output->q = input->q;
  // dq
  output->dq = input->dq;
  // finger1_force
  output->finger1_force = input->finger1_force;
  // finger2_force
  output->finger2_force = input->finger2_force;
  // temperature
  output->temperature = input->temperature;
  // cur
  output->cur = input->cur;
  // error_code
  output->error_code = input->error_code;
  // warning_code
  output->warning_code = input->warning_code;
  // reserved
  for (size_t i = 0; i < 4; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  return true;
}

h2x__msg__MotorStateGripper *
h2x__msg__MotorStateGripper__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorStateGripper * msg = (h2x__msg__MotorStateGripper *)allocator.allocate(sizeof(h2x__msg__MotorStateGripper), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__MotorStateGripper));
  bool success = h2x__msg__MotorStateGripper__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__MotorStateGripper__destroy(h2x__msg__MotorStateGripper * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__MotorStateGripper__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__MotorStateGripper__Sequence__init(h2x__msg__MotorStateGripper__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorStateGripper * data = NULL;

  if (size) {
    data = (h2x__msg__MotorStateGripper *)allocator.zero_allocate(size, sizeof(h2x__msg__MotorStateGripper), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__MotorStateGripper__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__MotorStateGripper__fini(&data[i - 1]);
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
h2x__msg__MotorStateGripper__Sequence__fini(h2x__msg__MotorStateGripper__Sequence * array)
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
      h2x__msg__MotorStateGripper__fini(&array->data[i]);
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

h2x__msg__MotorStateGripper__Sequence *
h2x__msg__MotorStateGripper__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorStateGripper__Sequence * array = (h2x__msg__MotorStateGripper__Sequence *)allocator.allocate(sizeof(h2x__msg__MotorStateGripper__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__MotorStateGripper__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__MotorStateGripper__Sequence__destroy(h2x__msg__MotorStateGripper__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__MotorStateGripper__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__MotorStateGripper__Sequence__are_equal(const h2x__msg__MotorStateGripper__Sequence * lhs, const h2x__msg__MotorStateGripper__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__MotorStateGripper__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__MotorStateGripper__Sequence__copy(
  const h2x__msg__MotorStateGripper__Sequence * input,
  h2x__msg__MotorStateGripper__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__MotorStateGripper);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__MotorStateGripper * data =
      (h2x__msg__MotorStateGripper *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__MotorStateGripper__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__MotorStateGripper__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__MotorStateGripper__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
