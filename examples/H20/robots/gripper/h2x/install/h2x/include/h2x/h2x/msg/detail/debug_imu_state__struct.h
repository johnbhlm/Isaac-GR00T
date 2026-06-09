// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/DebugIMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_imu_state.h"


#ifndef H2X__MSG__DETAIL__DEBUG_IMU_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__DEBUG_IMU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DebugIMUState in the package h2x.
typedef struct h2x__msg__DebugIMUState
{
  uint8_t slave_id;
  uint8_t frame_counter;
  uint16_t status_word;
  float temperature;
  float euler_angle_roll;
  float eluer_angle_pitch;
  float eluer_angle_yaw;
  float q1;
  float q2;
  float q3;
  float q4;
  float accx;
  float accy;
  float accz;
  float angular_vel_x;
  float angular_vel_y;
  float angular_vel_z;
  int16_t mag_x;
  int16_t mag_y;
  int16_t mag_z;
  int32_t txobject_index;
  int32_t txobject_data;
} h2x__msg__DebugIMUState;

// Struct for a sequence of h2x__msg__DebugIMUState.
typedef struct h2x__msg__DebugIMUState__Sequence
{
  h2x__msg__DebugIMUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__DebugIMUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__DEBUG_IMU_STATE__STRUCT_H_
