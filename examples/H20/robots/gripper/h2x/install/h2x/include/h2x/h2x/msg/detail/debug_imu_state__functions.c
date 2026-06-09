// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/DebugIMUState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/debug_imu_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
h2x__msg__DebugIMUState__init(h2x__msg__DebugIMUState * msg)
{
  if (!msg) {
    return false;
  }
  // slave_id
  // frame_counter
  // status_word
  // temperature
  // euler_angle_roll
  // eluer_angle_pitch
  // eluer_angle_yaw
  // q1
  // q2
  // q3
  // q4
  // accx
  // accy
  // accz
  // angular_vel_x
  // angular_vel_y
  // angular_vel_z
  // mag_x
  // mag_y
  // mag_z
  // txobject_index
  // txobject_data
  return true;
}

void
h2x__msg__DebugIMUState__fini(h2x__msg__DebugIMUState * msg)
{
  if (!msg) {
    return;
  }
  // slave_id
  // frame_counter
  // status_word
  // temperature
  // euler_angle_roll
  // eluer_angle_pitch
  // eluer_angle_yaw
  // q1
  // q2
  // q3
  // q4
  // accx
  // accy
  // accz
  // angular_vel_x
  // angular_vel_y
  // angular_vel_z
  // mag_x
  // mag_y
  // mag_z
  // txobject_index
  // txobject_data
}

bool
h2x__msg__DebugIMUState__are_equal(const h2x__msg__DebugIMUState * lhs, const h2x__msg__DebugIMUState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // slave_id
  if (lhs->slave_id != rhs->slave_id) {
    return false;
  }
  // frame_counter
  if (lhs->frame_counter != rhs->frame_counter) {
    return false;
  }
  // status_word
  if (lhs->status_word != rhs->status_word) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // euler_angle_roll
  if (lhs->euler_angle_roll != rhs->euler_angle_roll) {
    return false;
  }
  // eluer_angle_pitch
  if (lhs->eluer_angle_pitch != rhs->eluer_angle_pitch) {
    return false;
  }
  // eluer_angle_yaw
  if (lhs->eluer_angle_yaw != rhs->eluer_angle_yaw) {
    return false;
  }
  // q1
  if (lhs->q1 != rhs->q1) {
    return false;
  }
  // q2
  if (lhs->q2 != rhs->q2) {
    return false;
  }
  // q3
  if (lhs->q3 != rhs->q3) {
    return false;
  }
  // q4
  if (lhs->q4 != rhs->q4) {
    return false;
  }
  // accx
  if (lhs->accx != rhs->accx) {
    return false;
  }
  // accy
  if (lhs->accy != rhs->accy) {
    return false;
  }
  // accz
  if (lhs->accz != rhs->accz) {
    return false;
  }
  // angular_vel_x
  if (lhs->angular_vel_x != rhs->angular_vel_x) {
    return false;
  }
  // angular_vel_y
  if (lhs->angular_vel_y != rhs->angular_vel_y) {
    return false;
  }
  // angular_vel_z
  if (lhs->angular_vel_z != rhs->angular_vel_z) {
    return false;
  }
  // mag_x
  if (lhs->mag_x != rhs->mag_x) {
    return false;
  }
  // mag_y
  if (lhs->mag_y != rhs->mag_y) {
    return false;
  }
  // mag_z
  if (lhs->mag_z != rhs->mag_z) {
    return false;
  }
  // txobject_index
  if (lhs->txobject_index != rhs->txobject_index) {
    return false;
  }
  // txobject_data
  if (lhs->txobject_data != rhs->txobject_data) {
    return false;
  }
  return true;
}

bool
h2x__msg__DebugIMUState__copy(
  const h2x__msg__DebugIMUState * input,
  h2x__msg__DebugIMUState * output)
{
  if (!input || !output) {
    return false;
  }
  // slave_id
  output->slave_id = input->slave_id;
  // frame_counter
  output->frame_counter = input->frame_counter;
  // status_word
  output->status_word = input->status_word;
  // temperature
  output->temperature = input->temperature;
  // euler_angle_roll
  output->euler_angle_roll = input->euler_angle_roll;
  // eluer_angle_pitch
  output->eluer_angle_pitch = input->eluer_angle_pitch;
  // eluer_angle_yaw
  output->eluer_angle_yaw = input->eluer_angle_yaw;
  // q1
  output->q1 = input->q1;
  // q2
  output->q2 = input->q2;
  // q3
  output->q3 = input->q3;
  // q4
  output->q4 = input->q4;
  // accx
  output->accx = input->accx;
  // accy
  output->accy = input->accy;
  // accz
  output->accz = input->accz;
  // angular_vel_x
  output->angular_vel_x = input->angular_vel_x;
  // angular_vel_y
  output->angular_vel_y = input->angular_vel_y;
  // angular_vel_z
  output->angular_vel_z = input->angular_vel_z;
  // mag_x
  output->mag_x = input->mag_x;
  // mag_y
  output->mag_y = input->mag_y;
  // mag_z
  output->mag_z = input->mag_z;
  // txobject_index
  output->txobject_index = input->txobject_index;
  // txobject_data
  output->txobject_data = input->txobject_data;
  return true;
}

h2x__msg__DebugIMUState *
h2x__msg__DebugIMUState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugIMUState * msg = (h2x__msg__DebugIMUState *)allocator.allocate(sizeof(h2x__msg__DebugIMUState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__DebugIMUState));
  bool success = h2x__msg__DebugIMUState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__DebugIMUState__destroy(h2x__msg__DebugIMUState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__DebugIMUState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__DebugIMUState__Sequence__init(h2x__msg__DebugIMUState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugIMUState * data = NULL;

  if (size) {
    data = (h2x__msg__DebugIMUState *)allocator.zero_allocate(size, sizeof(h2x__msg__DebugIMUState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__DebugIMUState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__DebugIMUState__fini(&data[i - 1]);
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
h2x__msg__DebugIMUState__Sequence__fini(h2x__msg__DebugIMUState__Sequence * array)
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
      h2x__msg__DebugIMUState__fini(&array->data[i]);
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

h2x__msg__DebugIMUState__Sequence *
h2x__msg__DebugIMUState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugIMUState__Sequence * array = (h2x__msg__DebugIMUState__Sequence *)allocator.allocate(sizeof(h2x__msg__DebugIMUState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__DebugIMUState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__DebugIMUState__Sequence__destroy(h2x__msg__DebugIMUState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__DebugIMUState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__DebugIMUState__Sequence__are_equal(const h2x__msg__DebugIMUState__Sequence * lhs, const h2x__msg__DebugIMUState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__DebugIMUState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__DebugIMUState__Sequence__copy(
  const h2x__msg__DebugIMUState__Sequence * input,
  h2x__msg__DebugIMUState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__DebugIMUState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__DebugIMUState * data =
      (h2x__msg__DebugIMUState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__DebugIMUState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__DebugIMUState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__DebugIMUState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
