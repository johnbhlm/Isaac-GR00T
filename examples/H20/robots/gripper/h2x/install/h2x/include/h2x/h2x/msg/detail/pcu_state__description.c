// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/PCUState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/pcu_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__PCUState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0x16, 0x46, 0x32, 0x52, 0x78, 0x32, 0xed,
      0xfe, 0x9c, 0x05, 0x7d, 0x24, 0x76, 0x5e, 0x87,
      0xd9, 0x77, 0x11, 0x89, 0x5d, 0x73, 0x98, 0xc8,
      0xa3, 0xc0, 0x2b, 0x3a, 0x91, 0x08, 0x7a, 0xb9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__PCUState__TYPE_NAME[] = "h2x/msg/PCUState";

// Define type names, field names, and default values
static char h2x__msg__PCUState__FIELD_NAME__emergency_stop_state[] = "emergency_stop_state";
static char h2x__msg__PCUState__FIELD_NAME__control_supply_state[] = "control_supply_state";
static char h2x__msg__PCUState__FIELD_NAME__power_supply_state[] = "power_supply_state";
static char h2x__msg__PCUState__FIELD_NAME__pcu_error_code[] = "pcu_error_code";
static char h2x__msg__PCUState__FIELD_NAME__pcu_warning_code[] = "pcu_warning_code";
static char h2x__msg__PCUState__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char h2x__msg__PCUState__FIELD_NAME__motor_bus_voltage[] = "motor_bus_voltage";
static char h2x__msg__PCUState__FIELD_NAME__motor_bus_current[] = "motor_bus_current";
static char h2x__msg__PCUState__FIELD_NAME__dcdc_bus_voltage[] = "dcdc_bus_voltage";
static char h2x__msg__PCUState__FIELD_NAME__voltage_24v[] = "voltage_24v";
static char h2x__msg__PCUState__FIELD_NAME__voltage_12v[] = "voltage_12v";
static char h2x__msg__PCUState__FIELD_NAME__current_24v[] = "current_24v";
static char h2x__msg__PCUState__FIELD_NAME__current_12v[] = "current_12v";

static rosidl_runtime_c__type_description__Field h2x__msg__PCUState__FIELDS[] = {
  {
    {h2x__msg__PCUState__FIELD_NAME__emergency_stop_state, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__control_supply_state, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__power_supply_state, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__pcu_error_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__pcu_warning_code, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__motor_bus_voltage, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__motor_bus_current, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__dcdc_bus_voltage, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__voltage_24v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__voltage_12v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__current_24v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__FIELD_NAME__current_12v, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__PCUState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__PCUState__TYPE_NAME, 16, 16},
      {h2x__msg__PCUState__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 emergency_stop_state\n"
  "uint8 control_supply_state\n"
  "uint8 power_supply_state\n"
  "int32 pcu_error_code\n"
  "int32 pcu_warning_code\n"
  "float32 battery_voltage\n"
  "float32 motor_bus_voltage\n"
  "float32 motor_bus_current\n"
  "float32 dcdc_bus_voltage\n"
  "float32 voltage_24v\n"
  "float32 voltage_12v\n"
  "float32 current_24v\n"
  "float32 current_12v";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__PCUState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__PCUState__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 304, 304},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__PCUState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__PCUState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
