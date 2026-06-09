// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/DiagnosticData.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/diagnostic_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__DiagnosticData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xd7, 0x9b, 0x8b, 0x9d, 0x6e, 0x3a, 0xaf,
      0x5c, 0xb4, 0xf2, 0x07, 0x10, 0xcb, 0xf4, 0x00,
      0x4a, 0x65, 0xea, 0x08, 0x5e, 0xf3, 0x00, 0x9c,
      0xd4, 0xda, 0x9e, 0xb1, 0xbc, 0x9a, 0x69, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "h2x/msg/detail/debug_motor_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t h2x__msg__DebugMotorState__EXPECTED_HASH = {1, {
    0xf7, 0xc1, 0x22, 0x36, 0x36, 0x4f, 0xb2, 0x0e,
    0x8c, 0x2b, 0x52, 0x62, 0x69, 0x4f, 0x6b, 0xa3,
    0x83, 0xfe, 0xb3, 0xe8, 0x1a, 0x29, 0xf3, 0x84,
    0x2b, 0x29, 0x55, 0x77, 0x78, 0x7d, 0x44, 0x52,
  }};
#endif

static char h2x__msg__DiagnosticData__TYPE_NAME[] = "h2x/msg/DiagnosticData";
static char h2x__msg__DebugMotorState__TYPE_NAME[] = "h2x/msg/DebugMotorState";

// Define type names, field names, and default values
static char h2x__msg__DiagnosticData__FIELD_NAME__control_word[] = "control_word";
static char h2x__msg__DiagnosticData__FIELD_NAME__status_word[] = "status_word";
static char h2x__msg__DiagnosticData__FIELD_NAME__error_register[] = "error_register";
static char h2x__msg__DiagnosticData__FIELD_NAME__mode_of_operation[] = "mode_of_operation";
static char h2x__msg__DiagnosticData__FIELD_NAME__mode_display[] = "mode_display";
static char h2x__msg__DiagnosticData__FIELD_NAME__debug_motor_state[] = "debug_motor_state";

static rosidl_runtime_c__type_description__Field h2x__msg__DiagnosticData__FIELDS[] = {
  {
    {h2x__msg__DiagnosticData__FIELD_NAME__control_word, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DiagnosticData__FIELD_NAME__status_word, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DiagnosticData__FIELD_NAME__error_register, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DiagnosticData__FIELD_NAME__mode_of_operation, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DiagnosticData__FIELD_NAME__mode_display, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DiagnosticData__FIELD_NAME__debug_motor_state, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__msg__DebugMotorState__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__msg__DiagnosticData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {h2x__msg__DebugMotorState__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__DiagnosticData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__DiagnosticData__TYPE_NAME, 22, 22},
      {h2x__msg__DiagnosticData__FIELDS, 6, 6},
    },
    {h2x__msg__DiagnosticData__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&h2x__msg__DebugMotorState__EXPECTED_HASH, h2x__msg__DebugMotorState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = h2x__msg__DebugMotorState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 control_word\n"
  "uint16 status_word\n"
  "uint8 error_register\n"
  "int8 mode_of_operation\n"
  "int8 mode_display\n"
  "DebugMotorState debug_motor_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__DiagnosticData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__DiagnosticData__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 134, 134},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__DiagnosticData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__DiagnosticData__get_individual_type_description_source(NULL),
    sources[1] = *h2x__msg__DebugMotorState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
