// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/IMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/imu_state.h"


#ifndef H2X__MSG__DETAIL__IMU_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__IMU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/IMUState in the package h2x.
typedef struct h2x__msg__IMUState
{
  float quaternion[4];
  float gyroscope[3];
  float accelerometer[3];
  float rpy[3];
  float temperature;
  int32_t error_code;
  int32_t warning_code;
} h2x__msg__IMUState;

// Struct for a sequence of h2x__msg__IMUState.
typedef struct h2x__msg__IMUState__Sequence
{
  h2x__msg__IMUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__IMUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__IMU_STATE__STRUCT_H_
