// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/LRCUCmd.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/lrcu_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__LRCUCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x47, 0x04, 0x74, 0x36, 0xbd, 0x55, 0x05,
      0xe6, 0xa0, 0x7c, 0x11, 0xb7, 0xc9, 0x89, 0x27,
      0xee, 0x10, 0x35, 0x60, 0xa1, 0x67, 0xad, 0x65,
      0x78, 0x22, 0xf7, 0xe9, 0xf0, 0x8c, 0xe5, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__LRCUCmd__TYPE_NAME[] = "h2x/msg/LRCUCmd";

// Define type names, field names, and default values
static char h2x__msg__LRCUCmd__FIELD_NAME__led_enable[] = "led_enable";
static char h2x__msg__LRCUCmd__FIELD_NAME__led_mode[] = "led_mode";
static char h2x__msg__LRCUCmd__FIELD_NAME__led_period_ms[] = "led_period_ms";
static char h2x__msg__LRCUCmd__FIELD_NAME__led_r[] = "led_r";
static char h2x__msg__LRCUCmd__FIELD_NAME__led_g[] = "led_g";
static char h2x__msg__LRCUCmd__FIELD_NAME__led_b[] = "led_b";
static char h2x__msg__LRCUCmd__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field h2x__msg__LRCUCmd__FIELDS[] = {
  {
    {h2x__msg__LRCUCmd__FIELD_NAME__led_enable, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUCmd__FIELD_NAME__led_mode, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUCmd__FIELD_NAME__led_period_ms, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUCmd__FIELD_NAME__led_r, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUCmd__FIELD_NAME__led_g, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUCmd__FIELD_NAME__led_b, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LRCUCmd__FIELD_NAME__crc, 3, 3},
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
h2x__msg__LRCUCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__LRCUCmd__TYPE_NAME, 15, 15},
      {h2x__msg__LRCUCmd__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# LED control command message\n"
  "\n"
  "# 1. \\xe4\\xb8\\x89\\xe8\\x89\\xb2\\xe7\\x81\\xaf\\xe4\\xbd\\xbf\\xe8\\x83\\xbd\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\n"
  "# 0: disable, 1: enable\n"
  "uint8 led_enable\n"
  "\n"
  "# 2. LED \\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\n"
  "# 0: off, 1: constant, 2: blink, 3: breathing\n"
  "uint8 led_mode\n"
  "\n"
  "# 3. \\xe9\\x97\\xaa\\xe7\\x83\\x81/\\xe5\\x91\\xbc\\xe5\\x90\\xb8\\xe5\\x91\\xa8\\xe6\\x9c\\x9f\\xe6\\x8e\\xa7\\xe5\\x88\\xb6 (ms)\n"
  "# Range: 100~1000 ms\n"
  "uint16 led_period_ms\n"
  "\n"
  "# 4-6. RGB \\xe9\\x80\\x9a\\xe9\\x81\\x93\\xe4\\xba\\xae\\xe5\\xba\\xa6\\xe6\\x8e\\xa7\\xe5\\x88\\xb6 (0~255)\n"
  "uint8 led_r\n"
  "uint8 led_g\n"
  "uint8 led_b\n"
  "uint32 crc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__LRCUCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__LRCUCmd__TYPE_NAME, 15, 15},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 297, 297},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__LRCUCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__LRCUCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
