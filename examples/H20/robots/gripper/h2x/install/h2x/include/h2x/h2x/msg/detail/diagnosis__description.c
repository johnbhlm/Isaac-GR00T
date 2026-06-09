// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/Diagnosis.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/diagnosis__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__Diagnosis__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x30, 0xd4, 0xdc, 0xb0, 0x35, 0x80, 0x87,
      0x18, 0xb1, 0x7d, 0x11, 0xf8, 0x4b, 0x25, 0x5e,
      0xfb, 0x4c, 0xba, 0x6d, 0x08, 0xb1, 0xd7, 0x56,
      0x53, 0x46, 0xfa, 0x6e, 0xd0, 0xb1, 0xce, 0xa3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "h2x/msg/detail/debug_motor_state__functions.h"
#include "h2x/msg/detail/debug_imu_state__functions.h"
#include "h2x/msg/detail/debug_cdu_state__functions.h"
#include "h2x/msg/detail/diagnostic_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t h2x__msg__DebugCDUState__EXPECTED_HASH = {1, {
    0x26, 0x30, 0x55, 0xe7, 0xbc, 0xc4, 0xc6, 0x4f,
    0x4d, 0x96, 0xa8, 0xf7, 0x26, 0xe2, 0x3d, 0xb7,
    0x18, 0xe6, 0x31, 0x19, 0x62, 0xbf, 0x90, 0x45,
    0x2e, 0x4b, 0xbe, 0x7e, 0xfd, 0xda, 0xa7, 0x1c,
  }};
static const rosidl_type_hash_t h2x__msg__DebugIMUState__EXPECTED_HASH = {1, {
    0x06, 0xf6, 0x43, 0xac, 0x8f, 0x92, 0x40, 0x52,
    0x66, 0xc7, 0x95, 0x85, 0x42, 0x08, 0xc1, 0x88,
    0x22, 0x85, 0x8b, 0xf7, 0xc4, 0x27, 0x81, 0x03,
    0x66, 0xb3, 0xf3, 0x66, 0xd0, 0x2a, 0xec, 0xfd,
  }};
static const rosidl_type_hash_t h2x__msg__DebugMotorState__EXPECTED_HASH = {1, {
    0xf7, 0xc1, 0x22, 0x36, 0x36, 0x4f, 0xb2, 0x0e,
    0x8c, 0x2b, 0x52, 0x62, 0x69, 0x4f, 0x6b, 0xa3,
    0x83, 0xfe, 0xb3, 0xe8, 0x1a, 0x29, 0xf3, 0x84,
    0x2b, 0x29, 0x55, 0x77, 0x78, 0x7d, 0x44, 0x52,
  }};
static const rosidl_type_hash_t h2x__msg__DiagnosticData__EXPECTED_HASH = {1, {
    0xef, 0xd7, 0x9b, 0x8b, 0x9d, 0x6e, 0x3a, 0xaf,
    0x5c, 0xb4, 0xf2, 0x07, 0x10, 0xcb, 0xf4, 0x00,
    0x4a, 0x65, 0xea, 0x08, 0x5e, 0xf3, 0x00, 0x9c,
    0xd4, 0xda, 0x9e, 0xb1, 0xbc, 0x9a, 0x69, 0x4a,
  }};
#endif

static char h2x__msg__Diagnosis__TYPE_NAME[] = "h2x/msg/Diagnosis";
static char h2x__msg__DebugCDUState__TYPE_NAME[] = "h2x/msg/DebugCDUState";
static char h2x__msg__DebugIMUState__TYPE_NAME[] = "h2x/msg/DebugIMUState";
static char h2x__msg__DebugMotorState__TYPE_NAME[] = "h2x/msg/DebugMotorState";
static char h2x__msg__DiagnosticData__TYPE_NAME[] = "h2x/msg/DiagnosticData";

