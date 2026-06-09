// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/motor_cmd_gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
h2x__msg__MotorCmdGripper__init(h2x__msg__MotorCmdGripper * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // operation_mode
  // q
  // dq_percentage
  // acc_percentage
  // finger_force
  // reserved
  return true;
}

void
h2x__msg__MotorCmdGripper__fini(h2x__msg__MotorCmdGripper * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // operation_mode
  // q
  // dq_percentage
  // acc_percentage
  // finger_force
  // reserved
}

bool
h2x__msg__MotorCmdGripper__are_equal(const h2x__msg__MotorCmdGripper * lhs, const h2x__msg__MotorCmdGripper * rhs)
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
  // dq_percentage
  if (lhs->dq_percentage != rhs->dq_percentage) {
    return false;
  }
  // acc_percentage
  if (lhs->acc_percentage != rhs->acc_percentage) {
    return false;
  }
  // finger_force
  if (lhs->finger_force != rhs->finger_force) {
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
h2x__msg__MotorCmdGripper__copy(
  const h2x__msg__MotorCmdGripper * input,
  h2x__msg__MotorCmdGripper * output)
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
  // dq_percentage
  output->dq_percentage = input->dq_percentage;
  // acc_percentage
  output->acc_percentage = input->acc_percentage;
  // finger_force
  output->finger_force = input->finger_force;
  // reserved
  for (size_t i = 0; i < 4; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  return true;
}

h2x__msg__MotorCmdGripper *
h2x__msg__MotorCmdGripper__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorCmdGripper * msg = (h2x__msg__MotorCmdGripper *)allocator.allocate(sizeof(h2x__msg__MotorCmdGripper), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__MotorCmdGripper));
  bool success = h2x__msg__MotorCmdGripper__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__MotorCmdGripper__destroy(h2x__msg__MotorCmdGripper * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__MotorCmdGripper__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__MotorCmdGripper__Sequence__init(h2x__msg__MotorCmdGripper__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorCmdGripper * data = NULL;

  if (size) {
    data = (h2x__msg__MotorCmdGripper *)allocator.zero_allocate(size, sizeof(h2x__msg__MotorCmdGripper), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__MotorCmdGripper__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__MotorCmdGripper__fini(&data[i - 1]);
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
h2x__msg__MotorCmdGripper__Sequence__fini(h2x__msg__MotorCmdGripper__Sequence * array)
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
      h2x__msg__MotorCmdGripper__fini(&array->data[i]);
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

h2x__msg__MotorCmdGripper__Sequence *
h2x__msg__MotorCmdGripper__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__MotorCmdGripper__Sequence * array = (h2x__msg__MotorCmdGripper__Sequence *)allocator.allocate(sizeof(h2x__msg__MotorCmdGripper__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__MotorCmdGripper__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__MotorCmdGripper__Sequence__destroy(h2x__msg__MotorCmdGripper__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__MotorCmdGripper__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__MotorCmdGripper__Sequence__are_equal(const h2x__msg__MotorCmdGripper__Sequence * lhs, const h2x__msg__MotorCmdGripper__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__MotorCmdGripper__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__MotorCmdGripper__Sequence__copy(
  const h2x__msg__MotorCmdGripper__Sequence * input,
  h2x__msg__MotorCmdGripper__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__MotorCmdGripper);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__MotorCmdGripper * data =
      (h2x__msg__MotorCmdGripper *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__MotorCmdGripper__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__MotorCmdGripper__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__MotorCmdGripper__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
