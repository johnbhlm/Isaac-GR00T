// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/PCUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/pcu_state.h"


#ifndef H2X__MSG__DETAIL__PCU_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__PCU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PCUState in the package h2x.
typedef struct h2x__msg__PCUState
{
  uint8_t emergency_stop_state;
  uint8_t control_supply_state;
  uint8_t power_supply_state;
  int32_t pcu_error_code;
  int32_t pcu_warning_code;
  float battery_voltage;
  float motor_bus_voltage;
  float motor_bus_current;
  float dcdc_bus_voltage;
  float voltage_24v;
  float voltage_12v;
  float current_24v;
  float current_12v;
} h2x__msg__PCUState;

// Struct for a sequence of h2x__msg__PCUState.
typedef struct h2x__msg__PCUState__Sequence
{
  h2x__msg__PCUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__PCUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__PCU_STATE__STRUCT_H_
