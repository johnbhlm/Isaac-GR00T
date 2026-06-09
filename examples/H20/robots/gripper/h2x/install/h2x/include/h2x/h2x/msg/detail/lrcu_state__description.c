// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/LRCUState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/lrcu_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__LRCUState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xe8, 0xe8, 0x67, 0x90, 0x6f, 0x33, 0xa9,
      0x15, 0x51, 0xaf, 0x3c, 0x7f, 0x84, 0x34, 0xf8,
      0x63, 0x7f, 0x8d, 0x1d, 0x79, 0x50, 0x36, 0x71,
      0x31, 0x58, 0x3f, 0x47, 0x55, 0x83, 0x6b, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__LRCUState__TYPE_NAME[] = "h2x/msg/LRCUState";

// Define type names, field names, and default values
static char h2x__msg__LRCUState__FIELD_NAME__led_enable[] = "led_enable";
static char h2x__msg__LRCUState__FIELD_NAME__led_mode[] = "led_mode";
static char h2x__msg__LRCUState__FIELD_NAME__led_period_ms[] = "led_period_ms";
static char h2x__msg__LRCUState__FIELD_NAME__led_r[] = "led_r";
static char h2x__msg__LRCUState__FIELD_NAME__led_g[] = "led_g";
static char h2x__msg__LRCUState__FIELD_NAME__led_b[] = "led_b";
static char h2x__msg__LRCUState__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field h2x__msg__LRCUState__FIELDS[] = {
  {
    {h2x__msg__LRCUState__FIELD_NAME__led_enable, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUState__FIELD_NAME__led_mode, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUState__FIELD_NAME__led_period_ms, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUState__FIELD_NAME__led_r, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUState__FIELD_NAME__led_g, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUState__FIELD_NAME__led_b, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUState__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__LRCUState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__LRCUState__TYPE_NAME, 17, 17},
      {h2x__msg__LRCUState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# LED status feedback message\n"
  "\n"
  "# 1. \\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x8f\\xaf\\xe6\\x8e\\xa7\n"
  "# 0: not controllable, 1: controllable\n"
  "uint8 led_enable\n"
  "\n"
  "# 2. \\xe5\\xbd\\x93\\xe5\\x89\\x8d LED \\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\n"
  "# 0: off, 1: constant, 2: blink, 3: breathing\n"
  "uint8 led_mode\n"
  "\n"
  "# 3. \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe9\\x97\\xaa\\xe7\\x83\\x81/\\xe5\\x91\\xbc\\xe5\\x90\\xb8\\xe5\\x91\\xa8\\xe6\\x9c\\x9f (ms)\n"
  "# Example: 10000 ms = 0.1 Hz, 100 ms = 10 Hz\n"
  "uint16 led_period_ms\n"
  "\n"
  "# 4-6. \\xe5\\xbd\\x93\\xe5\\x89\\x8d RGB \\xe9\\x80\\x9a\\xe9\\x81\\x93\\xe4\\xba\\xae\\xe5\\xba\\xa6 (0~255)\n"
  "uint8 led_r\n"
  "uint8 led_g\n"
  "uint8 led_b\n"
  "uint32 crc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__LRCUState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__LRCUState__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 335, 335},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__LRCUState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__LRCUState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
