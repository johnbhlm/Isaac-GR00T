// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/LowState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/low_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `imu_state`
#include "h2x/msg/detail/imu_state__functions.h"
// Member `motor_state`
#include "h2x/msg/detail/motor_state__functions.h"
// Member `battery_info`
#include "h2x/msg/detail/battery_state__functions.h"
// Member `pcu_state`
#include "h2x/msg/detail/pcu_state__functions.h"
// Member `cdu_state`
#include "h2x/msg/detail/cdu_state__functions.h"

bool
h2x__msg__LowState__init(h2x__msg__LowState * msg)
{
  if (!msg) {
    return false;
  }
  // version
  // mode_pr
  // tick
  // imu_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__IMUState__init(&msg->imu_state[i])) {
      h2x__msg__LowState__fini(msg);
      return false;
    }
  }
  // motor_state
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__MotorState__init(&msg->motor_state[i])) {
      h2x__msg__LowState__fini(msg);
      return false;
    }
  }
  // has_battery_info
  // battery_info
  if (!h2x__msg__BatteryState__init(&msg->battery_info)) {
    h2x__msg__LowState__fini(msg);
    return false;
  }
  // ground_count
  // ground_signal
  // time_seconds
  // is_pcu_valid
  // pcu_state
  if (!h2x__msg__PCUState__init(&msg->pcu_state)) {
    h2x__msg__LowState__fini(msg);
    return false;
  }
  // is_cdu_valid
  // cdu_state
  if (!h2x__msg__CDUState__init(&msg->cdu_state)) {
    h2x__msg__LowState__fini(msg);
    return false;
  }
  // is_data_valid
  // error_code
  // warning_code
  // reserved
  // crc
  return true;
}

void
h2x__msg__LowState__fini(h2x__msg__LowState * msg)
{
  if (!msg) {
    return;
  }
  // version
  // mode_pr
  // tick
  // imu_state
  for (size_t i = 0; i < 2; ++i) {
    h2x__msg__IMUState__fini(&msg->imu_state[i]);
  }
  // motor_state
  for (size_t i = 0; i < 37; ++i) {
    h2x__msg__MotorState__fini(&msg->motor_state[i]);
  }
  // has_battery_info
  // battery_info
  h2x__msg__BatteryState__fini(&msg->battery_info);
  // ground_count
  // ground_signal
  // time_seconds
  // is_pcu_valid
  // pcu_state
  h2x__msg__PCUState__fini(&msg->pcu_state);
  // is_cdu_valid
  // cdu_state
  h2x__msg__CDUState__fini(&msg->cdu_state);
  // is_data_valid
  // error_code
  // warning_code
  // reserved
  // crc
}

bool
h2x__msg__LowState__are_equal(const h2x__msg__LowState * lhs, const h2x__msg__LowState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // version
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->version[i] != rhs->version[i]) {
      return false;
    }
  }
  // mode_pr
  if (lhs->mode_pr != rhs->mode_pr) {
    return false;
  }
  // tick
  if (lhs->tick != rhs->tick) {
    return false;
  }
  // imu_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__IMUState__are_equal(
        &(lhs->imu_state[i]), &(rhs->imu_state[i])))
    {
      return false;
    }
  }
  // motor_state
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__MotorState__are_equal(
        &(lhs->motor_state[i]), &(rhs->motor_state[i])))
    {
      return false;
    }
  }
  // has_battery_info
  if (lhs->has_battery_info != rhs->has_battery_info) {
    return false;
  }
  // battery_info
  if (!h2x__msg__BatteryState__are_equal(
      &(lhs->battery_info), &(rhs->battery_info)))
  {
    return false;
  }
  // ground_count
  if (lhs->ground_count != rhs->ground_count) {
    return false;
  }
  // ground_signal
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->ground_signal[i] != rhs->ground_signal[i]) {
      return false;
    }
  }
  // time_seconds
  if (lhs->time_seconds != rhs->time_seconds) {
    return false;
  }
  // is_pcu_valid
  if (lhs->is_pcu_valid != rhs->is_pcu_valid) {
    return false;
  }
  // pcu_state
  if (!h2x__msg__PCUState__are_equal(
      &(lhs->pcu_state), &(rhs->pcu_state)))
  {
    return false;
  }
  // is_cdu_valid
  if (lhs->is_cdu_valid != rhs->is_cdu_valid) {
    return false;
  }
  // cdu_state
  if (!h2x__msg__CDUState__are_equal(
      &(lhs->cdu_state), &(rhs->cdu_state)))
  {
    return false;
  }
  // is_data_valid
  if (lhs->is_data_valid != rhs->is_data_valid) {
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
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  return true;
}

