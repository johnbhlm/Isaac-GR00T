// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/DebugCDUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_cdu_state.h"


#ifndef H2X__MSG__DETAIL__DEBUG_CDU_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__DEBUG_CDU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'cdu_fireware_version'
// Member 'pcu_firmware_version'
// Member 'lrcu_firmware_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DebugCDUState in the package h2x.
typedef struct h2x__msg__DebugCDUState
{
  uint8_t frame_counter;
  uint8_t electrical_status_feedback_id;
  uint8_t slave_online_status;
  rosidl_runtime_c__String cdu_fireware_version;
  uint8_t peripheral_status_feedback;
  uint8_t emergency_stop_state;
  uint8_t control_supply_state;
  uint8_t power_supply_state;
  float battery_voltage;
  float motor_bus_voltage;
  float dcdc_bus_voltage;
  float voltage_24v;
  float voltage_12v;
  float motor_bus_current;
  float current_24v;
  float current_12v;
  rosidl_runtime_c__String pcu_firmware_version;
  uint8_t low_battery_warning;
  int32_t battery_warning_status_history_l2;
  uint8_t battery_soc;
  uint8_t battery_soh;
  float nominal_battery_capacity;
  float current_battery_capacity;
  float total_battery_voltage;
  float total_battery_current;
  float average_battery_temperature;
  float peak_battery_temperature;
  int32_t battery_warning_status_l1;
  int32_t battery_warning_status_l2;
  uint16_t mosfet_status;
  uint16_t battery_cycle_count;
  uint8_t ntc_count;
  uint8_t series_cell_count;
  uint8_t current_control_source;
  uint8_t led_mode;
  uint16_t led_period;
  uint8_t led_r;
  uint8_t led_g;
  uint8_t led_b;
  rosidl_runtime_c__String lrcu_firmware_version;
} h2x__msg__DebugCDUState;

// Struct for a sequence of h2x__msg__DebugCDUState.
typedef struct h2x__msg__DebugCDUState__Sequence
{
  h2x__msg__DebugCDUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__DebugCDUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__DEBUG_CDU_STATE__STRUCT_H_
