// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/LowCmd.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/low_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__LowCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0xb5, 0xdd, 0x6d, 0x77, 0x24, 0x78, 0x15,
      0xd0, 0x78, 0x3c, 0xe1, 0xe6, 0x72, 0xd5, 0x88,
      0x94, 0x20, 0x88, 0x33, 0xef, 0x34, 0x2d, 0x3a,
      0x6e, 0x3c, 0x9d, 0x10, 0x3d, 0xb1, 0xb3, 0x3d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "h2x/msg/detail/motor_cmd__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t h2x__msg__MotorCmd__EXPECTED_HASH = {1, {
    0xcd, 0x3a, 0xa0, 0x87, 0x4d, 0x77, 0x50, 0x46,
    0xa0, 0x7b, 0x1e, 0x18, 0x57, 0xf0, 0x75, 0x68,
    0xf6, 0x97, 0x67, 0x01, 0x97, 0x7c, 0x78, 0xe2,
    0xac, 0x9f, 0xb8, 0xfe, 0x9e, 0xeb, 0x5e, 0x6f,
  }};
#endif

static char h2x__msg__LowCmd__TYPE_NAME[] = "h2x/msg/LowCmd";
static char h2x__msg__MotorCmd__TYPE_NAME[] = "h2x/msg/MotorCmd";

// Define type names, field names, and default values
static char h2x__msg__LowCmd__FIELD_NAME__mode_pr[] = "mode_pr";
static char h2x__msg__LowCmd__FIELD_NAME__motor_cmd[] = "motor_cmd";
static char h2x__msg__LowCmd__FIELD_NAME__reserved[] = "reserved";
static char h2x__msg__LowCmd__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field h2x__msg__LowCmd__FIELDS[] = {
  {
    {h2x__msg__LowCmd__FIELD_NAME__mode_pr, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowCmd__FIELD_NAME__motor_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      37,
      0,
      {h2x__msg__MotorCmd__TYPE_NAME, 16, 16},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowCmd__FIELD_NAME__reserved, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowCmd__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__msg__LowCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {h2x__msg__MotorCmd__TYPE_NAME, 16, 16},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__LowCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__LowCmd__TYPE_NAME, 14, 14},
      {h2x__msg__LowCmd__FIELDS, 4, 4},
    },
    {h2x__msg__LowCmd__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&h2x__msg__MotorCmd__EXPECTED_HASH, h2x__msg__MotorCmd__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = h2x__msg__MotorCmd__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 mode_pr\n"
  "MotorCmd[37] motor_cmd\n"
  "uint32[4] reserved\n"
  "uint32 crc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__LowCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__LowCmd__TYPE_NAME, 14, 14},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 67, 67},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__LowCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__LowCmd__get_individual_type_description_source(NULL),
    sources[1] = *h2x__msg__MotorCmd__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
