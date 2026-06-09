// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/battery_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__BatteryState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0xc8, 0xad, 0x93, 0x2f, 0x3f, 0x50, 0x8b,
      0x99, 0x53, 0x1d, 0x8c, 0xf2, 0x36, 0xad, 0x77,
      0xfd, 0x0c, 0x0b, 0x55, 0xea, 0x91, 0x9a, 0x93,
      0x4f, 0xc6, 0x87, 0xca, 0x1a, 0x04, 0xf1, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__BatteryState__TYPE_NAME[] = "h2x/msg/BatteryState";

// Define type names, field names, and default values
static char h2x__msg__BatteryState__FIELD_NAME__battery_percentage[] = "battery_percentage";
static char h2x__msg__BatteryState__FIELD_NAME__battery_state[] = "battery_state";
static char h2x__msg__BatteryState__FIELD_NAME__battery_low_warning[] = "battery_low_warning";
static char h2x__msg__BatteryState__FIELD_NAME__error_code[] = "error_code";
static char h2x__msg__BatteryState__FIELD_NAME__warning_code[] = "warning_code";

static rosidl_runtime_c__type_description__Field h2x__msg__BatteryState__FIELDS[] = {
  {
    {h2x__msg__BatteryState__FIELD_NAME__battery_percentage, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__BatteryState__FIELD_NAME__battery_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__BatteryState__FIELD_NAME__battery_low_warning, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__BatteryState__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__BatteryState__FIELD_NAME__warning_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__BatteryState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__BatteryState__TYPE_NAME, 20, 20},
      {h2x__msg__BatteryState__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 battery_percentage\n"
  "uint8 battery_state\n"
  "uint8 battery_low_warning\n"
  "int32 error_code\n"
  "int32 warning_code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__BatteryState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__BatteryState__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__BatteryState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__BatteryState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
