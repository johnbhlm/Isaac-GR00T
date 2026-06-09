// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/GripperInitialize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/gripper_initialize.h"


#ifndef H2X__SRV__DETAIL__GRIPPER_INITIALIZE__STRUCT_H_
#define H2X__SRV__DETAIL__GRIPPER_INITIALIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperInitialize in the package h2x.
typedef struct h2x__srv__GripperInitialize_Request
{
  uint32_t motor_index;
  uint32_t index;
  float offset;
} h2x__srv__GripperInitialize_Request;

// Struct for a sequence of h2x__srv__GripperInitialize_Request.
typedef struct h2x__srv__GripperInitialize_Request__Sequence
{
  h2x__srv__GripperInitialize_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GripperInitialize_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GripperInitialize in the package h2x.
typedef struct h2x__srv__GripperInitialize_Response
{
  int32_t result;
} h2x__srv__GripperInitialize_Response;

// Struct for a sequence of h2x__srv__GripperInitialize_Response.
typedef struct h2x__srv__GripperInitialize_Response__Sequence
{
  h2x__srv__GripperInitialize_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GripperInitialize_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__GripperInitialize_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__GripperInitialize_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GripperInitialize in the package h2x.
typedef struct h2x__srv__GripperInitialize_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__GripperInitialize_Request__Sequence request;
  h2x__srv__GripperInitialize_Response__Sequence response;
} h2x__srv__GripperInitialize_Event;

// Struct for a sequence of h2x__srv__GripperInitialize_Event.
typedef struct h2x__srv__GripperInitialize_Event__Sequence
{
  h2x__srv__GripperInitialize_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GripperInitialize_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__GRIPPER_INITIALIZE__STRUCT_H_