bool
h2x__msg__LowState__copy(
  const h2x__msg__LowState * input,
  h2x__msg__LowState * output)
{
  if (!input || !output) {
    return false;
  }
  // version
  for (size_t i = 0; i < 2; ++i) {
    output->version[i] = input->version[i];
  }
  // mode_pr
  output->mode_pr = input->mode_pr;
  // tick
  output->tick = input->tick;
  // imu_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__IMUState__copy(
        &(input->imu_state[i]), &(output->imu_state[i])))
    {
      return false;
    }
  }
  // motor_state
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__MotorState__copy(
        &(input->motor_state[i]), &(output->motor_state[i])))
    {
      return false;
    }
  }
  // has_battery_info
  output->has_battery_info = input->has_battery_info;
  // battery_info
  if (!h2x__msg__BatteryState__copy(
      &(input->battery_info), &(output->battery_info)))
  {
    return false;
  }
  // ground_count
  output->ground_count = input->ground_count;
  // ground_signal
  for (size_t i = 0; i < 4; ++i) {
    output->ground_signal[i] = input->ground_signal[i];
  }
  // time_seconds
  output->time_seconds = input->time_seconds;
  // is_pcu_valid
  output->is_pcu_valid = input->is_pcu_valid;
  // pcu_state
  if (!h2x__msg__PCUState__copy(
      &(input->pcu_state), &(output->pcu_state)))
  {
    return false;
  }
  // is_cdu_valid
  output->is_cdu_valid = input->is_cdu_valid;
  // cdu_state
  if (!h2x__msg__CDUState__copy(
      &(input->cdu_state), &(output->cdu_state)))
  {
    return false;
  }
  // is_data_valid
  output->is_data_valid = input->is_data_valid;
  // error_code
  output->error_code = input->error_code;
  // warning_code
  output->warning_code = input->warning_code;
  // reserved
  for (size_t i = 0; i < 4; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  // crc
  output->crc = input->crc;
  return true;
}

h2x__msg__LowState *
h2x__msg__LowState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LowState * msg = (h2x__msg__LowState *)allocator.allocate(sizeof(h2x__msg__LowState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__LowState));
  bool success = h2x__msg__LowState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__LowState__destroy(h2x__msg__LowState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__LowState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__LowState__Sequence__init(h2x__msg__LowState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LowState * data = NULL;

  if (size) {
    data = (h2x__msg__LowState *)allocator.zero_allocate(size, sizeof(h2x__msg__LowState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__LowState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__LowState__fini(&data[i - 1]);
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
h2x__msg__LowState__Sequence__fini(h2x__msg__LowState__Sequence * array)
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
      h2x__msg__LowState__fini(&array->data[i]);
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

h2x__msg__LowState__Sequence *
h2x__msg__LowState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__LowState__Sequence * array = (h2x__msg__LowState__Sequence *)allocator.allocate(sizeof(h2x__msg__LowState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__LowState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__LowState__Sequence__destroy(h2x__msg__LowState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__LowState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__LowState__Sequence__are_equal(const h2x__msg__LowState__Sequence * lhs, const h2x__msg__LowState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__LowState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__LowState__Sequence__copy(
  const h2x__msg__LowState__Sequence * input,
  h2x__msg__LowState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__LowState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__LowState * data =
      (h2x__msg__LowState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__LowState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__LowState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__LowState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
