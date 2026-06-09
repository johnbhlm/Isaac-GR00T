// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/GripperState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/gripper_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__GripperState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0xbd, 0x90, 0x26, 0x6b, 0x86, 0xe5, 0xf5,
      0xca, 0x6b, 0x83, 0xcd, 0x2c, 0xd8, 0x89, 0xa8,
      0x2e, 0x0c, 0xe2, 0xc9, 0xd2, 0x39, 0x23, 0xc4,
      0x4b, 0xff, 0xa9, 0xa3, 0x5b, 0xdf, 0x19, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "h2x/msg/detail/motor_state_gripper__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t h2x__msg__MotorStateGripper__EXPECTED_HASH = {1, {
    0x82, 0x4e, 0xab, 0xf7, 0x06, 0x02, 0x7e, 0xcd,
    0x21, 0x2f, 0x12, 0x62, 0x6e, 0xc6, 0x7b, 0x30,
    0x07, 0xba, 0x2f, 0x53, 0xad, 0x59, 0x47, 0x8b,
    0xfe, 0xf0, 0x98, 0x0a, 0x38, 0xe2, 0xa7, 0xdb,
  }};
#endif

static char h2x__msg__GripperState__TYPE_NAME[] = "h2x/msg/GripperState";
static char h2x__msg__MotorStateGripper__TYPE_NAME[] = "h2x/msg/MotorStateGripper";

// Define type names, field names, and default values
static char h2x__msg__GripperState__FIELD_NAME__tick[] = "tick";
static char h2x__msg__GripperState__FIELD_NAME__motor_state[] = "motor_state";
static char h2x__msg__GripperState__FIELD_NAME__is_data_valid[] = "is_data_valid";
static char h2x__msg__GripperState__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field h2x__msg__GripperState__FIELDS[] = {
  {
    {h2x__msg__GripperState__FIELD_NAME__tick, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__GripperState__FIELD_NAME__motor_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {h2x__msg__MotorStateGripper__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__GripperState__FIELD_NAME__is_data_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__GripperState__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__msg__GripperState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {h2x__msg__MotorStateGripper__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__GripperState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__GripperState__TYPE_NAME, 20, 20},
      {h2x__msg__GripperState__FIELDS, 4, 4},
    },
    {h2x__msg__GripperState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&h2x__msg__MotorStateGripper__EXPECTED_HASH, h2x__msg__MotorStateGripper__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = h2x__msg__MotorStateGripper__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 tick\n"
  "MotorStateGripper[2] motor_state\n"
  "uint8 is_data_valid\n"
  "uint32 crc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__GripperState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__GripperState__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__GripperState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__GripperState__get_individual_type_description_source(NULL),
    sources[1] = *h2x__msg__MotorStateGripper__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
