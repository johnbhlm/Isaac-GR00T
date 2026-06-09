// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/LowState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/low_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__LowState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0x73, 0x56, 0xa7, 0xd7, 0xb5, 0x4c, 0x89,
      0x0e, 0xf1, 0xfb, 0x13, 0x4d, 0x74, 0x70, 0xc1,
      0x7c, 0x96, 0xa8, 0x9e, 0x96, 0x22, 0x92, 0xc6,
      0x91, 0xff, 0x28, 0xfc, 0xc3, 0xb4, 0x8d, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "h2x/msg/detail/battery_state__functions.h"
#include "h2x/msg/detail/imu_state__functions.h"
#include "h2x/msg/detail/cdu_state__functions.h"
#include "h2x/msg/detail/pcu_state__functions.h"
#include "h2x/msg/detail/motor_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t h2x__msg__BatteryState__EXPECTED_HASH = {1, {
    0x0a, 0xc8, 0xad, 0x93, 0x2f, 0x3f, 0x50, 0x8b,
    0x99, 0x53, 0x1d, 0x8c, 0xf2, 0x36, 0xad, 0x77,
    0xfd, 0x0c, 0x0b, 0x55, 0xea, 0x91, 0x9a, 0x93,
    0x4f, 0xc6, 0x87, 0xca, 0x1a, 0x04, 0xf1, 0xed,
  }};
static const rosidl_type_hash_t h2x__msg__CDUState__EXPECTED_HASH = {1, {
    0x0a, 0x65, 0xfe, 0x9c, 0x4f, 0x7d, 0xcf, 0x3d,
    0x75, 0x04, 0x80, 0xef, 0xa4, 0x78, 0x67, 0xf5,
    0x59, 0xc4, 0xf6, 0x26, 0x26, 0x50, 0xeb, 0xf5,
    0x5a, 0x19, 0x67, 0x42, 0x9c, 0x7e, 0xb6, 0x2f,
  }};
static const rosidl_type_hash_t h2x__msg__IMUState__EXPECTED_HASH = {1, {
    0x19, 0x2b, 0xed, 0x63, 0xc1, 0x14, 0x0c, 0xa3,
    0x68, 0x85, 0xc1, 0x97, 0x33, 0x80, 0xb3, 0x8c,
    0x0e, 0xd8, 0xbe, 0x5a, 0xcf, 0x01, 0xf0, 0x4a,
    0x1d, 0xeb, 0x8a, 0x7b, 0xfa, 0x66, 0x6f, 0x0b,
  }};
static const rosidl_type_hash_t h2x__msg__MotorState__EXPECTED_HASH = {1, {
    0xc1, 0x67, 0x4d, 0xdd, 0x41, 0x1e, 0x28, 0x3c,
    0x57, 0xcb, 0xfe, 0x98, 0x1c, 0x63, 0x3c, 0xc0,
    0xa4, 0x91, 0xcf, 0x67, 0x31, 0x58, 0x2b, 0x37,
    0x90, 0x40, 0xd1, 0x39, 0xbb, 0xc7, 0x67, 0x82,
  }};
static const rosidl_type_hash_t h2x__msg__PCUState__EXPECTED_HASH = {1, {
    0xb8, 0x16, 0x46, 0x32, 0x52, 0x78, 0x32, 0xed,
    0xfe, 0x9c, 0x05, 0x7d, 0x24, 0x76, 0x5e, 0x87,
    0xd9, 0x77, 0x11, 0x89, 0x5d, 0x73, 0x98, 0xc8,
    0xa3, 0xc0, 0x2b, 0x3a, 0x91, 0x08, 0x7a, 0xb9,
  }};
#endif

static char h2x__msg__LowState__TYPE_NAME[] = "h2x/msg/LowState";
static char h2x__msg__BatteryState__TYPE_NAME[] = "h2x/msg/BatteryState";
static char h2x__msg__CDUState__TYPE_NAME[] = "h2x/msg/CDUState";
static char h2x__msg__IMUState__TYPE_NAME[] = "h2x/msg/IMUState";
static char h2x__msg__MotorState__TYPE_NAME[] = "h2x/msg/MotorState";
static char h2x__msg__PCUState__TYPE_NAME[] = "h2x/msg/PCUState";

