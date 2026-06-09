// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/DebugCDUState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/debug_cdu_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cdu_fireware_version`
// Member `pcu_firmware_version`
// Member `lrcu_firmware_version`
#include "rosidl_runtime_c/string_functions.h"

bool
h2x__msg__DebugCDUState__init(h2x__msg__DebugCDUState * msg)
{
  if (!msg) {
    return false;
  }
  // frame_counter
  // electrical_status_feedback_id
  // slave_online_status
  // cdu_fireware_version
  if (!rosidl_runtime_c__String__init(&msg->cdu_fireware_version)) {
    h2x__msg__DebugCDUState__fini(msg);
    return false;
  }
  // peripheral_status_feedback
  // emergency_stop_state
  // control_supply_state
  // power_supply_state
  // battery_voltage
  // motor_bus_voltage
  // dcdc_bus_voltage
  // voltage_24v
  // voltage_12v
  // motor_bus_current
  // current_24v
  // current_12v
  // pcu_firmware_version
  if (!rosidl_runtime_c__String__init(&msg->pcu_firmware_version)) {
    h2x__msg__DebugCDUState__fini(msg);
    return false;
  }
  // low_battery_warning
  // battery_warning_status_history_l2
  // battery_soc
  // battery_soh
  // nominal_battery_capacity
  // current_battery_capacity
  // total_battery_voltage
  // total_battery_current
  // average_battery_temperature
  // peak_battery_temperature
  // battery_warning_status_l1
  // battery_warning_status_l2
  // mosfet_status
  // battery_cycle_count
  // ntc_count
  // series_cell_count
  // current_control_source
  // led_mode
  // led_period
  // led_r
  // led_g
  // led_b
  // lrcu_firmware_version
  if (!rosidl_runtime_c__String__init(&msg->lrcu_firmware_version)) {
    h2x__msg__DebugCDUState__fini(msg);
    return false;
  }
  return true;
}

void
h2x__msg__DebugCDUState__fini(h2x__msg__DebugCDUState * msg)
{
  if (!msg) {
    return;
  }
  // frame_counter
  // electrical_status_feedback_id
  // slave_online_status
  // cdu_fireware_version
  rosidl_runtime_c__String__fini(&msg->cdu_fireware_version);
  // peripheral_status_feedback
  // emergency_stop_state
  // control_supply_state
  // power_supply_state
  // battery_voltage
  // motor_bus_voltage
  // dcdc_bus_voltage
  // voltage_24v
  // voltage_12v
  // motor_bus_current
  // current_24v
  // current_12v
  // pcu_firmware_version
  rosidl_runtime_c__String__fini(&msg->pcu_firmware_version);
  // low_battery_warning
  // battery_warning_status_history_l2
  // battery_soc
  // battery_soh
  // nominal_battery_capacity
  // current_battery_capacity
  // total_battery_voltage
  // total_battery_current
  // average_battery_temperature
  // peak_battery_temperature
  // battery_warning_status_l1
  // battery_warning_status_l2
  // mosfet_status
  // battery_cycle_count
  // ntc_count
  // series_cell_count
  // current_control_source
  // led_mode
  // led_period
  // led_r
  // led_g
  // led_b
  // lrcu_firmware_version
  rosidl_runtime_c__String__fini(&msg->lrcu_firmware_version);
}

