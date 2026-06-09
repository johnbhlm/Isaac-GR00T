// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/LRCUState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/lrcu_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
h2x__msg__LRCUState__init(h2x__msg__LRCUState * msg)
{
  if (!msg) {
    return false;
  }
  // led_enable
  // led_mode
  // led_period_ms
  // led_r
  // led_g
  // led_b
  // crc
  return true;
}

void
h2x__msg__LRCUState__fini(h2x__msg__LRCUState * msg)
{
  if (!msg) {
    return;
  }
  // led_enable
  // led_mode
  // led_period_ms
  // led_r
  // led_g
  // led_b
  // crc
}

bool
h2x__msg__LRCUState__are_equal(const h2x__msg__LRCUState * lhs, const h2x__msg__LRCUState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_enable
  if (lhs->led_enable != rhs->led_enable) {
    return false;
  }
  // led_mode
  if (lhs->led_mode != rhs->led_mode) {
    return false;
  }
  // led_period_ms
  if (lhs->led_period_ms != rhs->led_period_ms) {
    return false;
  }
  // led_r
  if (lhs->led_r != rhs->led_r) {
    return false;
  }
  // led_g
  if (lhs->led_g != rhs->led_g) {
    return false;
  }
  // led_b
  if (lhs->led_b != rhs->led_b) {
    return false;
  }
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  return true;
}

bool
h2x__msg__LRCUState__copy(
  const h2x__msg__LRCUState * input,
  h2x__msg__LRCUState * output)
{
  if (!input || !output) {
    return false;
  }
  // led_enable
  output->led_enable = input->led_enable;
  // led_mode
  output->led_mode = input->led_mode;
  // led_period_ms
  output->led_period_ms = input->led_period_ms;
  // led_r
  output->led_r = input->led_r;
  // led_g
  output->led_g = input->led_g;
  // led_b
  output->led_b = input->led_b;
  // crc
  output->crc = input->crc;
  return true;
}

h2x__msg__LRCUState *
h2x__msg__LRCUState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LRCUState * msg = (h2x__msg__LRCUState *)allocator.allocate(sizeof(h2x__msg__LRCUState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__LRCUState));
  bool success = h2x__msg__LRCUState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__LRCUState__destroy(h2x__msg__LRCUState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__LRCUState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__LRCUState__Sequence__init(h2x__msg__LRCUState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LRCUState * data = NULL;

  if (size) {
    data = (h2x__msg__LRCUState *)allocator.zero_allocate(size, sizeof(h2x__msg__LRCUState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__LRCUState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__LRCUState__fini(&data[i - 1]);
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
h2x__msg__LRCUState__Sequence__fini(h2x__msg__LRCUState__Sequence * array)
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
      h2x__msg__LRCUState__fini(&array->data[i]);
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

h2x__msg__LRCUState__Sequence *
h2x__msg__LRCUState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LRCUState__Sequence * array = (h2x__msg__LRCUState__Sequence *)allocator.allocate(sizeof(h2x__msg__LRCUState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__LRCUState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__LRCUState__Sequence__destroy(h2x__msg__LRCUState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__LRCUState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__LRCUState__Sequence__are_equal(const h2x__msg__LRCUState__Sequence * lhs, const h2x__msg__LRCUState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__LRCUState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__LRCUState__Sequence__copy(
  const h2x__msg__LRCUState__Sequence * input,
  h2x__msg__LRCUState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__LRCUState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__LRCUState * data =
      (h2x__msg__LRCUState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__LRCUState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__LRCUState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__LRCUState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