// Define type names, field names, and default values
static char h2x__msg__LowState__FIELD_NAME__version[] = "version";
static char h2x__msg__LowState__FIELD_NAME__mode_pr[] = "mode_pr";
static char h2x__msg__LowState__FIELD_NAME__tick[] = "tick";
static char h2x__msg__LowState__FIELD_NAME__imu_state[] = "imu_state";
static char h2x__msg__LowState__FIELD_NAME__motor_state[] = "motor_state";
static char h2x__msg__LowState__FIELD_NAME__has_battery_info[] = "has_battery_info";
static char h2x__msg__LowState__FIELD_NAME__battery_info[] = "battery_info";
static char h2x__msg__LowState__FIELD_NAME__ground_count[] = "ground_count";
static char h2x__msg__LowState__FIELD_NAME__ground_signal[] = "ground_signal";
static char h2x__msg__LowState__FIELD_NAME__time_seconds[] = "time_seconds";
static char h2x__msg__LowState__FIELD_NAME__is_pcu_valid[] = "is_pcu_valid";
static char h2x__msg__LowState__FIELD_NAME__pcu_state[] = "pcu_state";
static char h2x__msg__LowState__FIELD_NAME__is_cdu_valid[] = "is_cdu_valid";
static char h2x__msg__LowState__FIELD_NAME__cdu_state[] = "cdu_state";
static char h2x__msg__LowState__FIELD_NAME__is_data_valid[] = "is_data_valid";
static char h2x__msg__LowState__FIELD_NAME__error_code[] = "error_code";
static char h2x__msg__LowState__FIELD_NAME__warning_code[] = "warning_code";
static char h2x__msg__LowState__FIELD_NAME__reserved[] = "reserved";
static char h2x__msg__LowState__FIELD_NAME__crc[] = "crc";

static rosidl_runtime_c__type_description__Field h2x__msg__LowState__FIELDS[] = {
  {
    {h2x__msg__LowState__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__mode_pr, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__tick, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__imu_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {h2x__msg__IMUState__TYPE_NAME, 16, 16},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__motor_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      37,
      0,
      {h2x__msg__MotorState__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__has_battery_info, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__battery_info, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__msg__BatteryState__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__ground_count, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__ground_signal, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__time_seconds, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__is_pcu_valid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__pcu_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__msg__PCUState__TYPE_NAME, 16, 16},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__is_cdu_valid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__cdu_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__msg__CDUState__TYPE_NAME, 16, 16},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__is_data_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__warning_code, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__reserved, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__LowState__FIELD_NAME__crc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__msg__LowState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {h2x__msg__BatteryState__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {h2x__msg__CDUState__TYPE_NAME, 16, 16},
    {NULL, 0, 0},
  },
  {
    {h2x__msg__IMUState__TYPE_NAME, 16, 16},
    {NULL, 0, 0},
  },
  {
    {h2x__msg__MotorState__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {h2x__msg__PCUState__TYPE_NAME, 16, 16},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__LowState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__LowState__TYPE_NAME, 16, 16},
      {h2x__msg__LowState__FIELDS, 19, 19},
    },
    {h2x__msg__LowState__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&h2x__msg__BatteryState__EXPECTED_HASH, h2x__msg__BatteryState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = h2x__msg__BatteryState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&h2x__msg__CDUState__EXPECTED_HASH, h2x__msg__CDUState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = h2x__msg__CDUState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&h2x__msg__IMUState__EXPECTED_HASH, h2x__msg__IMUState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = h2x__msg__IMUState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&h2x__msg__MotorState__EXPECTED_HASH, h2x__msg__MotorState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = h2x__msg__MotorState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&h2x__msg__PCUState__EXPECTED_HASH, h2x__msg__PCUState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = h2x__msg__PCUState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32[2] version\n"
  "uint8 mode_pr\n"
  "uint32 tick\n"
  "IMUState[2] imu_state\n"
  "MotorState[37] motor_state\n"
  "bool has_battery_info\n"
  "BatteryState battery_info\n"
  "uint16 ground_count\n"
  "uint8[4] ground_signal\n"
  "int32 time_seconds\n"
  "uint8 is_pcu_valid\n"
  "PCUState pcu_state\n"
  "uint8 is_cdu_valid\n"
  "CDUState cdu_state\n"
  "uint8 is_data_valid\n"
  "int32 error_code\n"
  "int32 warning_code\n"
  "uint32[4] reserved\n"
  "uint32 crc";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__LowState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__LowState__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 365, 365},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__LowState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__LowState__get_individual_type_description_source(NULL),
    sources[1] = *h2x__msg__BatteryState__get_individual_type_description_source(NULL);
    sources[2] = *h2x__msg__CDUState__get_individual_type_description_source(NULL);
    sources[3] = *h2x__msg__IMUState__get_individual_type_description_source(NULL);
    sources[4] = *h2x__msg__MotorState__get_individual_type_description_source(NULL);
    sources[5] = *h2x__msg__PCUState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
