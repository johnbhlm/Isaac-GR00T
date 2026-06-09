// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/LowState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/low_state.h"


#ifndef H2X__MSG__DETAIL__LOW_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__LOW_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'imu_state'
#include "h2x/msg/detail/imu_state__struct.h"
// Member 'motor_state'
#include "h2x/msg/detail/motor_state__struct.h"
// Member 'battery_info'
#include "h2x/msg/detail/battery_state__struct.h"
// Member 'pcu_state'
#include "h2x/msg/detail/pcu_state__struct.h"
// Member 'cdu_state'
#include "h2x/msg/detail/cdu_state__struct.h"

/// Struct defined in msg/LowState in the package h2x.
typedef struct h2x__msg__LowState
{
  uint32_t version[2];
  uint8_t mode_pr;
  uint32_t tick;
  h2x__msg__IMUState imu_state[2];
  h2x__msg__MotorState motor_state[37];
  bool has_battery_info;
  h2x__msg__BatteryState battery_info;
  uint16_t ground_count;
  uint8_t ground_signal[4];
  int32_t time_seconds;
  uint8_t is_pcu_valid;
  h2x__msg__PCUState pcu_state;
  uint8_t is_cdu_valid;
  h2x__msg__CDUState cdu_state;
  uint8_t is_data_valid;
  int32_t error_code;
  int32_t warning_code;
  uint32_t reserved[4];
  uint32_t crc;
} h2x__msg__LowState;

// Struct for a sequence of h2x__msg__LowState.
typedef struct h2x__msg__LowState__Sequence
{
  h2x__msg__LowState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__LowState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__LOW_STATE__STRUCT_H_
