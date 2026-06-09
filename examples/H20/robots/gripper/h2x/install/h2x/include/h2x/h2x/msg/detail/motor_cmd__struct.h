// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/MotorCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_cmd.h"


#ifndef H2X__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
#define H2X__MSG__DETAIL__MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorCmd in the package h2x.
typedef struct h2x__msg__MotorCmd
{
  uint8_t mode;
  uint8_t operation_mode;
  float q;
  float dq;
  float tau;
  float kp;
  float kd;
  uint32_t reserved[4];
} h2x__msg__MotorCmd;

// Struct for a sequence of h2x__msg__MotorCmd.
typedef struct h2x__msg__MotorCmd__Sequence
{
  h2x__msg__MotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__MotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
