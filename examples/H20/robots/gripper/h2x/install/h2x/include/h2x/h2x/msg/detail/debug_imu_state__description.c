// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/DebugIMUState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/debug_imu_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__DebugIMUState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0xf6, 0x43, 0xac, 0x8f, 0x92, 0x40, 0x52,
      0x66, 0xc7, 0x95, 0x85, 0x42, 0x08, 0xc1, 0x88,
      0x22, 0x85, 0x8b, 0xf7, 0xc4, 0x27, 0x81, 0x03,
      0x66, 0xb3, 0xf3, 0x66, 0xd0, 0x2a, 0xec, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__DebugIMUState__TYPE_NAME[] = "h2x/msg/DebugIMUState";

// Define type names, field names, and default values
static char h2x__msg__DebugIMUState__FIELD_NAME__slave_id[] = "slave_id";
static char h2x__msg__DebugIMUState__FIELD_NAME__frame_counter[] = "frame_counter";
static char h2x__msg__DebugIMUState__FIELD_NAME__status_word[] = "status_word";
static char h2x__msg__DebugIMUState__FIELD_NAME__temperature[] = "temperature";
static char h2x__msg__DebugIMUState__FIELD_NAME__euler_angle_roll[] = "euler_angle_roll";
static char h2x__msg__DebugIMUState__FIELD_NAME__eluer_angle_pitch[] = "eluer_angle_pitch";
static char h2x__msg__DebugIMUState__FIELD_NAME__eluer_angle_yaw[] = "eluer_angle_yaw";
static char h2x__msg__DebugIMUState__FIELD_NAME__q1[] = "q1";
static char h2x__msg__DebugIMUState__FIELD_NAME__q2[] = "q2";
static char h2x__msg__DebugIMUState__FIELD_NAME__q3[] = "q3";
static char h2x__msg__DebugIMUState__FIELD_NAME__q4[] = "q4";
static char h2x__msg__DebugIMUState__FIELD_NAME__accx[] = "accx";
static char h2x__msg__DebugIMUState__FIELD_NAME__accy[] = "accy";
static char h2x__msg__DebugIMUState__FIELD_NAME__accz[] = "accz";
static char h2x__msg__DebugIMUState__FIELD_NAME__angular_vel_x[] = "angular_vel_x";
static char h2x__msg__DebugIMUState__FIELD_NAME__angular_vel_y[] = "angular_vel_y";
static char h2x__msg__DebugIMUState__FIELD_NAME__angular_vel_z[] = "angular_vel_z";
static char h2x__msg__DebugIMUState__FIELD_NAME__mag_x[] = "mag_x";
static char h2x__msg__DebugIMUState__FIELD_NAME__mag_y[] = "mag_y";
static char h2x__msg__DebugIMUState__FIELD_NAME__mag_z[] = "mag_z";
static char h2x__msg__DebugIMUState__FIELD_NAME__txobject_index[] = "txobject_index";
static char h2x__msg__DebugIMUState__FIELD_NAME__txobject_data[] = "txobject_data";

static rosidl_runtime_c__type_description__Field h2x__msg__DebugIMUState__FIELDS[] = {
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__slave_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__frame_counter, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__status_word, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__euler_angle_roll, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__eluer_angle_pitch, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__eluer_angle_yaw, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__q1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__q2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__q3, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__q4, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__accx, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__accy, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__accz, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__angular_vel_x, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__angular_vel_y, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__angular_vel_z, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__mag_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__mag_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__mag_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__txobject_index, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugIMUState__FIELD_NAME__txobject_data, 13, 13},
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
h2x__msg__DebugIMUState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__DebugIMUState__TYPE_NAME, 21, 21},
      {h2x__msg__DebugIMUState__FIELDS, 22, 22},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 slave_id\n"
  "uint8 frame_counter\n"
  "uint16 status_word\n"
  "float32 temperature\n"
  "float32 euler_angle_roll\n"
  "float32 eluer_angle_pitch\n"
  "float32 eluer_angle_yaw\n"
  "float32 q1\n"
  "float32 q2\n"
  "float32 q3\n"
  "float32 q4\n"
  "float32 accx\n"
  "float32 accy\n"
  "float32 accz\n"
  "float32 angular_vel_x\n"
  "float32 angular_vel_y\n"
  "float32 angular_vel_z\n"
  "int16 mag_x\n"
  "int16 mag_y\n"
  "int16 mag_z\n"
  "int32 txobject_index\n"
  "int32 txobject_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__DebugIMUState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__DebugIMUState__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 374, 374},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__DebugIMUState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__DebugIMUState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
