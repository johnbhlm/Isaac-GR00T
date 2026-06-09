// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/Diagnosis.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/diagnosis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ds402_data`
#include "h2x/msg/detail/diagnostic_data__functions.h"
// Member `debug_imu_state`
#include "h2x/msg/detail/debug_imu_state__functions.h"
// Member `debug_cdu_state`
#include "h2x/msg/detail/debug_cdu_state__functions.h"

bool
h2x__msg__Diagnosis__init(h2x__msg__Diagnosis * msg)
{
  if (!msg) {
    return false;
  }
  // is_ds402
  // ds402_data
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__DiagnosticData__init(&msg->ds402_data[i])) {
      h2x__msg__Diagnosis__fini(msg);
      return false;
    }
  }
  // debug_imu_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__DebugIMUState__init(&msg->debug_imu_state[i])) {
      h2x__msg__Diagnosis__fini(msg);
      return false;
    }
  }
  // debug_cdu_state
  if (!h2x__msg__DebugCDUState__init(&msg->debug_cdu_state)) {
    h2x__msg__Diagnosis__fini(msg);
    return false;
  }
  // error_code
  // warning_code
  // cdu_error_code
  // cdu_warning_code
  // pcu_error_code
  // pcu_warning_code
  // imu_error_code
  // imu_warning_code
  // battery_error_code
  // battery_warning_code
  // crc
  return true;
}

void
h2x__msg__Diagnosis__fini(h2x__msg__Diagnosis * msg)
{
  if (!msg) {
    return;
  }
  // is_ds402
  // ds402_data
  for (size_t i = 0; i < 37; ++i) {
    h2x__msg__DiagnosticData__fini(&msg->ds402_data[i]);
  }
  // debug_imu_state
  for (size_t i = 0; i < 2; ++i) {
    h2x__msg__DebugIMUState__fini(&msg->debug_imu_state[i]);
  }
  // debug_cdu_state
  h2x__msg__DebugCDUState__fini(&msg->debug_cdu_state);
  // error_code
  // warning_code
  // cdu_error_code
  // cdu_warning_code
  // pcu_error_code
  // pcu_warning_code
  // imu_error_code
  // imu_warning_code
  // battery_error_code
  // battery_warning_code
  // crc
}

bool
h2x__msg__Diagnosis__are_equal(const h2x__msg__Diagnosis * lhs, const h2x__msg__Diagnosis * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_ds402
  for (size_t i = 0; i < 37; ++i) {
    if (lhs->is_ds402[i] != rhs->is_ds402[i]) {
      return false;
    }
  }
  // ds402_data
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__DiagnosticData__are_equal(
        &(lhs->ds402_data[i]), &(rhs->ds402_data[i])))
    {
      return false;
    }
  }
  // debug_imu_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__DebugIMUState__are_equal(
        &(lhs->debug_imu_state[i]), &(rhs->debug_imu_state[i])))
    {
      return false;
    }
  }
  // debug_cdu_state
  if (!h2x__msg__DebugCDUState__are_equal(
      &(lhs->debug_cdu_state), &(rhs->debug_cdu_state)))
  {
    return false;
  }
  // error_code
  for (size_t i = 0; i < 37; ++i) {
    if (lhs->error_code[i] != rhs->error_code[i]) {
      return false;
    }
  }
  // warning_code
  for (size_t i = 0; i < 37; ++i) {
    if (lhs->warning_code[i] != rhs->warning_code[i]) {
      return false;
    }
  }
  // cdu_error_code
  if (lhs->cdu_error_code != rhs->cdu_error_code) {
    return false;
  }
  // cdu_warning_code
  if (lhs->cdu_warning_code != rhs->cdu_warning_code) {
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
  // imu_error_code
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->imu_error_code[i] != rhs->imu_error_code[i]) {
      return false;
    }
  }
  // imu_warning_code
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->imu_warning_code[i] != rhs->imu_warning_code[i]) {
      return false;
    }
  }
  // battery_error_code
  if (lhs->battery_error_code != rhs->battery_error_code) {
    return false;
  }
  // battery_warning_code
  if (lhs->battery_warning_code != rhs->battery_warning_code) {
    return false;
  }
  // crc
  if (lhs->crc != rhs->crc) {
    return false;
  }
  return true;
}

