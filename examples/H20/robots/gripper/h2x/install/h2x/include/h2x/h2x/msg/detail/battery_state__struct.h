// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/battery_state.h"


#ifndef H2X__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BatteryState in the package h2x.
typedef struct h2x__msg__BatteryState
{
  uint8_t battery_percentage;
  uint8_t battery_state;
  uint8_t battery_low_warning;
  int32_t error_code;
  int32_t warning_code;
} h2x__msg__BatteryState;

// Struct for a sequence of h2x__msg__BatteryState.
typedef struct h2x__msg__BatteryState__Sequence
{
  h2x__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
