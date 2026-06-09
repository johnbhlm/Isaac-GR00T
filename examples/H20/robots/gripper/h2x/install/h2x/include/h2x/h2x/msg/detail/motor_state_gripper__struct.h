// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/MotorStateGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_state_gripper.h"


#ifndef H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__STRUCT_H_
#define H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorStateGripper in the package h2x.
typedef struct h2x__msg__MotorStateGripper
{
  uint8_t mode;
  uint8_t operation_mode;
  uint8_t arrive_signal;
  int32_t state;
  int32_t hold_state;
  float q;
  float dq;
  float finger1_force;
  float finger2_force;
  float temperature;
  float cur;
  int32_t error_code;
  int32_t warning_code;
  uint32_t reserved[4];
} h2x__msg__MotorStateGripper;

// Struct for a sequence of h2x__msg__MotorStateGripper.
typedef struct h2x__msg__MotorStateGripper__Sequence
{
  h2x__msg__MotorStateGripper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__MotorStateGripper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__STRUCT_H_
