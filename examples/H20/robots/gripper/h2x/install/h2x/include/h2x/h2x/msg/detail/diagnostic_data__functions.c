// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/DiagnosticData.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/diagnostic_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `debug_motor_state`
#include "h2x/msg/detail/debug_motor_state__functions.h"

bool
h2x__msg__DiagnosticData__init(h2x__msg__DiagnosticData * msg)
{
  if (!msg) {
    return false;
  }
  // control_word
  // status_word
  // error_register
  // mode_of_operation
  // mode_display
  // debug_motor_state
  if (!h2x__msg__DebugMotorState__init(&msg->debug_motor_state)) {
    h2x__msg__DiagnosticData__fini(msg);
    return false;
  }
  return true;
}

void
h2x__msg__DiagnosticData__fini(h2x__msg__DiagnosticData * msg)
{
  if (!msg) {
    return;
  }
  // control_word
  // status_word
  // error_register
  // mode_of_operation
  // mode_display
  // debug_motor_state
  h2x__msg__DebugMotorState__fini(&msg->debug_motor_state);
}

bool
h2x__msg__DiagnosticData__are_equal(const h2x__msg__DiagnosticData * lhs, const h2x__msg__DiagnosticData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // control_word
  if (lhs->control_word != rhs->control_word) {
    return false;
  }
  // status_word
  if (lhs->status_word != rhs->status_word) {
    return false;
  }
  // error_register
  if (lhs->error_register != rhs->error_register) {
    return false;
  }
  // mode_of_operation
  if (lhs->mode_of_operation != rhs->mode_of_operation) {
    return false;
  }
  // mode_display
  if (lhs->mode_display != rhs->mode_display) {
    return false;
  }
  // debug_motor_state
  if (!h2x__msg__DebugMotorState__are_equal(
      &(lhs->debug_motor_state), &(rhs->debug_motor_state)))
  {
    return false;
  }
  return true;
}

bool
h2x__msg__DiagnosticData__copy(
  const h2x__msg__DiagnosticData * input,
  h2x__msg__DiagnosticData * output)
{
  if (!input || !output) {
    return false;
  }
  // control_word
  output->control_word = input->control_word;
  // status_word
  output->status_word = input->status_word;
  // error_register
  output->error_register = input->error_register;
  // mode_of_operation
  output->mode_of_operation = input->mode_of_operation;
  // mode_display
  output->mode_display = input->mode_display;
  // debug_motor_state
  if (!h2x__msg__DebugMotorState__copy(
      &(input->debug_motor_state), &(output->debug_motor_state)))
  {
    return false;
  }
  return true;
}

h2x__msg__DiagnosticData *
h2x__msg__DiagnosticData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DiagnosticData * msg = (h2x__msg__DiagnosticData *)allocator.allocate(sizeof(h2x__msg__DiagnosticData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__DiagnosticData));
  bool success = h2x__msg__DiagnosticData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__DiagnosticData__destroy(h2x__msg__DiagnosticData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__DiagnosticData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__DiagnosticData__Sequence__init(h2x__msg__DiagnosticData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DiagnosticData * data = NULL;

  if (size) {
    data = (h2x__msg__DiagnosticData *)allocator.zero_allocate(size, sizeof(h2x__msg__DiagnosticData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__DiagnosticData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__DiagnosticData__fini(&data[i - 1]);
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
h2x__msg__DiagnosticData__Sequence__fini(h2x__msg__DiagnosticData__Sequence * array)
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
      h2x__msg__DiagnosticData__fini(&array->data[i]);
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

h2x__msg__DiagnosticData__Sequence *
h2x__msg__DiagnosticData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DiagnosticData__Sequence * array = (h2x__msg__DiagnosticData__Sequence *)allocator.allocate(sizeof(h2x__msg__DiagnosticData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__DiagnosticData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__DiagnosticData__Sequence__destroy(h2x__msg__DiagnosticData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__DiagnosticData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__DiagnosticData__Sequence__are_equal(const h2x__msg__DiagnosticData__Sequence * lhs, const h2x__msg__DiagnosticData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__DiagnosticData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__DiagnosticData__Sequence__copy(
  const h2x__msg__DiagnosticData__Sequence * input,
  h2x__msg__DiagnosticData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__DiagnosticData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__DiagnosticData * data =
      (h2x__msg__DiagnosticData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__DiagnosticData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__DiagnosticData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__DiagnosticData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
