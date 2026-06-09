// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/MotorState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
h2x__msg__MotorState__init(h2x__msg__MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // operation_mode
  // q
  // dq
  // ddq
  // cur
  // tau_est
  // temperature
  // kp
  // kd
  // error_code
  // warning_code
  // reserved
  return true;
}

void
h2x__msg__MotorState__fini(h2x__msg__MotorState * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // operation_mode
  // q
  // dq
  // ddq
  // cur
  // tau_est
  // temperature
  // kp
  // kd
  // error_code
  // warning_code
  // reserved
}

bool
h2x__msg__MotorState__are_equal(const h2x__msg__MotorState * lhs, const h2x__msg__MotorState * rhs)
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
  // q
  if (lhs->q != rhs->q) {
    return false;
  }
  // dq
  if (lhs->dq != rhs->dq) {
    return false;
  }
  // ddq
  if (lhs->ddq != rhs->ddq) {
    return false;
  }
  // cur
  if (lhs->cur != rhs->cur) {
    return false;
  }
  // tau_est
  if (lhs->tau_est != rhs->tau_est) {
    return false;
  }
  // temperature
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->temperature[i] != rhs->temperature[i]) {
      return false;
    }
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
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
h2x__msg__MotorState__copy(
  const h2x__msg__MotorState * input,
  h2x__msg__MotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // operation_mode
  output->operation_mode = input->operation_mode;
  // q
  output->q = input->q;
  // dq
  output->dq = input->dq;
  // ddq
  output->ddq = input->ddq;
  // cur
  output->cur = input->cur;
  // tau_est
  output->tau_est = input->tau_est;
  // temperature
  for (size_t i = 0; i < 2; ++i) {
    output->temperature[i] = input->temperature[i];
  }
  // kp
  output->kp = input->kp;
  // kd
  output->kd = input->kd;
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

h2x__msg__MotorState *
h2x__msg__MotorState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorState * msg = (h2x__msg__MotorState *)allocator.allocate(sizeof(h2x__msg__MotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__MotorState));
  bool success = h2x__msg__MotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__MotorState__destroy(h2x__msg__MotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__MotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__MotorState__Sequence__init(h2x__msg__MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorState * data = NULL;

  if (size) {
    data = (h2x__msg__MotorState *)allocator.zero_allocate(size, sizeof(h2x__msg__MotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__MotorState__fini(&data[i - 1]);
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
h2x__msg__MotorState__Sequence__fini(h2x__msg__MotorState__Sequence * array)
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
      h2x__msg__MotorState__fini(&array->data[i]);
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

h2x__msg__MotorState__Sequence *
h2x__msg__MotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorState__Sequence * array = (h2x__msg__MotorState__Sequence *)allocator.allocate(sizeof(h2x__msg__MotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__MotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__MotorState__Sequence__destroy(h2x__msg__MotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__MotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__MotorState__Sequence__are_equal(const h2x__msg__MotorState__Sequence * lhs, const h2x__msg__MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__MotorState__Sequence__copy(
  const h2x__msg__MotorState__Sequence * input,
  h2x__msg__MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__MotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__MotorState * data =
      (h2x__msg__MotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__MotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__MotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
