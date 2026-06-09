// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/GetJointHardLimit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/get_joint_hard_limit.h"


#ifndef H2X__SRV__DETAIL__GET_JOINT_HARD_LIMIT__STRUCT_H_
#define H2X__SRV__DETAIL__GET_JOINT_HARD_LIMIT__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetJointHardLimit in the package h2x.
typedef struct h2x__srv__GetJointHardLimit_Request
{
  /// 请求的关节索引数组
  rosidl_runtime_c__uint32__Sequence motor_index;
} h2x__srv__GetJointHardLimit_Request;

// Struct for a sequence of h2x__srv__GetJointHardLimit_Request.
typedef struct h2x__srv__GetJointHardLimit_Request__Sequence
{
  h2x__srv__GetJointHardLimit_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GetJointHardLimit_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'min_position'
// Member 'max_position'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetJointHardLimit in the package h2x.
typedef struct h2x__srv__GetJointHardLimit_Response
{
  /// 操作是否成功
  int32_t result;
  /// 对应硬限位的下限数组
  rosidl_runtime_c__double__Sequence min_position;
  /// 对应硬限位的上限数组
  rosidl_runtime_c__double__Sequence max_position;
} h2x__srv__GetJointHardLimit_Response;

// Struct for a sequence of h2x__srv__GetJointHardLimit_Response.
typedef struct h2x__srv__GetJointHardLimit_Response__Sequence
{
  h2x__srv__GetJointHardLimit_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GetJointHardLimit_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__GetJointHardLimit_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__GetJointHardLimit_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetJointHardLimit in the package h2x.
typedef struct h2x__srv__GetJointHardLimit_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__GetJointHardLimit_Request__Sequence request;
  h2x__srv__GetJointHardLimit_Response__Sequence response;
} h2x__srv__GetJointHardLimit_Event;

// Struct for a sequence of h2x__srv__GetJointHardLimit_Event.
typedef struct h2x__srv__GetJointHardLimit_Event__Sequence
{
  h2x__srv__GetJointHardLimit_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__GetJointHardLimit_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__GET_JOINT_HARD_LIMIT__STRUCT_H_
