// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/SetLowBatteryThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_low_battery_threshold.h"


#ifndef H2X__SRV__DETAIL__SET_LOW_BATTERY_THRESHOLD__STRUCT_H_
#define H2X__SRV__DETAIL__SET_LOW_BATTERY_THRESHOLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLowBatteryThreshold in the package h2x.
typedef struct h2x__srv__SetLowBatteryThreshold_Request
{
  int32_t low_battery_threshold;
} h2x__srv__SetLowBatteryThreshold_Request;

// Struct for a sequence of h2x__srv__SetLowBatteryThreshold_Request.
typedef struct h2x__srv__SetLowBatteryThreshold_Request__Sequence
{
  h2x__srv__SetLowBatteryThreshold_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetLowBatteryThreshold_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetLowBatteryThreshold in the package h2x.
typedef struct h2x__srv__SetLowBatteryThreshold_Response
{
  int32_t result;
} h2x__srv__SetLowBatteryThreshold_Response;

// Struct for a sequence of h2x__srv__SetLowBatteryThreshold_Response.
typedef struct h2x__srv__SetLowBatteryThreshold_Response__Sequence
{
  h2x__srv__SetLowBatteryThreshold_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetLowBatteryThreshold_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__SetLowBatteryThreshold_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__SetLowBatteryThreshold_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLowBatteryThreshold in the package h2x.
typedef struct h2x__srv__SetLowBatteryThreshold_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__SetLowBatteryThreshold_Request__Sequence request;
  h2x__srv__SetLowBatteryThreshold_Response__Sequence response;
} h2x__srv__SetLowBatteryThreshold_Event;

// Struct for a sequence of h2x__srv__SetLowBatteryThreshold_Event.
typedef struct h2x__srv__SetLowBatteryThreshold_Event__Sequence
{
  h2x__srv__SetLowBatteryThreshold_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetLowBatteryThreshold_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__SET_LOW_BATTERY_THRESHOLD__STRUCT_H_
