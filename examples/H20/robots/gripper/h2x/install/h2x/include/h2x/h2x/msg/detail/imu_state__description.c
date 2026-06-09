// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/IMUState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/imu_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__IMUState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x2b, 0xed, 0x63, 0xc1, 0x14, 0x0c, 0xa3,
      0x68, 0x85, 0xc1, 0x97, 0x33, 0x80, 0xb3, 0x8c,
      0x0e, 0xd8, 0xbe, 0x5a, 0xcf, 0x01, 0xf0, 0x4a,
      0x1d, 0xeb, 0x8a, 0x7b, 0xfa, 0x66, 0x6f, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__IMUState__TYPE_NAME[] = "h2x/msg/IMUState";

// Define type names, field names, and default values
static char h2x__msg__IMUState__FIELD_NAME__quaternion[] = "quaternion";
static char h2x__msg__IMUState__FIELD_NAME__gyroscope[] = "gyroscope";
static char h2x__msg__IMUState__FIELD_NAME__accelerometer[] = "accelerometer";
static char h2x__msg__IMUState__FIELD_NAME__rpy[] = "rpy";
static char h2x__msg__IMUState__FIELD_NAME__temperature[] = "temperature";
static char h2x__msg__IMUState__FIELD_NAME__error_code[] = "error_code";
static char h2x__msg__IMUState__FIELD_NAME__warning_code[] = "warning_code";

static rosidl_runtime_c__type_description__Field h2x__msg__IMUState__FIELDS[] = {
  {
    {h2x__msg__IMUState__FIELD_NAME__quaternion, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__IMUState__FIELD_NAME__gyroscope, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__IMUState__FIELD_NAME__accelerometer, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__IMUState__FIELD_NAME__rpy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__IMUState__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__IMUState__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__IMUState__FIELD_NAME__warning_code, 12, 12},
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
h2x__msg__IMUState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__IMUState__TYPE_NAME, 16, 16},
      {h2x__msg__IMUState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[4] quaternion\n"
  "float32[3] gyroscope\n"
  "float32[3] accelerometer\n"
  "float32[3] rpy\n"
  "float32 temperature\n"
  "int32 error_code\n"
  "int32 warning_code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__IMUState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__IMUState__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 139, 139},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__IMUState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__IMUState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
