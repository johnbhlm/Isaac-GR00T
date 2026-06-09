// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/motor_cmd_gripper__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__MotorCmdGripper__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x43, 0xef, 0xca, 0x7d, 0x08, 0xe7, 0x9e,
      0x96, 0xc0, 0x04, 0x38, 0x9a, 0x95, 0x7c, 0xe2,
      0xc1, 0xe2, 0x67, 0x3b, 0x52, 0xa5, 0xcd, 0x68,
      0xcc, 0xa2, 0x70, 0x24, 0x6f, 0x06, 0x3b, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__MotorCmdGripper__TYPE_NAME[] = "h2x/msg/MotorCmdGripper";

// Define type names, field names, and default values
static char h2x__msg__MotorCmdGripper__FIELD_NAME__mode[] = "mode";
static char h2x__msg__MotorCmdGripper__FIELD_NAME__operation_mode[] = "operation_mode";
static char h2x__msg__MotorCmdGripper__FIELD_NAME__q[] = "q";
static char h2x__msg__MotorCmdGripper__FIELD_NAME__dq_percentage[] = "dq_percentage";
static char h2x__msg__MotorCmdGripper__FIELD_NAME__acc_percentage[] = "acc_percentage";
static char h2x__msg__MotorCmdGripper__FIELD_NAME__finger_force[] = "finger_force";
static char h2x__msg__MotorCmdGripper__FIELD_NAME__reserved[] = "reserved";

static rosidl_runtime_c__type_description__Field h2x__msg__MotorCmdGripper__FIELDS[] = {
  {
    {h2x__msg__MotorCmdGripper__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorCmdGripper__FIELD_NAME__operation_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorCmdGripper__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorCmdGripper__FIELD_NAME__dq_percentage, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorCmdGripper__FIELD_NAME__acc_percentage, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorCmdGripper__FIELD_NAME__finger_force, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorCmdGripper__FIELD_NAME__reserved, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__MotorCmdGripper__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__MotorCmdGripper__TYPE_NAME, 23, 23},
      {h2x__msg__MotorCmdGripper__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 mode\n"
  "uint8 operation_mode\n"
  "float32 q\n"
  "uint16 dq_percentage\n"
  "uint16 acc_percentage\n"
  "float32 finger_force\n"
  "uint32[4] reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__MotorCmdGripper__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__MotorCmdGripper__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 124, 124},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__MotorCmdGripper__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__MotorCmdGripper__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
