// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:srv/GetJointHardLimit.idl
// generated code does not contain a copyright notice

#include "h2x/srv/detail/get_joint_hard_limit__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GetJointHardLimit__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xf1, 0x1c, 0x4c, 0xea, 0xc8, 0x37, 0xe5,
      0xcb, 0x68, 0x5c, 0xb1, 0xca, 0x33, 0x06, 0xc6,
      0x97, 0x74, 0x22, 0xf8, 0x02, 0x16, 0xa3, 0x2f,
      0x36, 0x27, 0x25, 0x0c, 0x88, 0xfc, 0x1b, 0x83,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GetJointHardLimit_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0x61, 0xd8, 0x94, 0xdc, 0x5c, 0xc6, 0x46,
      0x7d, 0x66, 0xd7, 0x72, 0x18, 0x14, 0x2d, 0xba,
      0xc8, 0x53, 0x0e, 0x4f, 0x38, 0x6f, 0x6a, 0x17,
      0x72, 0x39, 0x69, 0x3a, 0x75, 0xeb, 0x65, 0xaf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GetJointHardLimit_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0xc3, 0xb6, 0xb2, 0xf6, 0x72, 0x15, 0x21,
      0x06, 0x22, 0x48, 0xd1, 0x34, 0x0a, 0x6d, 0xbb,
      0x97, 0xdd, 0x3d, 0x2e, 0xca, 0xb5, 0xa8, 0xf1,
      0x7d, 0x7a, 0x70, 0x88, 0xcb, 0xf6, 0x69, 0x4a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GetJointHardLimit_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x08, 0xad, 0x27, 0x8b, 0xe8, 0xf4, 0x08,
      0xb4, 0x98, 0x02, 0x16, 0xbc, 0xc0, 0x44, 0x9c,
      0xd0, 0x5a, 0x45, 0x83, 0x68, 0x43, 0xe4, 0xd4,
      0x5d, 0x7d, 0xd9, 0x5a, 0xab, 0x3b, 0xb7, 0x3f,
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

static char h2x__srv__GetJointHardLimit__TYPE_NAME[] = "h2x/srv/GetJointHardLimit";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char h2x__srv__GetJointHardLimit_Event__TYPE_NAME[] = "h2x/srv/GetJointHardLimit_Event";
static char h2x__srv__GetJointHardLimit_Request__TYPE_NAME[] = "h2x/srv/GetJointHardLimit_Request";
static char h2x__srv__GetJointHardLimit_Response__TYPE_NAME[] = "h2x/srv/GetJointHardLimit_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char h2x__srv__GetJointHardLimit__FIELD_NAME__request_message[] = "request_message";
static char h2x__srv__GetJointHardLimit__FIELD_NAME__response_message[] = "response_message";
static char h2x__srv__GetJointHardLimit__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field h2x__srv__GetJointHardLimit__FIELDS[] = {
  {
    {h2x__srv__GetJointHardLimit__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__GetJointHardLimit_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__GetJointHardLimit_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__GetJointHardLimit_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__GetJointHardLimit__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__GetJointHardLimit__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GetJointHardLimit__TYPE_NAME, 25, 25},
      {h2x__srv__GetJointHardLimit__FIELDS, 3, 3},
    },
    {h2x__srv__GetJointHardLimit__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__GetJointHardLimit_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__GetJointHardLimit_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = h2x__srv__GetJointHardLimit_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__GetJointHardLimit_Request__FIELD_NAME__motor_index[] = "motor_index";

static rosidl_runtime_c__type_description__Field h2x__srv__GetJointHardLimit_Request__FIELDS[] = {
  {
    {h2x__srv__GetJointHardLimit_Request__FIELD_NAME__motor_index, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__GetJointHardLimit_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GetJointHardLimit_Request__TYPE_NAME, 33, 33},
      {h2x__srv__GetJointHardLimit_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__GetJointHardLimit_Response__FIELD_NAME__result[] = "result";
static char h2x__srv__GetJointHardLimit_Response__FIELD_NAME__min_position[] = "min_position";
static char h2x__srv__GetJointHardLimit_Response__FIELD_NAME__max_position[] = "max_position";

static rosidl_runtime_c__type_description__Field h2x__srv__GetJointHardLimit_Response__FIELDS[] = {
  {
    {h2x__srv__GetJointHardLimit_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Response__FIELD_NAME__min_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Response__FIELD_NAME__max_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__GetJointHardLimit_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GetJointHardLimit_Response__TYPE_NAME, 34, 34},
      {h2x__srv__GetJointHardLimit_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__GetJointHardLimit_Event__FIELD_NAME__info[] = "info";
static char h2x__srv__GetJointHardLimit_Event__FIELD_NAME__request[] = "request";
static char h2x__srv__GetJointHardLimit_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field h2x__srv__GetJointHardLimit_Event__FIELDS[] = {
  {
    {h2x__srv__GetJointHardLimit_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__GetJointHardLimit_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__GetJointHardLimit_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__GetJointHardLimit_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GetJointHardLimit_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__GetJointHardLimit_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GetJointHardLimit_Event__TYPE_NAME, 31, 31},
      {h2x__srv__GetJointHardLimit_Event__FIELDS, 3, 3},
    },
    {h2x__srv__GetJointHardLimit_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__GetJointHardLimit_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__GetJointHardLimit_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32[] motor_index        # \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe7\\x9a\\x84\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe7\\xb4\\xa2\\xe5\\xbc\\x95\\xe6\\x95\\xb0\\xe7\\xbb\\x84\n"
  "---\n"
  "int32 result                # \\xe6\\x93\\x8d\\xe4\\xbd\\x9c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\n"
  "float64[] min_position      # \\xe5\\xaf\\xb9\\xe5\\xba\\x94\\xe7\\xa1\\xac\\xe9\\x99\\x90\\xe4\\xbd\\x8d\\xe7\\x9a\\x84\\xe4\\xb8\\x8b\\xe9\\x99\\x90\\xe6\\x95\\xb0\\xe7\\xbb\\x84\n"
  "float64[] max_position      # \\xe5\\xaf\\xb9\\xe5\\xba\\x94\\xe7\\xa1\\xac\\xe9\\x99\\x90\\xe4\\xbd\\x8d\\xe7\\x9a\\x84\\xe4\\xb8\\x8a\\xe9\\x99\\x90\\xe6\\x95\\xb0\\xe7\\xbb\\x84";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GetJointHardLimit__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GetJointHardLimit__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 162, 162},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GetJointHardLimit_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GetJointHardLimit_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GetJointHardLimit_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GetJointHardLimit_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GetJointHardLimit_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GetJointHardLimit_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GetJointHardLimit__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GetJointHardLimit__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__GetJointHardLimit_Event__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__GetJointHardLimit_Request__get_individual_type_description_source(NULL);
    sources[4] = *h2x__srv__GetJointHardLimit_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GetJointHardLimit_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GetJointHardLimit_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GetJointHardLimit_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GetJointHardLimit_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GetJointHardLimit_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GetJointHardLimit_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__GetJointHardLimit_Request__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__GetJointHardLimit_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
