// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/ResetJointParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/reset_joint_parameters.h"


#ifndef H2X__SRV__DETAIL__RESET_JOINT_PARAMETERS__STRUCT_H_
#define H2X__SRV__DETAIL__RESET_JOINT_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetJointParameters in the package h2x.
typedef struct h2x__srv__ResetJointParameters_Request
{
  uint32_t motor_index;
} h2x__srv__ResetJointParameters_Request;

// Struct for a sequence of h2x__srv__ResetJointParameters_Request.
typedef struct h2x__srv__ResetJointParameters_Request__Sequence
{
  h2x__srv__ResetJointParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__ResetJointParameters_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ResetJointParameters in the package h2x.
typedef struct h2x__srv__ResetJointParameters_Response
{
  int32_t result;
} h2x__srv__ResetJointParameters_Response;

// Struct for a sequence of h2x__srv__ResetJointParameters_Response.
typedef struct h2x__srv__ResetJointParameters_Response__Sequence
{
  h2x__srv__ResetJointParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__ResetJointParameters_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__ResetJointParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__ResetJointParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResetJointParameters in the package h2x.
typedef struct h2x__srv__ResetJointParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__ResetJointParameters_Request__Sequence request;
  h2x__srv__ResetJointParameters_Response__Sequence response;
} h2x__srv__ResetJointParameters_Event;

// Struct for a sequence of h2x__srv__ResetJointParameters_Event.
typedef struct h2x__srv__ResetJointParameters_Event__Sequence
{
  h2x__srv__ResetJointParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__ResetJointParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__RESET_JOINT_PARAMETERS__STRUCT_H_
