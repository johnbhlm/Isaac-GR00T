// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/GripperCmd.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/gripper_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__GripperCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0x26, 0xd5, 0x1e, 0xcf, 0x34, 0xa6, 0x02,
      0xa3, 0x00, 0x37, 0xa8, 0x1e, 0x0e, 0x56, 0xde,
      0x46, 0xb2, 0xe4, 0x4e, 0x6c, 0xd0, 0x36, 0x3f,
      0x8c, 0xc3, 0x4a, 0xb3, 0x50, 0xd5, 0xbe, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "h2x/msg/detail/motor_cmd_gripper__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t h2x__msg__MotorCmdGripper__EXPECTED_HASH = {1, {
    0xc9, 0x43, 0xef, 0xca, 0x7d, 0x08, 0xe7, 0x9e,
    0x96, 0xc0, 0x04, 0x38, 0x9a, 0x95, 0x7c, 0xe2,
    0xc1, 0xe2, 0x67, 0x3b, 0x52, 0xa5, 0xcd, 0x68,
    0xcc, 0xa2, 0x70, 0x24, 0x6f, 0x06, 0x3b, 0x0e,
  }};
#endif

static char h2x__msg__GripperCmd__TYPE_NAME[] = "h2x/msg/GripperCmd";
static char h2x__msg__MotorCmdGripper__TYPE_NAME[] = "h2x/msg/MotorCmdGripper";

// Define type names, field names, and default values
static char h2x__msg__GripperCmd__FIELD_NAME__motor_cmd[] = "motor_cmd";
static char h2x__msg__GripperCmd__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field h2x__msg__GripperCmd__FIELDS[] = {
  {
    {h2x__msg__GripperCmd__FIELD_NAME__motor_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {h2x__msg__MotorCmdGripper__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__GripperCmd__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__msg__GripperCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {h2x__msg__MotorCmdGripper__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__GripperCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__GripperCmd__TYPE_NAME, 18, 18},
      {h2x__msg__GripperCmd__FIELDS, 2, 2},
    },
    {h2x__msg__GripperCmd__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&h2x__msg__MotorCmdGripper__EXPECTED_HASH, h2x__msg__MotorCmdGripper__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = h2x__msg__MotorCmdGripper__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "MotorCmdGripper[2] motor_cmd\n"
  "uint32 crc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__GripperCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__GripperCmd__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__GripperCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__GripperCmd__get_individual_type_description_source(NULL),
    sources[1] = *h2x__msg__MotorCmdGripper__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
