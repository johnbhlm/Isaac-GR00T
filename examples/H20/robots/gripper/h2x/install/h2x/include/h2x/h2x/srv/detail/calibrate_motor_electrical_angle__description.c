// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:srv/CalibrateMotorElectricalAngle.idl
// generated code does not contain a copyright notice

#include "h2x/srv/detail/calibrate_motor_electrical_angle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__CalibrateMotorElectricalAngle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x1e, 0xd2, 0x5b, 0x13, 0xb6, 0x9b, 0x21,
      0x15, 0x18, 0x9c, 0xcd, 0xf7, 0x95, 0xe2, 0x89,
      0x03, 0x6a, 0xa9, 0xba, 0x56, 0x5d, 0x56, 0xd3,
      0x2b, 0x96, 0xa3, 0x5a, 0xb6, 0xa5, 0x82, 0x80,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__CalibrateMotorElectricalAngle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xa3, 0x0a, 0xe2, 0x6e, 0x4c, 0xf7, 0xca,
      0xb6, 0x0f, 0x22, 0x9c, 0x82, 0xb3, 0x53, 0x82,
      0x7d, 0xfd, 0x4b, 0x87, 0x55, 0xd7, 0x63, 0x04,
      0x41, 0x9e, 0x79, 0x1e, 0xc0, 0x9b, 0x7c, 0xf9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__CalibrateMotorElectricalAngle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x86, 0x85, 0xf4, 0x79, 0xe7, 0x2e, 0x56,
      0xdc, 0x22, 0xdb, 0x01, 0x4a, 0x5c, 0x50, 0x2e,
      0x5f, 0xd2, 0xc3, 0xe6, 0x17, 0x85, 0xee, 0xc1,
      0xa8, 0x09, 0x81, 0x8c, 0x0d, 0x01, 0x2c, 0x7c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__CalibrateMotorElectricalAngle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x28, 0x7b, 0xc2, 0x46, 0xc4, 0x87, 0xa1, 0xb8,
      0x01, 0xfd, 0xab, 0xa4, 0x5b, 0x84, 0x03, 0x48,
      0x67, 0x27, 0x53, 0xce, 0x69, 0x95, 0xc4, 0xd4,
      0x45, 0x94, 0x0f, 0x60, 0x4c, 0x76, 0x4a, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char h2x__srv__CalibrateMotorElectricalAngle__TYPE_NAME[] = "h2x/srv/CalibrateMotorElectricalAngle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char h2x__srv__CalibrateMotorElectricalAngle_Event__TYPE_NAME[] = "h2x/srv/CalibrateMotorElectricalAngle_Event";
static char h2x__srv__CalibrateMotorElectricalAngle_Request__TYPE_NAME[] = "h2x/srv/CalibrateMotorElectricalAngle_Request";
static char h2x__srv__CalibrateMotorElectricalAngle_Response__TYPE_NAME[] = "h2x/srv/CalibrateMotorElectricalAngle_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char h2x__srv__CalibrateMotorElectricalAngle__FIELD_NAME__request_message[] = "request_message";
static char h2x__srv__CalibrateMotorElectricalAngle__FIELD_NAME__response_message[] = "response_message";
static char h2x__srv__CalibrateMotorElectricalAngle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field h2x__srv__CalibrateMotorElectricalAngle__FIELDS[] = {
  {
    {h2x__srv__CalibrateMotorElectricalAngle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__CalibrateMotorElectricalAngle_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__CalibrateMotorElectricalAngle_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__CalibrateMotorElectricalAngle_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__CalibrateMotorElectricalAngle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__CalibrateMotorElectricalAngle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__CalibrateMotorElectricalAngle__TYPE_NAME, 37, 37},
      {h2x__srv__CalibrateMotorElectricalAngle__FIELDS, 3, 3},
    },
    {h2x__srv__CalibrateMotorElectricalAngle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__CalibrateMotorElectricalAngle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__CalibrateMotorElectricalAngle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = h2x__srv__CalibrateMotorElectricalAngle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__CalibrateMotorElectricalAngle_Request__FIELD_NAME__motor_index[] = "motor_index";

static rosidl_runtime_c__type_description__Field h2x__srv__CalibrateMotorElectricalAngle_Request__FIELDS[] = {
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Request__FIELD_NAME__motor_index, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__CalibrateMotorElectricalAngle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__CalibrateMotorElectricalAngle_Request__TYPE_NAME, 45, 45},
      {h2x__srv__CalibrateMotorElectricalAngle_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__CalibrateMotorElectricalAngle_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field h2x__srv__CalibrateMotorElectricalAngle_Response__FIELDS[] = {
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Response__FIELD_NAME__result, 6, 6},
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
h2x__srv__CalibrateMotorElectricalAngle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__CalibrateMotorElectricalAngle_Response__TYPE_NAME, 46, 46},
      {h2x__srv__CalibrateMotorElectricalAngle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__CalibrateMotorElectricalAngle_Event__FIELD_NAME__info[] = "info";
static char h2x__srv__CalibrateMotorElectricalAngle_Event__FIELD_NAME__request[] = "request";
static char h2x__srv__CalibrateMotorElectricalAngle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field h2x__srv__CalibrateMotorElectricalAngle_Event__FIELDS[] = {
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__CalibrateMotorElectricalAngle_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__CalibrateMotorElectricalAngle_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__CalibrateMotorElectricalAngle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__CalibrateMotorElectricalAngle_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__CalibrateMotorElectricalAngle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__CalibrateMotorElectricalAngle_Event__TYPE_NAME, 43, 43},
      {h2x__srv__CalibrateMotorElectricalAngle_Event__FIELDS, 3, 3},
    },
    {h2x__srv__CalibrateMotorElectricalAngle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__CalibrateMotorElectricalAngle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__CalibrateMotorElectricalAngle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "uint32 motor_index\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "int32 result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__CalibrateMotorElectricalAngle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__CalibrateMotorElectricalAngle__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__CalibrateMotorElectricalAngle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__CalibrateMotorElectricalAngle_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__CalibrateMotorElectricalAngle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__CalibrateMotorElectricalAngle_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__CalibrateMotorElectricalAngle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__CalibrateMotorElectricalAngle_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__CalibrateMotorElectricalAngle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__CalibrateMotorElectricalAngle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__CalibrateMotorElectricalAngle_Event__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__CalibrateMotorElectricalAngle_Request__get_individual_type_description_source(NULL);
    sources[4] = *h2x__srv__CalibrateMotorElectricalAngle_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__CalibrateMotorElectricalAngle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__CalibrateMotorElectricalAngle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__CalibrateMotorElectricalAngle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__CalibrateMotorElectricalAngle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__CalibrateMotorElectricalAngle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__CalibrateMotorElectricalAngle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__CalibrateMotorElectricalAngle_Request__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__CalibrateMotorElectricalAngle_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
