// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:srv/GripperBrakeControl.idl
// generated code does not contain a copyright notice

#include "h2x/srv/detail/gripper_brake_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GripperBrakeControl__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xdf, 0xed, 0xbe, 0x18, 0xed, 0xb5, 0x13,
      0x59, 0x34, 0x52, 0xdc, 0x48, 0x37, 0x18, 0x44,
      0x2f, 0x89, 0x20, 0x7f, 0x29, 0xf8, 0x6a, 0xba,
      0xb4, 0x2f, 0xb4, 0x01, 0x08, 0x85, 0x72, 0x3a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GripperBrakeControl_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xb8, 0x93, 0x7a, 0x86, 0xba, 0xef, 0xf7,
      0x77, 0x42, 0x02, 0x3b, 0xe9, 0x15, 0x50, 0xd8,
      0x27, 0x86, 0x3b, 0x5f, 0xce, 0xb4, 0x7c, 0xce,
      0x17, 0x70, 0x59, 0x5a, 0x50, 0xb4, 0x76, 0x9b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GripperBrakeControl_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x0d, 0x3c, 0xb7, 0xce, 0x57, 0xd2, 0x87,
      0x32, 0x0f, 0x00, 0x36, 0x44, 0x01, 0x2d, 0x89,
      0x5a, 0x91, 0x61, 0x4b, 0x15, 0x56, 0xdb, 0x9b,
      0x21, 0x2a, 0x1c, 0x1f, 0x2f, 0xce, 0x92, 0xee,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__srv__GripperBrakeControl_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x51, 0x66, 0x65, 0xbd, 0xe3, 0x85, 0x4f,
      0x70, 0x9b, 0xe2, 0xdc, 0x25, 0x5e, 0xc8, 0xe8,
      0x23, 0x17, 0x31, 0x6e, 0xc9, 0xf8, 0xe1, 0x60,
      0x6d, 0xbc, 0x08, 0xa4, 0xe1, 0x45, 0x06, 0x9e,
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

static char h2x__srv__GripperBrakeControl__TYPE_NAME[] = "h2x/srv/GripperBrakeControl";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char h2x__srv__GripperBrakeControl_Event__TYPE_NAME[] = "h2x/srv/GripperBrakeControl_Event";
static char h2x__srv__GripperBrakeControl_Request__TYPE_NAME[] = "h2x/srv/GripperBrakeControl_Request";
static char h2x__srv__GripperBrakeControl_Response__TYPE_NAME[] = "h2x/srv/GripperBrakeControl_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char h2x__srv__GripperBrakeControl__FIELD_NAME__request_message[] = "request_message";
static char h2x__srv__GripperBrakeControl__FIELD_NAME__response_message[] = "response_message";
static char h2x__srv__GripperBrakeControl__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field h2x__srv__GripperBrakeControl__FIELDS[] = {
  {
    {h2x__srv__GripperBrakeControl__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__GripperBrakeControl_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__GripperBrakeControl_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {h2x__srv__GripperBrakeControl_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__GripperBrakeControl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__GripperBrakeControl__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GripperBrakeControl__TYPE_NAME, 27, 27},
      {h2x__srv__GripperBrakeControl__FIELDS, 3, 3},
    },
    {h2x__srv__GripperBrakeControl__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__GripperBrakeControl_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__GripperBrakeControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = h2x__srv__GripperBrakeControl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__GripperBrakeControl_Request__FIELD_NAME__motor_index[] = "motor_index";
static char h2x__srv__GripperBrakeControl_Request__FIELD_NAME__request_state[] = "request_state";
static char h2x__srv__GripperBrakeControl_Request__FIELD_NAME__auto_clear_error[] = "auto_clear_error";

static rosidl_runtime_c__type_description__Field h2x__srv__GripperBrakeControl_Request__FIELDS[] = {
  {
    {h2x__srv__GripperBrakeControl_Request__FIELD_NAME__motor_index, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Request__FIELD_NAME__request_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Request__FIELD_NAME__auto_clear_error, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__GripperBrakeControl_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GripperBrakeControl_Request__TYPE_NAME, 35, 35},
      {h2x__srv__GripperBrakeControl_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__GripperBrakeControl_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field h2x__srv__GripperBrakeControl_Response__FIELDS[] = {
  {
    {h2x__srv__GripperBrakeControl_Response__FIELD_NAME__result, 6, 6},
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
h2x__srv__GripperBrakeControl_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GripperBrakeControl_Response__TYPE_NAME, 36, 36},
      {h2x__srv__GripperBrakeControl_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char h2x__srv__GripperBrakeControl_Event__FIELD_NAME__info[] = "info";
static char h2x__srv__GripperBrakeControl_Event__FIELD_NAME__request[] = "request";
static char h2x__srv__GripperBrakeControl_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field h2x__srv__GripperBrakeControl_Event__FIELDS[] = {
  {
    {h2x__srv__GripperBrakeControl_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__GripperBrakeControl_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {h2x__srv__GripperBrakeControl_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription h2x__srv__GripperBrakeControl_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {h2x__srv__GripperBrakeControl_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__srv__GripperBrakeControl_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__srv__GripperBrakeControl_Event__TYPE_NAME, 33, 33},
      {h2x__srv__GripperBrakeControl_Event__FIELDS, 3, 3},
    },
    {h2x__srv__GripperBrakeControl_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = h2x__srv__GripperBrakeControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = h2x__srv__GripperBrakeControl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "uint32 motor_index\n"
  "uint32 request_state\n"
  "bool auto_clear_error\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x83\\xa8\\xe5\\x88\\x86\n"
  "int32 result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GripperBrakeControl__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GripperBrakeControl__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 92, 92},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GripperBrakeControl_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GripperBrakeControl_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GripperBrakeControl_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GripperBrakeControl_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
h2x__srv__GripperBrakeControl_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__srv__GripperBrakeControl_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GripperBrakeControl__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GripperBrakeControl__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__GripperBrakeControl_Event__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__GripperBrakeControl_Request__get_individual_type_description_source(NULL);
    sources[4] = *h2x__srv__GripperBrakeControl_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GripperBrakeControl_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GripperBrakeControl_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GripperBrakeControl_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GripperBrakeControl_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__srv__GripperBrakeControl_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__srv__GripperBrakeControl_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *h2x__srv__GripperBrakeControl_Request__get_individual_type_description_source(NULL);
    sources[3] = *h2x__srv__GripperBrakeControl_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
