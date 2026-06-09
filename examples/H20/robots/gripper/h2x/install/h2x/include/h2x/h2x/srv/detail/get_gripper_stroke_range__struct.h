// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/GetGripperStrokeRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/get_gripper_stroke_range.h"


#ifndef H2X__SRV__DETAIL__GET_GRIPPER_STROKE_RANGE__STRUCT_H_
#define H2X__SRV__DETAIL__GET_GRIPPER_STROKE_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetGripperStrokeRange in the package h2x.
typedef struct h2x__srv__GetGripperStrokeRange_Request
{
  uint32_t motor_index;
} h2x__srv__GetGripperStrokeRange_Request;

// Struct for a sequence of h2x__srv__GetGripperStrokeRange_Request.
typedef struct h2x__srv__GetGripperStrokeRange_Request__Sequence
{
  h2x__srv__GetGripperStrokeRange_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GetGripperStrokeRange_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetGripperStrokeRange in the package h2x.
typedef struct h2x__srv__GetGripperStrokeRange_Response
{
  int32_t result;
  float min_stroke;
  float max_stroke;
} h2x__srv__GetGripperStrokeRange_Response;

// Struct for a sequence of h2x__srv__GetGripperStrokeRange_Response.
typedef struct h2x__srv__GetGripperStrokeRange_Response__Sequence
{
  h2x__srv__GetGripperStrokeRange_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GetGripperStrokeRange_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__GetGripperStrokeRange_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__GetGripperStrokeRange_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetGripperStrokeRange in the package h2x.
typedef struct h2x__srv__GetGripperStrokeRange_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__GetGripperStrokeRange_Request__Sequence request;
  h2x__srv__GetGripperStrokeRange_Response__Sequence response;
} h2x__srv__GetGripperStrokeRange_Event;

// Struct for a sequence of h2x__srv__GetGripperStrokeRange_Event.
typedef struct h2x__srv__GetGripperStrokeRange_Event__Sequence
{
  h2x__srv__GetGripperStrokeRange_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GetGripperStrokeRange_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__GET_GRIPPER_STROKE_RANGE__STRUCT_H_
