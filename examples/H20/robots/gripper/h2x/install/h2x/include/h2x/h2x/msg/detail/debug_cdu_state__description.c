// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/DebugCDUState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/debug_cdu_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__DebugCDUState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x30, 0x55, 0xe7, 0xbc, 0xc4, 0xc6, 0x4f,
      0x4d, 0x96, 0xa8, 0xf7, 0x26, 0xe2, 0x3d, 0xb7,
      0x18, 0xe6, 0x31, 0x19, 0x62, 0xbf, 0x90, 0x45,
      0x2e, 0x4b, 0xbe, 0x7e, 0xfd, 0xda, 0xa7, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__DebugCDUState__TYPE_NAME[] = "h2x/msg/DebugCDUState";

// Define type names, field names, and default values
static char h2x__msg__DebugCDUState__FIELD_NAME__frame_counter[] = "frame_counter";
static char h2x__msg__DebugCDUState__FIELD_NAME__electrical_status_feedback_id[] = "electrical_status_feedback_id";
static char h2x__msg__DebugCDUState__FIELD_NAME__slave_online_status[] = "slave_online_status";
static char h2x__msg__DebugCDUState__FIELD_NAME__cdu_fireware_version[] = "cdu_fireware_version";
static char h2x__msg__DebugCDUState__FIELD_NAME__peripheral_status_feedback[] = "peripheral_status_feedback";
static char h2x__msg__DebugCDUState__FIELD_NAME__emergency_stop_state[] = "emergency_stop_state";
static char h2x__msg__DebugCDUState__FIELD_NAME__control_supply_state[] = "control_supply_state";
static char h2x__msg__DebugCDUState__FIELD_NAME__power_supply_state[] = "power_supply_state";
static char h2x__msg__DebugCDUState__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char h2x__msg__DebugCDUState__FIELD_NAME__motor_bus_voltage[] = "motor_bus_voltage";
static char h2x__msg__DebugCDUState__FIELD_NAME__dcdc_bus_voltage[] = "dcdc_bus_voltage";
static char h2x__msg__DebugCDUState__FIELD_NAME__voltage_24v[] = "voltage_24v";
static char h2x__msg__DebugCDUState__FIELD_NAME__voltage_12v[] = "voltage_12v";
static char h2x__msg__DebugCDUState__FIELD_NAME__motor_bus_current[] = "motor_bus_current";
static char h2x__msg__DebugCDUState__FIELD_NAME__current_24v[] = "current_24v";
static char h2x__msg__DebugCDUState__FIELD_NAME__current_12v[] = "current_12v";
static char h2x__msg__DebugCDUState__FIELD_NAME__pcu_firmware_version[] = "pcu_firmware_version";
static char h2x__msg__DebugCDUState__FIELD_NAME__low_battery_warning[] = "low_battery_warning";
static char h2x__msg__DebugCDUState__FIELD_NAME__battery_warning_status_history_l2[] = "battery_warning_status_history_l2";
static char h2x__msg__DebugCDUState__FIELD_NAME__battery_soc[] = "battery_soc";
static char h2x__msg__DebugCDUState__FIELD_NAME__battery_soh[] = "battery_soh";
static char h2x__msg__DebugCDUState__FIELD_NAME__nominal_battery_capacity[] = "nominal_battery_capacity";
static char h2x__msg__DebugCDUState__FIELD_NAME__current_battery_capacity[] = "current_battery_capacity";
static char h2x__msg__DebugCDUState__FIELD_NAME__total_battery_voltage[] = "total_battery_voltage";
static char h2x__msg__DebugCDUState__FIELD_NAME__total_battery_current[] = "total_battery_current";
static char h2x__msg__DebugCDUState__FIELD_NAME__average_battery_temperature[] = "average_battery_temperature";
static char h2x__msg__DebugCDUState__FIELD_NAME__peak_battery_temperature[] = "peak_battery_temperature";
static char h2x__msg__DebugCDUState__FIELD_NAME__battery_warning_status_l1[] = "battery_warning_status_l1";
static char h2x__msg__DebugCDUState__FIELD_NAME__battery_warning_status_l2[] = "battery_warning_status_l2";
static char h2x__msg__DebugCDUState__FIELD_NAME__mosfet_status[] = "mosfet_status";
static char h2x__msg__DebugCDUState__FIELD_NAME__battery_cycle_count[] = "battery_cycle_count";
static char h2x__msg__DebugCDUState__FIELD_NAME__ntc_count[] = "ntc_count";
static char h2x__msg__DebugCDUState__FIELD_NAME__series_cell_count[] = "series_cell_count";
static char h2x__msg__DebugCDUState__FIELD_NAME__current_control_source[] = "current_control_source";
static char h2x__msg__DebugCDUState__FIELD_NAME__led_mode[] = "led_mode";
static char h2x__msg__DebugCDUState__FIELD_NAME__led_period[] = "led_period";
static char h2x__msg__DebugCDUState__FIELD_NAME__led_r[] = "led_r";
static char h2x__msg__DebugCDUState__FIELD_NAME__led_g[] = "led_g";
static char h2x__msg__DebugCDUState__FIELD_NAME__led_b[] = "led_b";
static char h2x__msg__DebugCDUState__FIELD_NAME__lrcu_firmware_version[] = "lrcu_firmware_version";

