// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/MotorState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/motor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__MotorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x67, 0x4d, 0xdd, 0x41, 0x1e, 0x28, 0x3c,
      0x57, 0xcb, 0xfe, 0x98, 0x1c, 0x63, 0x3c, 0xc0,
      0xa4, 0x91, 0xcf, 0x67, 0x31, 0x58, 0x2b, 0x37,
      0x90, 0x40, 0xd1, 0x39, 0xbb, 0xc7, 0x67, 0x82,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__MotorState__TYPE_NAME[] = "h2x/msg/MotorState";

// Define type names, field names, and default values
static char h2x__msg__MotorState__FIELD_NAME__mode[] = "mode";
static char h2x__msg__MotorState__FIELD_NAME__operation_mode[] = "operation_mode";
static char h2x__msg__MotorState__FIELD_NAME__q[] = "q";
static char h2x__msg__MotorState__FIELD_NAME__dq[] = "dq";
static char h2x__msg__MotorState__FIELD_NAME__ddq[] = "ddq";
static char h2x__msg__MotorState__FIELD_NAME__cur[] = "cur";
static char h2x__msg__MotorState__FIELD_NAME__tau_est[] = "tau_est";
static char h2x__msg__MotorState__FIELD_NAME__temperature[] = "temperature";
static char h2x__msg__MotorState__FIELD_NAME__kp[] = "kp";
static char h2x__msg__MotorState__FIELD_NAME__kd[] = "kd";
static char h2x__msg__MotorState__FIELD_NAME__error_code[] = "error_code";
static char h2x__msg__MotorState__FIELD_NAME__warning_code[] = "warning_code";
static char h2x__msg__MotorState__FIELD_NAME__reserved[] = "reserved";

static rosidl_runtime_c__type_description__Field h2x__msg__MotorState__FIELDS[] = {
  {
    {h2x__msg__MotorState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__operation_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__dq, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__ddq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__cur, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__tau_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__warning_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__FIELD_NAME__reserved, 8, 8},
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
h2x__msg__MotorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__MotorState__TYPE_NAME, 18, 18},
      {h2x__msg__MotorState__FIELDS, 13, 13},
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
  "float32 dq\n"
  "float32 ddq\n"
  "float32 cur\n"
  "float32 tau_est\n"
  "float32[2] temperature\n"
  "float32 kp\n"
  "float32 kd\n"
  "int32 error_code\n"
  "int32 warning_code\n"
  "uint32[4] reserved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__MotorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__MotorState__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 193, 193},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__MotorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__MotorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