bool
h2x__msg__DebugCDUState__are_equal(const h2x__msg__DebugCDUState * lhs, const h2x__msg__DebugCDUState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_counter
  if (lhs->frame_counter != rhs->frame_counter) {
    return false;
  }
  // electrical_status_feedback_id
  if (lhs->electrical_status_feedback_id != rhs->electrical_status_feedback_id) {
    return false;
  }
  // slave_online_status
  if (lhs->slave_online_status != rhs->slave_online_status) {
    return false;
  }
  // cdu_fireware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cdu_fireware_version), &(rhs->cdu_fireware_version)))
  {
    return false;
  }
  // peripheral_status_feedback
  if (lhs->peripheral_status_feedback != rhs->peripheral_status_feedback) {
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
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // motor_bus_voltage
  if (lhs->motor_bus_voltage != rhs->motor_bus_voltage) {
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
  // motor_bus_current
  if (lhs->motor_bus_current != rhs->motor_bus_current) {
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
  // pcu_firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pcu_firmware_version), &(rhs->pcu_firmware_version)))
  {
    return false;
  }
  // low_battery_warning
  if (lhs->low_battery_warning != rhs->low_battery_warning) {
    return false;
  }
  // battery_warning_status_history_l2
  if (lhs->battery_warning_status_history_l2 != rhs->battery_warning_status_history_l2) {
    return false;
  }
  // battery_soc
  if (lhs->battery_soc != rhs->battery_soc) {
    return false;
  }
  // battery_soh
  if (lhs->battery_soh != rhs->battery_soh) {
    return false;
  }
  // nominal_battery_capacity
  if (lhs->nominal_battery_capacity != rhs->nominal_battery_capacity) {
    return false;
  }
  // current_battery_capacity
  if (lhs->current_battery_capacity != rhs->current_battery_capacity) {
    return false;
  }
  // total_battery_voltage
  if (lhs->total_battery_voltage != rhs->total_battery_voltage) {
    return false;
  }
  // total_battery_current
  if (lhs->total_battery_current != rhs->total_battery_current) {
    return false;
  }
  // average_battery_temperature
  if (lhs->average_battery_temperature != rhs->average_battery_temperature) {
    return false;
  }
  // peak_battery_temperature
  if (lhs->peak_battery_temperature != rhs->peak_battery_temperature) {
    return false;
  }
  // battery_warning_status_l1
  if (lhs->battery_warning_status_l1 != rhs->battery_warning_status_l1) {
    return false;
  }
  // battery_warning_status_l2
  if (lhs->battery_warning_status_l2 != rhs->battery_warning_status_l2) {
    return false;
  }
  // mosfet_status
  if (lhs->mosfet_status != rhs->mosfet_status) {
    return false;
  }
  // battery_cycle_count
  if (lhs->battery_cycle_count != rhs->battery_cycle_count) {
    return false;
  }
  // ntc_count
  if (lhs->ntc_count != rhs->ntc_count) {
    return false;
  }
  // series_cell_count
  if (lhs->series_cell_count != rhs->series_cell_count) {
    return false;
  }
  // current_control_source
  if (lhs->current_control_source != rhs->current_control_source) {
    return false;
  }
  // led_mode
  if (lhs->led_mode != rhs->led_mode) {
    return false;
  }
  // led_period
  if (lhs->led_period != rhs->led_period) {
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
  // lrcu_firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lrcu_firmware_version), &(rhs->lrcu_firmware_version)))
  {
    return false;
  }
  return true;
}

bool
h2x__msg__DebugCDUState__copy(
  const h2x__msg__DebugCDUState * input,
  h2x__msg__DebugCDUState * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_counter
  output->frame_counter = input->frame_counter;
  // electrical_status_feedback_id
  output->electrical_status_feedback_id = input->electrical_status_feedback_id;
  // slave_online_status
  output->slave_online_status = input->slave_online_status;
  // cdu_fireware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->cdu_fireware_version), &(output->cdu_fireware_version)))
  {
    return false;
  }
  // peripheral_status_feedback
  output->peripheral_status_feedback = input->peripheral_status_feedback;
  // emergency_stop_state
  output->emergency_stop_state = input->emergency_stop_state;
  // control_supply_state
  output->control_supply_state = input->control_supply_state;
  // power_supply_state
  output->power_supply_state = input->power_supply_state;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // motor_bus_voltage
  output->motor_bus_voltage = input->motor_bus_voltage;
  // dcdc_bus_voltage
  output->dcdc_bus_voltage = input->dcdc_bus_voltage;
  // voltage_24v
  output->voltage_24v = input->voltage_24v;
  // voltage_12v
  output->voltage_12v = input->voltage_12v;
  // motor_bus_current
  output->motor_bus_current = input->motor_bus_current;
  // current_24v
  output->current_24v = input->current_24v;
  // current_12v
  output->current_12v = input->current_12v;
  // pcu_firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->pcu_firmware_version), &(output->pcu_firmware_version)))
  {
    return false;
  }
  // low_battery_warning
  output->low_battery_warning = input->low_battery_warning;
  // battery_warning_status_history_l2
  output->battery_warning_status_history_l2 = input->battery_warning_status_history_l2;
  // battery_soc
  output->battery_soc = input->battery_soc;
  // battery_soh
  output->battery_soh = input->battery_soh;
  // nominal_battery_capacity
  output->nominal_battery_capacity = input->nominal_battery_capacity;
  // current_battery_capacity
  output->current_battery_capacity = input->current_battery_capacity;
  // total_battery_voltage
  output->total_battery_voltage = input->total_battery_voltage;
  // total_battery_current
  output->total_battery_current = input->total_battery_current;
  // average_battery_temperature
  output->average_battery_temperature = input->average_battery_temperature;
  // peak_battery_temperature
  output->peak_battery_temperature = input->peak_battery_temperature;
  // battery_warning_status_l1
  output->battery_warning_status_l1 = input->battery_warning_status_l1;
  // battery_warning_status_l2
  output->battery_warning_status_l2 = input->battery_warning_status_l2;
  // mosfet_status
  output->mosfet_status = input->mosfet_status;
  // battery_cycle_count
  output->battery_cycle_count = input->battery_cycle_count;
  // ntc_count
  output->ntc_count = input->ntc_count;
  // series_cell_count
  output->series_cell_count = input->series_cell_count;
  // current_control_source
  output->current_control_source = input->current_control_source;
  // led_mode
  output->led_mode = input->led_mode;
  // led_period
  output->led_period = input->led_period;
  // led_r
  output->led_r = input->led_r;
  // led_g
  output->led_g = input->led_g;
  // led_b
  output->led_b = input->led_b;
  // lrcu_firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->lrcu_firmware_version), &(output->lrcu_firmware_version)))
  {
    return false;
  }
  return true;
}

h2x__msg__DebugCDUState *
h2x__msg__DebugCDUState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugCDUState * msg = (h2x__msg__DebugCDUState *)allocator.allocate(sizeof(h2x__msg__DebugCDUState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__DebugCDUState));
  bool success = h2x__msg__DebugCDUState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__DebugCDUState__destroy(h2x__msg__DebugCDUState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__DebugCDUState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__DebugCDUState__Sequence__init(h2x__msg__DebugCDUState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugCDUState * data = NULL;

  if (size) {
    data = (h2x__msg__DebugCDUState *)allocator.zero_allocate(size, sizeof(h2x__msg__DebugCDUState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__DebugCDUState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__DebugCDUState__fini(&data[i - 1]);
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
h2x__msg__DebugCDUState__Sequence__fini(h2x__msg__DebugCDUState__Sequence * array)
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
      h2x__msg__DebugCDUState__fini(&array->data[i]);
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

h2x__msg__DebugCDUState__Sequence *
h2x__msg__DebugCDUState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugCDUState__Sequence * array = (h2x__msg__DebugCDUState__Sequence *)allocator.allocate(sizeof(h2x__msg__DebugCDUState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__DebugCDUState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__DebugCDUState__Sequence__destroy(h2x__msg__DebugCDUState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__DebugCDUState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__DebugCDUState__Sequence__are_equal(const h2x__msg__DebugCDUState__Sequence * lhs, const h2x__msg__DebugCDUState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__DebugCDUState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__DebugCDUState__Sequence__copy(
  const h2x__msg__DebugCDUState__Sequence * input,
  h2x__msg__DebugCDUState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__DebugCDUState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__DebugCDUState * data =
      (h2x__msg__DebugCDUState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__DebugCDUState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__DebugCDUState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__DebugCDUState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