static rosidl_runtime_c__type_description__Field h2x__msg__DebugCDUState__FIELDS[] = {
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__frame_counter, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__electrical_status_feedback_id, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__slave_online_status, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__cdu_fireware_version, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__peripheral_status_feedback, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__emergency_stop_state, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__control_supply_state, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__power_supply_state, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__motor_bus_voltage, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__dcdc_bus_voltage, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__voltage_24v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__voltage_12v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__motor_bus_current, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__current_24v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__current_12v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__pcu_firmware_version, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__low_battery_warning, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__battery_warning_status_history_l2, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__battery_soc, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__battery_soh, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__nominal_battery_capacity, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__current_battery_capacity, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__total_battery_voltage, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__total_battery_current, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__average_battery_temperature, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__peak_battery_temperature, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__battery_warning_status_l1, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__battery_warning_status_l2, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__mosfet_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__battery_cycle_count, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__ntc_count, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__series_cell_count, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__current_control_source, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__led_mode, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__led_period, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__led_r, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__led_g, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__led_b, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugCDUState__FIELD_NAME__lrcu_firmware_version, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__DebugCDUState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__DebugCDUState__TYPE_NAME, 21, 21},
      {h2x__msg__DebugCDUState__FIELDS, 40, 40},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 frame_counter\n"
  "uint8 electrical_status_feedback_id\n"
  "uint8 slave_online_status\n"
  "string cdu_fireware_version\n"
  "uint8 peripheral_status_feedback\n"
  "uint8 emergency_stop_state\n"
  "uint8 control_supply_state\n"
  "uint8 power_supply_state\n"
  "float32 battery_voltage\n"
  "float32 motor_bus_voltage\n"
  "float32 dcdc_bus_voltage\n"
  "float32 voltage_24v\n"
  "float32 voltage_12v\n"
  "float32 motor_bus_current\n"
  "float32 current_24v\n"
  "float32 current_12v\n"
  "string pcu_firmware_version\n"
  "uint8 low_battery_warning\n"
  "int32 battery_warning_status_history_l2\n"
  "uint8 battery_soc\n"
  "uint8 battery_soh\n"
  "float32 nominal_battery_capacity\n"
  "float32 current_battery_capacity\n"
  "float32 total_battery_voltage\n"
  "float32 total_battery_current\n"
  "float32 average_battery_temperature\n"
  "float32 peak_battery_temperature\n"
  "int32 battery_warning_status_l1\n"
  "int32 battery_warning_status_l2\n"
  "uint16 mosfet_status\n"
  "uint16 battery_cycle_count\n"
  "uint8 ntc_count\n"
  "uint8 series_cell_count\n"
  "uint8 current_control_source\n"
  "uint8 led_mode\n"
  "uint16 led_period\n"
  "uint8 led_r\n"
  "uint8 led_g\n"
  "uint8 led_b\n"
  "string lrcu_firmware_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__DebugCDUState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__DebugCDUState__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1006, 1006},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__DebugCDUState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__DebugCDUState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
