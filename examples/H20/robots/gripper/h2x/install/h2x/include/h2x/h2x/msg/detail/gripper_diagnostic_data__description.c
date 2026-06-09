// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/GripperDiagnosticData.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/gripper_diagnostic_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__GripperDiagnosticData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0x96, 0x92, 0xdf, 0x82, 0x14, 0x11, 0xff,
      0xfe, 0xa9, 0x36, 0xd4, 0x9f, 0x36, 0xab, 0xb3,
      0x42, 0x03, 0xa4, 0x4f, 0x6c, 0x53, 0xcb, 0x5a,
      0xd8, 0x20, 0xb0, 0x0d, 0xf8, 0x3a, 0x12, 0x8a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__GripperDiagnosticData__TYPE_NAME[] = "h2x/msg/GripperDiagnosticData";

// Define type names, field names, and default values
static char h2x__msg__GripperDiagnosticData__FIELD_NAME__mode_of_operation[] = "mode_of_operation";
static char h2x__msg__GripperDiagnosticData__FIELD_NAME__mode_display[] = "mode_display";

static rosidl_runtime_c__type_description__Field h2x__msg__GripperDiagnosticData__FIELDS[] = {
  {
    {h2x__msg__GripperDiagnosticData__FIELD_NAME__mode_of_operation, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__GripperDiagnosticData__FIELD_NAME__mode_display, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__GripperDiagnosticData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__GripperDiagnosticData__TYPE_NAME, 29, 29},
      {h2x__msg__GripperDiagnosticData__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 mode_of_operation\n"
  "int8 mode_display";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__GripperDiagnosticData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__GripperDiagnosticData__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__GripperDiagnosticData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__GripperDiagnosticData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
