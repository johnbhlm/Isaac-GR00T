// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/GripperCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_cmd.h"


#ifndef H2X__MSG__DETAIL__GRIPPER_CMD__STRUCT_H_
#define H2X__MSG__DETAIL__GRIPPER_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'motor_cmd'
#include "h2x/msg/detail/motor_cmd_gripper__struct.h"

/// Struct defined in msg/GripperCmd in the package h2x.
typedef struct h2x__msg__GripperCmd
{
  h2x__msg__MotorCmdGripper motor_cmd[2];
  uint32_t crc;
} h2x__msg__GripperCmd;

// Struct for a sequence of h2x__msg__GripperCmd.
typedef struct h2x__msg__GripperCmd__Sequence
{
  h2x__msg__GripperCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__GripperCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__GRIPPER_CMD__STRUCT_H_
