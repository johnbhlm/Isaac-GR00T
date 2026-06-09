// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:srv/IMUVerticalInstallationSet.idl
// generated code does not contain a copyright notice

#include "h2x/srv/detail/imu_vertical_installation_set__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__IMUVerticalInstallationSet__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0xba, 0x90, 0xc4, 0x26, 0x58, 0xc8, 0x84,
      0xd5, 0x53, 0x29, 0x41, 0xb9, 0xb8, 0xb6, 0x40,
      0xf6, 0xfd, 0xa0, 0xe9, 0x02, 0x99, 0x3a, 0x04,
      0x25, 0x43, 0x29, 0x86, 0x29, 0x24, 0x70, 0x92,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__IMUVerticalInstallationSet_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x1b, 0x71, 0xd3, 0xff, 0x4b, 0xc4, 0x48,
      0x1e, 0x2f, 0x2c, 0x04, 0xdd, 0xc5, 0x3e, 0x49,
      0xd5, 0x2c, 0x75, 0x81, 0xa5, 0x06, 0xea, 0x86,
      0x96, 0x50, 0xe6, 0xe6, 0xd8, 0x41, 0xf1, 0x7f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__IMUVerticalInstallationSet_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x6e, 0x76, 0x2e, 0xc3, 0xed, 0xd0, 0x75,
      0x3d, 0x00, 0x71, 0xe4, 0x45, 0xf0, 0x70, 0xde,
      0x93, 0xf9, 0xef, 0xf5, 0x50, 0xd4, 0xb6, 0x13,
      0x1e, 0x01, 0x0c, 0x4a, 0x78, 0xa4, 0xd3, 0x07,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__IMUVerticalInstallationSet_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0x56, 0xc1, 0x9e, 0x8c, 0x10, 0xa6, 0xe2,
      0x9e, 0x0f, 0x5c, 0x9b, 0x71, 0x58, 0xca, 0x04,
      0x66, 0xe4, 0x91, 0x89, 0x57, 0x20, 0x21, 0xa3,
      0xe3, 0x8c, 0x24, 0x1b, 0xa7, 0xd0, 0x92, 0x99,
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

static char h2x__srv__IMUVerticalInstallationSet__TYPE_NAME[] = "h2x/srv/IMUVerticalInstallationSet";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char h2x__srv__IMUVerticalInstallationSet_Event__TYPE_NAME[] = "h2x/srv/IMUVerticalInstallationSet_Event";
static char h2x__srv__IMUVerticalInstallationSet_Request__TYPE_NAME[] = "h2x/srv/IMUVerticalInstallationSet_Request";
static char h2x__srv__IMUVerticalInstallationSet_Response__TYPE_NAME[] = "h2x/srv/IMUVerticalInstallationSet_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char h2x__srv__IMUVerticalInstallationSet__FIELD_NAME__request_message[] = "request_message";
static char h2x__srv__IMUVerticalInstallationSet__FIELD_NAME__response_message[] = "response_message";
static char h2x__srv__IMUVerticalInstallationSet__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field h2x__srv__IMUVerticalInstallationSet__FIELDS[] = {
  {
    {h2x__srv__IMUVerticalInstallationSet__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__IMUVerticalInstallationSet_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__IMUVerticalInstallationSet_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__IMUVerticalInstallationSet_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__IMUVerticalInstallationSet__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__IMUVerticalInstallationSet__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__IMUVerticalInstallationSet__TYPE_NAME, 34, 34},
      {h2x__srv__IMUVerticalInstallationSet__FIELDS, 3, 3},
    },
    {h2x__srv__IMUVerticalInstallationSet__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__IMUVerticalInstallationSet_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__IMUVerticalInstallationSet_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = h2x__srv__IMUVerticalInstallationSet_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__IMUVerticalInstallationSet_Request__FIELD_NAME__imu_index[] = "imu_index";

static rosidl_runtime_c__type_description__Field h2x__srv__IMUVerticalInstallationSet_Request__FIELDS[] = {
  {
    {h2x__srv__IMUVerticalInstallationSet_Request__FIELD_NAME__imu_index, 9, 9},
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
h2x__srv__IMUVerticalInstallationSet_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__IMUVerticalInstallationSet_Request__TYPE_NAME, 42, 42},
      {h2x__srv__IMUVerticalInstallationSet_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__IMUVerticalInstallationSet_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field h2x__srv__IMUVerticalInstallationSet_Response__FIELDS[] = {
  {
    {h2x__srv__IMUVerticalInstallationSet_Response__FIELD_NAME__result, 6, 6},
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
h2x__srv__IMUVerticalInstallationSet_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__IMUVerticalInstallationSet_Response__TYPE_NAME, 43, 43},
      {h2x__srv__IMUVerticalInstallationSet_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__IMUVerticalInstallationSet_Event__FIELD_NAME__info[] = "info";
static char h2x__srv__IMUVerticalInstallationSet_Event__FIELD_NAME__request[] = "request";
static char h2x__srv__IMUVerticalInstallationSet_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field h2x__srv__IMUVerticalInstallationSet_Event__FIELDS[] = {
  {
    {h2x__srv__IMUVerticalInstallationSet_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__IMUVerticalInstallationSet_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__IMUVerticalInstallationSet_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__IMUVerticalInstallationSet_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__IMUVerticalInstallationSet_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__IMUVerticalInstallationSet_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__IMUVerticalInstallationSet_Event__TYPE_NAME, 40, 40},
      {h2x__srv__IMUVerticalInstallationSet_Event__FIELDS, 3, 3},
    },
    {h2x__srv__IMUVerticalInstallationSet_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__IMUVerticalInstallationSet_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__IMUVerticalInstallationSet_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "uint32 imu_index\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "int32 result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__IMUVerticalInstallationSet__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__IMUVerticalInstallationSet__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__IMUVerticalInstallationSet_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__IMUVerticalInstallationSet_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__IMUVerticalInstallationSet_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__IMUVerticalInstallationSet_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__IMUVerticalInstallationSet_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__IMUVerticalInstallationSet_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__IMUVerticalInstallationSet__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__IMUVerticalInstallationSet__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__IMUVerticalInstallationSet_Event__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__IMUVerticalInstallationSet_Request__get_individual_type_description_source(NULL);
    sources[4] = *h2x__srv__IMUVerticalInstallationSet_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__IMUVerticalInstallationSet_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__IMUVerticalInstallationSet_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__IMUVerticalInstallationSet_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__IMUVerticalInstallationSet_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__IMUVerticalInstallationSet_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__IMUVerticalInstallationSet_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__IMUVerticalInstallationSet_Request__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__IMUVerticalInstallationSet_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
