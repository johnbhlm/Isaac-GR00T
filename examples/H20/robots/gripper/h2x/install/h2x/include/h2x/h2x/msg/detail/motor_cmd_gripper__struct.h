// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_cmd_gripper.h"


#ifndef H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__STRUCT_H_
#define H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorCmdGripper in the package h2x.
typedef struct h2x__msg__MotorCmdGripper
{
  uint8_t mode;
  uint8_t operation_mode;
  float q;
  uint16_t dq_percentage;
  uint16_t acc_percentage;
  float finger_force;
  uint32_t reserved[4];
} h2x__msg__MotorCmdGripper;

// Struct for a sequence of h2x__msg__MotorCmdGripper.
typedef struct h2x__msg__MotorCmdGripper__Sequence
{
  h2x__msg__MotorCmdGripper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__MotorCmdGripper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__STRUCT_H_
