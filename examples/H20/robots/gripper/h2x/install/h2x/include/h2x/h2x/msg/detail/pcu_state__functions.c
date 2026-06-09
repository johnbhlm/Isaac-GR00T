// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/PCUState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/pcu_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
h2x__msg__PCUState__init(h2x__msg__PCUState * msg)
{
  if (!msg) {
    return false;
  }
  // emergency_stop_state
  // control_supply_state
  // power_supply_state
  // pcu_error_code
  // pcu_warning_code
  // battery_voltage
  // motor_bus_voltage
  // motor_bus_current
  // dcdc_bus_voltage
  // voltage_24v
  // voltage_12v
  // current_24v
  // current_12v
  return true;
}

void
h2x__msg__PCUState__fini(h2x__msg__PCUState * msg)
{
  if (!msg) {
    return;
  }
  // emergency_stop_state
  // control_supply_state
  // power_supply_state
  // pcu_error_code
  // pcu_warning_code
  // battery_voltage
  // motor_bus_voltage
  // motor_bus_current
  // dcdc_bus_voltage
  // voltage_24v
  // voltage_12v
  // current_24v
  // current_12v
}

bool
h2x__msg__PCUState__are_equal(const h2x__msg__PCUState * lhs, const h2x__msg__PCUState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // emergency_stop_state
  if (lhs->emergency_stop_state != rhs->emergency_stop_state) {
    return false;
  }
  // control_supply_state
  if (lhs->control_supply_state != rhs->control_supply_state) {
    return false;
  }
  // power_supply_state
  if (lhs->power_supply_state != rhs->power_supply_state) {
    return false;
  }
  // pcu_error_code
  if (lhs->pcu_error_code != rhs->pcu_error_code) {
    return false;
  }
  // pcu_warning_code
  if (lhs->pcu_warning_code != rhs->pcu_warning_code) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // motor_bus_voltage
  if (lhs->motor_bus_voltage != rhs->motor_bus_voltage) {
    return false;
  }
  // motor_bus_current
  if (lhs->motor_bus_current != rhs->motor_bus_current) {
    return false;
  }
  // dcdc_bus_voltage
  if (lhs->dcdc_bus_voltage != rhs->dcdc_bus_voltage) {
    return false;
  }
  // voltage_24v
  if (lhs->voltage_24v != rhs->voltage_24v) {
    return false;
  }
  // voltage_12v
  if (lhs->voltage_12v != rhs->voltage_12v) {
    return false;
  }
  // current_24v
  if (lhs->current_24v != rhs->current_24v) {
    return false;
  }
  // current_12v
  if (lhs->current_12v != rhs->current_12v) {
    return false;
  }
  return true;
}

bool
h2x__msg__PCUState__copy(
  const h2x__msg__PCUState * input,
  h2x__msg__PCUState * output)
{
  if (!input || !output) {
    return false;
  }
  // emergency_stop_state
  output->emergency_stop_state = input->emergency_stop_state;
  // control_supply_state
  output->control_supply_state = input->control_supply_state;
  // power_supply_state
  output->power_supply_state = input->power_supply_state;
  // pcu_error_code
  output->pcu_error_code = input->pcu_error_code;
  // pcu_warning_code
  output->pcu_warning_code = input->pcu_warning_code;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // motor_bus_voltage
  output->motor_bus_voltage = input->motor_bus_voltage;
  // motor_bus_current
  output->motor_bus_current = input->motor_bus_current;
  // dcdc_bus_voltage
  output->dcdc_bus_voltage = input->dcdc_bus_voltage;
  // voltage_24v
  output->voltage_24v = input->voltage_24v;
  // voltage_12v
  output->voltage_12v = input->voltage_12v;
  // current_24v
  output->current_24v = input->current_24v;
  // current_12v
  output->current_12v = input->current_12v;
  return true;
}

h2x__msg__PCUState *
h2x__msg__PCUState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__PCUState * msg = (h2x__msg__PCUState *)allocator.allocate(sizeof(h2x__msg__PCUState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__PCUState));
  bool success = h2x__msg__PCUState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__PCUState__destroy(h2x__msg__PCUState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__PCUState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__PCUState__Sequence__init(h2x__msg__PCUState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__PCUState * data = NULL;

  if (size) {
    data = (h2x__msg__PCUState *)allocator.zero_allocate(size, sizeof(h2x__msg__PCUState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__PCUState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__PCUState__fini(&data[i - 1]);
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
h2x__msg__PCUState__Sequence__fini(h2x__msg__PCUState__Sequence * array)
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
      h2x__msg__PCUState__fini(&array->data[i]);
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

h2x__msg__PCUState__Sequence *
h2x__msg__PCUState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__PCUState__Sequence * array = (h2x__msg__PCUState__Sequence *)allocator.allocate(sizeof(h2x__msg__PCUState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__PCUState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__PCUState__Sequence__destroy(h2x__msg__PCUState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__PCUState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__PCUState__Sequence__are_equal(const h2x__msg__PCUState__Sequence * lhs, const h2x__msg__PCUState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__PCUState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__PCUState__Sequence__copy(
  const h2x__msg__PCUState__Sequence * input,
  h2x__msg__PCUState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__PCUState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__PCUState * data =
      (h2x__msg__PCUState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__PCUState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__PCUState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__PCUState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