bool
h2x__msg__Diagnosis__copy(
  const h2x__msg__Diagnosis * input,
  h2x__msg__Diagnosis * output)
{
  if (!input || !output) {
    return false;
  }
  // is_ds402
  for (size_t i = 0; i < 37; ++i) {
    output->is_ds402[i] = input->is_ds402[i];
  }
  // ds402_data
  for (size_t i = 0; i < 37; ++i) {
    if (!h2x__msg__DiagnosticData__copy(
        &(input->ds402_data[i]), &(output->ds402_data[i])))
    {
      return false;
    }
  }
  // debug_imu_state
  for (size_t i = 0; i < 2; ++i) {
    if (!h2x__msg__DebugIMUState__copy(
        &(input->debug_imu_state[i]), &(output->debug_imu_state[i])))
    {
      return false;
    }
  }
  // debug_cdu_state
  if (!h2x__msg__DebugCDUState__copy(
      &(input->debug_cdu_state), &(output->debug_cdu_state)))
  {
    return false;
  }
  // error_code
  for (size_t i = 0; i < 37; ++i) {
    output->error_code[i] = input->error_code[i];
  }
  // warning_code
  for (size_t i = 0; i < 37; ++i) {
    output->warning_code[i] = input->warning_code[i];
  }
  // cdu_error_code
  output->cdu_error_code = input->cdu_error_code;
  // cdu_warning_code
  output->cdu_warning_code = input->cdu_warning_code;
  // pcu_error_code
  output->pcu_error_code = input->pcu_error_code;
  // pcu_warning_code
  output->pcu_warning_code = input->pcu_warning_code;
  // imu_error_code
  for (size_t i = 0; i < 2; ++i) {
    output->imu_error_code[i] = input->imu_error_code[i];
  }
  // imu_warning_code
  for (size_t i = 0; i < 2; ++i) {
    output->imu_warning_code[i] = input->imu_warning_code[i];
  }
  // battery_error_code
  output->battery_error_code = input->battery_error_code;
  // battery_warning_code
  output->battery_warning_code = input->battery_warning_code;
  // crc
  output->crc = input->crc;
  return true;
}

h2x__msg__Diagnosis *
h2x__msg__Diagnosis__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__Diagnosis * msg = (h2x__msg__Diagnosis *)allocator.allocate(sizeof(h2x__msg__Diagnosis), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__Diagnosis));
  bool success = h2x__msg__Diagnosis__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__Diagnosis__destroy(h2x__msg__Diagnosis * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__Diagnosis__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__Diagnosis__Sequence__init(h2x__msg__Diagnosis__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__Diagnosis * data = NULL;

  if (size) {
    data = (h2x__msg__Diagnosis *)allocator.zero_allocate(size, sizeof(h2x__msg__Diagnosis), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__Diagnosis__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__Diagnosis__fini(&data[i - 1]);
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
h2x__msg__Diagnosis__Sequence__fini(h2x__msg__Diagnosis__Sequence * array)
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
      h2x__msg__Diagnosis__fini(&array->data[i]);
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

h2x__msg__Diagnosis__Sequence *
h2x__msg__Diagnosis__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__Diagnosis__Sequence * array = (h2x__msg__Diagnosis__Sequence *)allocator.allocate(sizeof(h2x__msg__Diagnosis__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__Diagnosis__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__Diagnosis__Sequence__destroy(h2x__msg__Diagnosis__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__Diagnosis__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__Diagnosis__Sequence__are_equal(const h2x__msg__Diagnosis__Sequence * lhs, const h2x__msg__Diagnosis__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__Diagnosis__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__Diagnosis__Sequence__copy(
  const h2x__msg__Diagnosis__Sequence * input,
  h2x__msg__Diagnosis__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__Diagnosis);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__Diagnosis * data =
      (h2x__msg__Diagnosis *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__Diagnosis__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__Diagnosis__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__Diagnosis__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
