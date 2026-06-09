// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/GripperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_state.h"


#ifndef H2X__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'motor_state'
#include "h2x/msg/detail/motor_state_gripper__struct.h"

/// Struct defined in msg/GripperState in the package h2x.
typedef struct h2x__msg__GripperState
{
  uint32_t tick;
  h2x__msg__MotorStateGripper motor_state[2];
  uint8_t is_data_valid;
  uint32_t crc;
} h2x__msg__GripperState;

// Struct for a sequence of h2x__msg__GripperState.
typedef struct h2x__msg__GripperState__Sequence
{
  h2x__msg__GripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__GripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
