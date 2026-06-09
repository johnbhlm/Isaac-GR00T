// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/CDUState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/cdu_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__CDUState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x65, 0xfe, 0x9c, 0x4f, 0x7d, 0xcf, 0x3d,
      0x75, 0x04, 0x80, 0xef, 0xa4, 0x78, 0x67, 0xf5,
      0x59, 0xc4, 0xf6, 0x26, 0x26, 0x50, 0xeb, 0xf5,
      0x5a, 0x19, 0x67, 0x42, 0x9c, 0x7e, 0xb6, 0x2f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__CDUState__TYPE_NAME[] = "h2x/msg/CDUState";

// Define type names, field names, and default values
static char h2x__msg__CDUState__FIELD_NAME__error_code[] = "error_code";
static char h2x__msg__CDUState__FIELD_NAME__warning_code[] = "warning_code";

static rosidl_runtime_c__type_description__Field h2x__msg__CDUState__FIELDS[] = {
  {
    {h2x__msg__CDUState__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__CDUState__FIELD_NAME__warning_code, 12, 12},
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
h2x__msg__CDUState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__CDUState__TYPE_NAME, 16, 16},
      {h2x__msg__CDUState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 error_code\n"
  "int32 warning_code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__CDUState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__CDUState__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__CDUState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__CDUState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
