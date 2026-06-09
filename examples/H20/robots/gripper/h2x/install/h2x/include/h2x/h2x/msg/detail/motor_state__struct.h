// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_state.h"


#ifndef H2X__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorState in the package h2x.
typedef struct h2x__msg__MotorState
{
  uint8_t mode;
  uint8_t operation_mode;
  float q;
  float dq;
  float ddq;
  float cur;
  float tau_est;
  float temperature[2];
  float kp;
  float kd;
  int32_t error_code;
  int32_t warning_code;
  uint32_t reserved[4];
} h2x__msg__MotorState;

// Struct for a sequence of h2x__msg__MotorState.
typedef struct h2x__msg__MotorState__Sequence
{
  h2x__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
