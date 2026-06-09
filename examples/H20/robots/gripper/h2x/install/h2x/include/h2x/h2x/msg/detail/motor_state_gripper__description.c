// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/MotorStateGripper.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/motor_state_gripper__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__MotorStateGripper__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0x4e, 0xab, 0xf7, 0x06, 0x02, 0x7e, 0xcd,
      0x21, 0x2f, 0x12, 0x62, 0x6e, 0xc6, 0x7b, 0x30,
      0x07, 0xba, 0x2f, 0x53, 0xad, 0x59, 0x47, 0x8b,
      0xfe, 0xf0, 0x98, 0x0a, 0x38, 0xe2, 0xa7, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__MotorStateGripper__TYPE_NAME[] = "h2x/msg/MotorStateGripper";

// Define type names, field names, and default values
static char h2x__msg__MotorStateGripper__FIELD_NAME__mode[] = "mode";
static char h2x__msg__MotorStateGripper__FIELD_NAME__operation_mode[] = "operation_mode";
static char h2x__msg__MotorStateGripper__FIELD_NAME__arrive_signal[] = "arrive_signal";
static char h2x__msg__MotorStateGripper__FIELD_NAME__state[] = "state";
static char h2x__msg__MotorStateGripper__FIELD_NAME__hold_state[] = "hold_state";
static char h2x__msg__MotorStateGripper__FIELD_NAME__q[] = "q";
static char h2x__msg__MotorStateGripper__FIELD_NAME__dq[] = "dq";
static char h2x__msg__MotorStateGripper__FIELD_NAME__finger1_force[] = "finger1_force";
static char h2x__msg__MotorStateGripper__FIELD_NAME__finger2_force[] = "finger2_force";
static char h2x__msg__MotorStateGripper__FIELD_NAME__temperature[] = "temperature";
static char h2x__msg__MotorStateGripper__FIELD_NAME__cur[] = "cur";
static char h2x__msg__MotorStateGripper__FIELD_NAME__error_code[] = "error_code";
static char h2x__msg__MotorStateGripper__FIELD_NAME__warning_code[] = "warning_code";
static char h2x__msg__MotorStateGripper__FIELD_NAME__reserved[] = "reserved";

static rosidl_runtime_c__type_description__Field h2x__msg__MotorStateGripper__FIELDS[] = {
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__operation_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__arrive_signal, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__hold_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__dq, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__finger1_force, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__finger2_force, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__cur, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__warning_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorStateGripper__FIELD_NAME__reserved, 8, 8},
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
h2x__msg__MotorStateGripper__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__MotorStateGripper__TYPE_NAME, 25, 25},
      {h2x__msg__MotorStateGripper__FIELDS, 14, 14},
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
  "uint8 arrive_signal\n"
  "int32 state\n"
  "int32 hold_state\n"
  "float32 q\n"
  "float32 dq\n"
  "float32 finger1_force\n"
  "float32 finger2_force\n"
  "float32 temperature\n"
  "float32 cur\n"
  "int32 error_code\n"
  "int32 warning_code\n"
  "uint32[4] reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__MotorStateGripper__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__MotorStateGripper__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 232, 232},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__MotorStateGripper__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__MotorStateGripper__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
