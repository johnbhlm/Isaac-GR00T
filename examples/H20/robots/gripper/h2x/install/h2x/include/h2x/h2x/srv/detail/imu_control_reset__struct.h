// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/IMUControlReset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/imu_control_reset.h"


#ifndef H2X__SRV__DETAIL__IMU_CONTROL_RESET__STRUCT_H_
#define H2X__SRV__DETAIL__IMU_CONTROL_RESET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IMUControlReset in the package h2x.
typedef struct h2x__srv__IMUControlReset_Request
{
  uint32_t imu_index;
} h2x__srv__IMUControlReset_Request;

// Struct for a sequence of h2x__srv__IMUControlReset_Request.
typedef struct h2x__srv__IMUControlReset_Request__Sequence
{
  h2x__srv__IMUControlReset_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__IMUControlReset_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/IMUControlReset in the package h2x.
typedef struct h2x__srv__IMUControlReset_Response
{
  int32_t result;
} h2x__srv__IMUControlReset_Response;

// Struct for a sequence of h2x__srv__IMUControlReset_Response.
typedef struct h2x__srv__IMUControlReset_Response__Sequence
{
  h2x__srv__IMUControlReset_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__IMUControlReset_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__IMUControlReset_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__IMUControlReset_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/IMUControlReset in the package h2x.
typedef struct h2x__srv__IMUControlReset_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__IMUControlReset_Request__Sequence request;
  h2x__srv__IMUControlReset_Response__Sequence response;
} h2x__srv__IMUControlReset_Event;

// Struct for a sequence of h2x__srv__IMUControlReset_Event.
typedef struct h2x__srv__IMUControlReset_Event__Sequence
{
  h2x__srv__IMUControlReset_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__IMUControlReset_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__IMU_CONTROL_RESET__STRUCT_H_
