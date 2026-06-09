// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
h2x__msg__BatteryState__init(h2x__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // battery_percentage
  // battery_state
  // battery_low_warning
  // error_code
  // warning_code
  return true;
}

void
h2x__msg__BatteryState__fini(h2x__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // battery_percentage
  // battery_state
  // battery_low_warning
  // error_code
  // warning_code
}

bool
h2x__msg__BatteryState__are_equal(const h2x__msg__BatteryState * lhs, const h2x__msg__BatteryState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // battery_state
  if (lhs->battery_state != rhs->battery_state) {
    return false;
  }
  // battery_low_warning
  if (lhs->battery_low_warning != rhs->battery_low_warning) {
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
  return true;
}

bool
h2x__msg__BatteryState__copy(
  const h2x__msg__BatteryState * input,
  h2x__msg__BatteryState * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // battery_state
  output->battery_state = input->battery_state;
  // battery_low_warning
  output->battery_low_warning = input->battery_low_warning;
  // error_code
  output->error_code = input->error_code;
  // warning_code
  output->warning_code = input->warning_code;
  return true;
}

h2x__msg__BatteryState *
h2x__msg__BatteryState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__BatteryState * msg = (h2x__msg__BatteryState *)allocator.allocate(sizeof(h2x__msg__BatteryState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__BatteryState));
  bool success = h2x__msg__BatteryState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__BatteryState__destroy(h2x__msg__BatteryState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__BatteryState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__BatteryState__Sequence__init(h2x__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__BatteryState * data = NULL;

  if (size) {
    data = (h2x__msg__BatteryState *)allocator.zero_allocate(size, sizeof(h2x__msg__BatteryState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__BatteryState__fini(&data[i - 1]);
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
h2x__msg__BatteryState__Sequence__fini(h2x__msg__BatteryState__Sequence * array)
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
      h2x__msg__BatteryState__fini(&array->data[i]);
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

h2x__msg__BatteryState__Sequence *
h2x__msg__BatteryState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__BatteryState__Sequence * array = (h2x__msg__BatteryState__Sequence *)allocator.allocate(sizeof(h2x__msg__BatteryState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__BatteryState__Sequence__destroy(h2x__msg__BatteryState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__BatteryState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__BatteryState__Sequence__are_equal(const h2x__msg__BatteryState__Sequence * lhs, const h2x__msg__BatteryState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__BatteryState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__BatteryState__Sequence__copy(
  const h2x__msg__BatteryState__Sequence * input,
  h2x__msg__BatteryState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__BatteryState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__BatteryState * data =
      (h2x__msg__BatteryState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__BatteryState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__BatteryState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__BatteryState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
