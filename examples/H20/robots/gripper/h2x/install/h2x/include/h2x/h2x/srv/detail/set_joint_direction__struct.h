// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:srv/SetJointDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_joint_direction.h"


#ifndef H2X__SRV__DETAIL__SET_JOINT_DIRECTION__STRUCT_H_
#define H2X__SRV__DETAIL__SET_JOINT_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetJointDirection in the package h2x.
typedef struct h2x__srv__SetJointDirection_Request
{
  /// 请求的关节索引
  uint32_t motor_index;
  /// 请求设置的关节方向 1：面向关节法兰，顺时针旋转为正（默认）；2：面向关节法兰，顺时针旋转为负
  int32_t direction;
} h2x__srv__SetJointDirection_Request;

// Struct for a sequence of h2x__srv__SetJointDirection_Request.
typedef struct h2x__srv__SetJointDirection_Request__Sequence
{
  h2x__srv__SetJointDirection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetJointDirection_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetJointDirection in the package h2x.
typedef struct h2x__srv__SetJointDirection_Response
{
  /// 操作是否成功
  int32_t result;
} h2x__srv__SetJointDirection_Response;

// Struct for a sequence of h2x__srv__SetJointDirection_Response.
typedef struct h2x__srv__SetJointDirection_Response__Sequence
{
  h2x__srv__SetJointDirection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetJointDirection_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  h2x__srv__SetJointDirection_Event__request__MAX_SIZE = 1
};
// response
enum
{
  h2x__srv__SetJointDirection_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetJointDirection in the package h2x.
typedef struct h2x__srv__SetJointDirection_Event
{
  service_msgs__msg__ServiceEventInfo info;
  h2x__srv__SetJointDirection_Request__Sequence request;
  h2x__srv__SetJointDirection_Response__Sequence response;
} h2x__srv__SetJointDirection_Event;

// Struct for a sequence of h2x__srv__SetJointDirection_Event.
typedef struct h2x__srv__SetJointDirection_Event__Sequence
{
  h2x__srv__SetJointDirection_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__srv__SetJointDirection_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__SRV__DETAIL__SET_JOINT_DIRECTION__STRUCT_H_