// Define type names, field names, and default values
static char h2x__msg__Diagnosis__FIELD_NAME__is_ds402[] = "is_ds402";
static char h2x__msg__Diagnosis__FIELD_NAME__ds402_data[] = "ds402_data";
static char h2x__msg__Diagnosis__FIELD_NAME__debug_imu_state[] = "debug_imu_state";
static char h2x__msg__Diagnosis__FIELD_NAME__debug_cdu_state[] = "debug_cdu_state";
static char h2x__msg__Diagnosis__FIELD_NAME__error_code[] = "error_code";
static char h2x__msg__Diagnosis__FIELD_NAME__warning_code[] = "warning_code";
static char h2x__msg__Diagnosis__FIELD_NAME__cdu_error_code[] = "cdu_error_code";
static char h2x__msg__Diagnosis__FIELD_NAME__cdu_warning_code[] = "cdu_warning_code";
static char h2x__msg__Diagnosis__FIELD_NAME__pcu_error_code[] = "pcu_error_code";
static char h2x__msg__Diagnosis__FIELD_NAME__pcu_warning_code[] = "pcu_warning_code";
static char h2x__msg__Diagnosis__FIELD_NAME__imu_error_code[] = "imu_error_code";
static char h2x__msg__Diagnosis__FIELD_NAME__imu_warning_code[] = "imu_warning_code";
static char h2x__msg__Diagnosis__FIELD_NAME__battery_error_code[] = "battery_error_code";
static char h2x__msg__Diagnosis__FIELD_NAME__battery_warning_code[] = "battery_warning_code";
static char h2x__msg__Diagnosis__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field h2x__msg__Diagnosis__FIELDS[] = {
  {
    {h2x__msg__Diagnosis__FIELD_NAME__is_ds402, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      37,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__ds402_data, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      37,
      0,
      {h2x__msg__DiagnosticData__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__debug_imu_state, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {h2x__msg__DebugIMUState__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__debug_cdu_state, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__msg__DebugCDUState__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      37,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__warning_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      37,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__cdu_error_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__cdu_warning_code, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__pcu_error_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__pcu_warning_code, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__imu_error_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__imu_warning_code, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__battery_error_code, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__battery_warning_code, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__Diagnosis__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__msg__Diagnosis__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {h2x__msg__DebugCDUState__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DiagnosticData__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__Diagnosis__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__Diagnosis__TYPE_NAME, 17, 17},
      {h2x__msg__Diagnosis__FIELDS, 15, 15},
    },
    {h2x__msg__Diagnosis__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&h2x__msg__DebugCDUState__EXPECTED_HASH, h2x__msg__DebugCDUState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = h2x__msg__DebugCDUState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&h2x__msg__DebugIMUState__EXPECTED_HASH, h2x__msg__DebugIMUState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = h2x__msg__DebugIMUState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&h2x__msg__DebugMotorState__EXPECTED_HASH, h2x__msg__DebugMotorState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = h2x__msg__DebugMotorState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&h2x__msg__DiagnosticData__EXPECTED_HASH, h2x__msg__DiagnosticData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = h2x__msg__DiagnosticData__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool[37] is_ds402\n"
  "DiagnosticData[37] ds402_data\n"
  "DebugIMUState[2] debug_imu_state\n"
  "DebugCDUState    debug_cdu_state\n"
  "int32[37] error_code\n"
  "int32[37] warning_code\n"
  "int32 cdu_error_code\n"
  "int32 cdu_warning_code\n"
  "int32 pcu_error_code\n"
  "int32 pcu_warning_code\n"
  "int32[2] imu_error_code\n"
  "int32[2] imu_warning_code\n"
  "int32 battery_error_code\n"
  "int32 battery_warning_code\n"
  "uint32 crc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__Diagnosis__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__Diagnosis__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 358, 358},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__Diagnosis__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__Diagnosis__get_individual_type_description_source(NULL),
    sources[1] = *h2x__msg__DebugCDUState__get_individual_type_description_source(NULL);
    sources[2] = *h2x__msg__DebugIMUState__get_individual_type_description_source(NULL);
    sources[3] = *h2x__msg__DebugMotorState__get_individual_type_description_source(NULL);
    sources[4] = *h2x__msg__DiagnosticData__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
