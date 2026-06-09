// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/SetJointMonitor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_joint_monitor.h"


#ifndef H2X__SRV__DETAIL__SET_JOINT_MONITOR__STRUCT_H_
#define H2X__SRV__DETAIL__SET_JOINT_MONITOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_index'
// Member 'min_position'
// Member 'max_position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetJointMonitor in the package h2x.
typedef struct h2x__srv__SetJointMonitor_Request
{
  /// 请求的关节索引数组
  rosidl_runtime_c__uint32__Sequence motor_index;
  /// 对应限位的下限数组
  rosidl_runtime_c__double__Sequence min_position;
  /// 对应限位的上限数组
  rosidl_runtime_c__double__Sequence max_position;
} h2x__srv__SetJointMonitor_Request;

// Struct for a sequence of h2x__srv__SetJointMonitor_Request.
typedef struct h2x__srv__SetJointMonitor_Request__Sequence
{
  h2x__srv__SetJointMonitor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetJointMonitor_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetJointMonitor in the package h2x.
typedef struct h2x__srv__SetJointMonitor_Response
{
  /// 操作是否成功
  int32_t result;
} h2x__srv__SetJointMonitor_Response;

// Struct for a sequence of h2x__srv__SetJointMonitor_Response.
typedef struct h2x__srv__SetJointMonitor_Response__Sequence
{
  h2x__srv__SetJointMonitor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetJointMonitor_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__SetJointMonitor_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__SetJointMonitor_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetJointMonitor in the package h2x.
typedef struct h2x__srv__SetJointMonitor_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__SetJointMonitor_Request__Sequence request;
  h2x__srv__SetJointMonitor_Response__Sequence response;
} h2x__srv__SetJointMonitor_Event;

// Struct for a sequence of h2x__srv__SetJointMonitor_Event.
typedef struct h2x__srv__SetJointMonitor_Event__Sequence
{
  h2x__srv__SetJointMonitor_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetJointMonitor_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__SET_JOINT_MONITOR__STRUCT_H_
