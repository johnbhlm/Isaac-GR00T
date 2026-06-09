// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:srv/IMUMagneticFieldCalibrationStop.idl
// generated code does not contain a copyright notice
#include "h2x/srv/detail/imu_magnetic_field_calibration_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Request__init(h2x__srv__IMUMagneticFieldCalibrationStop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // imu_index
  return true;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Request__fini(h2x__srv__IMUMagneticFieldCalibrationStop_Request * msg)
{
  if (!msg) {
    return;
  }
  // imu_index
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Request__are_equal(const h2x__srv__IMUMagneticFieldCalibrationStop_Request * lhs, const h2x__srv__IMUMagneticFieldCalibrationStop_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // imu_index
  if (lhs->imu_index != rhs->imu_index) {
    return false;
  }
  return true;
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Request__copy(
  const h2x__srv__IMUMagneticFieldCalibrationStop_Request * input,
  h2x__srv__IMUMagneticFieldCalibrationStop_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // imu_index
  output->imu_index = input->imu_index;
  return true;
}

h2x__srv__IMUMagneticFieldCalibrationStop_Request *
h2x__srv__IMUMagneticFieldCalibrationStop_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Request * msg = (h2x__srv__IMUMagneticFieldCalibrationStop_Request *)allocator.allocate(sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Request));
  bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Request__destroy(h2x__srv__IMUMagneticFieldCalibrationStop_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__init(h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Request * data = NULL;

  if (size) {
    data = (h2x__srv__IMUMagneticFieldCalibrationStop_Request *)allocator.zero_allocate(size, sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__srv__IMUMagneticFieldCalibrationStop_Request__fini(&data[i - 1]);
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
h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__fini(h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * array)
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
      h2x__srv__IMUMagneticFieldCalibrationStop_Request__fini(&array->data[i]);
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

h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence *
h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * array = (h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence *)allocator.allocate(sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__destroy(h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__are_equal(const h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * lhs, const h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__srv__IMUMagneticFieldCalibrationStop_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__copy(
  const h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * input,
  h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__srv__IMUMagneticFieldCalibrationStop_Request * data =
      (h2x__srv__IMUMagneticFieldCalibrationStop_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__srv__IMUMagneticFieldCalibrationStop_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__srv__IMUMagneticFieldCalibrationStop_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__srv__IMUMagneticFieldCalibrationStop_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
h2x__srv__IMUMagneticFieldCalibrationStop_Response__init(h2x__srv__IMUMagneticFieldCalibrationStop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Response__fini(h2x__srv__IMUMagneticFieldCalibrationStop_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Response__are_equal(const h2x__srv__IMUMagneticFieldCalibrationStop_Response * lhs, const h2x__srv__IMUMagneticFieldCalibrationStop_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Response__copy(
  const h2x__srv__IMUMagneticFieldCalibrationStop_Response * input,
  h2x__srv__IMUMagneticFieldCalibrationStop_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

h2x__srv__IMUMagneticFieldCalibrationStop_Response *
h2x__srv__IMUMagneticFieldCalibrationStop_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Response * msg = (h2x__srv__IMUMagneticFieldCalibrationStop_Response *)allocator.allocate(sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Response));
  bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Response__destroy(h2x__srv__IMUMagneticFieldCalibrationStop_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__init(h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Response * data = NULL;

  if (size) {
    data = (h2x__srv__IMUMagneticFieldCalibrationStop_Response *)allocator.zero_allocate(size, sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__srv__IMUMagneticFieldCalibrationStop_Response__fini(&data[i - 1]);
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
h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__fini(h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * array)
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
      h2x__srv__IMUMagneticFieldCalibrationStop_Response__fini(&array->data[i]);
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

h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence *
h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * array = (h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence *)allocator.allocate(sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__destroy(h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__are_equal(const h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * lhs, const h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__srv__IMUMagneticFieldCalibrationStop_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__copy(
  const h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * input,
  h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__srv__IMUMagneticFieldCalibrationStop_Response * data =
      (h2x__srv__IMUMagneticFieldCalibrationStop_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__srv__IMUMagneticFieldCalibrationStop_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__srv__IMUMagneticFieldCalibrationStop_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__srv__IMUMagneticFieldCalibrationStop_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "h2x/srv/detail/imu_magnetic_field_calibration_stop__functions.h"

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Event__init(h2x__srv__IMUMagneticFieldCalibrationStop_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(msg);
    return false;
  }
  // request
  if (!h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__init(&msg->request, 0)) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(msg);
    return false;
  }
  // response
  if (!h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__init(&msg->response, 0)) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(msg);
    return false;
  }
  return true;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(h2x__srv__IMUMagneticFieldCalibrationStop_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__fini(&msg->request);
  // response
  h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__fini(&msg->response);
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Event__are_equal(const h2x__srv__IMUMagneticFieldCalibrationStop_Event * lhs, const h2x__srv__IMUMagneticFieldCalibrationStop_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Event__copy(
  const h2x__srv__IMUMagneticFieldCalibrationStop_Event * input,
  h2x__srv__IMUMagneticFieldCalibrationStop_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!h2x__srv__IMUMagneticFieldCalibrationStop_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!h2x__srv__IMUMagneticFieldCalibrationStop_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

h2x__srv__IMUMagneticFieldCalibrationStop_Event *
h2x__srv__IMUMagneticFieldCalibrationStop_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Event * msg = (h2x__srv__IMUMagneticFieldCalibrationStop_Event *)allocator.allocate(sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Event));
  bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Event__destroy(h2x__srv__IMUMagneticFieldCalibrationStop_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__init(h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Event * data = NULL;

  if (size) {
    data = (h2x__srv__IMUMagneticFieldCalibrationStop_Event *)allocator.zero_allocate(size, sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(&data[i - 1]);
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
h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__fini(h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * array)
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
      h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(&array->data[i]);
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

h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence *
h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * array = (h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence *)allocator.allocate(sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__destroy(h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__are_equal(const h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * lhs, const h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__srv__IMUMagneticFieldCalibrationStop_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence__copy(
  const h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * input,
  h2x__srv__IMUMagneticFieldCalibrationStop_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__srv__IMUMagneticFieldCalibrationStop_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__srv__IMUMagneticFieldCalibrationStop_Event * data =
      (h2x__srv__IMUMagneticFieldCalibrationStop_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__srv__IMUMagneticFieldCalibrationStop_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__srv__IMUMagneticFieldCalibrationStop_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__srv__IMUMagneticFieldCalibrationStop_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
