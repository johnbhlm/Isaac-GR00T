// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from h2x:srv/SetJointDirection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "h2x/srv/detail/set_joint_direction__rosidl_typesupport_introspection_c.h"
#include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "h2x/srv/detail/set_joint_direction__functions.h"
#include "h2x/srv/detail/set_joint_direction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__srv__SetJointDirection_Request__init(message_memory);
}

void h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_fini_function(void * message_memory)
{
  h2x__srv__SetJointDirection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_member_array[2] = {
  {
    "motor_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__srv__SetJointDirection_Request, motor_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__srv__SetJointDirection_Request, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_members = {
  "h2x__srv",  // message namespace
  "SetJointDirection_Request",  // message name
  2,  // number of fields
  sizeof(h2x__srv__SetJointDirection_Request),
  false,  // has_any_key_member_
  h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_member_array,  // message members
  h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_type_support_handle = {
  0,
  &h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_members,
  get_message_typesupport_handle_function,
  &h2x__srv__SetJointDirection_Request__get_type_hash,
  &h2x__srv__SetJointDirection_Request__get_type_description,
  &h2x__srv__SetJointDirection_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Request)() {
  if (!h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_type_support_handle.typesupport_identifier) {
    h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "h2x/srv/detail/set_joint_direction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "h2x/srv/detail/set_joint_direction__functions.h"
// already included above
// #include "h2x/srv/detail/set_joint_direction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__srv__SetJointDirection_Response__init(message_memory);
}

void h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_fini_function(void * message_memory)
{
  h2x__srv__SetJointDirection_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__srv__SetJointDirection_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_members = {
  "h2x__srv",  // message namespace
  "SetJointDirection_Response",  // message name
  1,  // number of fields
  sizeof(h2x__srv__SetJointDirection_Response),
  false,  // has_any_key_member_
  h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_member_array,  // message members
  h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_type_support_handle = {
  0,
  &h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_members,
  get_message_typesupport_handle_function,
  &h2x__srv__SetJointDirection_Response__get_type_hash,
  &h2x__srv__SetJointDirection_Response__get_type_description,
  &h2x__srv__SetJointDirection_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Response)() {
  if (!h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_type_support_handle.typesupport_identifier) {
    h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "h2x/srv/detail/set_joint_direction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "h2x/srv/detail/set_joint_direction__functions.h"
// already included above
// #include "h2x/srv/detail/set_joint_direction__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "h2x/srv/set_joint_direction.h"
// Member `request`
// Member `response`
// already included above
// #include "h2x/srv/detail/set_joint_direction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__srv__SetJointDirection_Event__init(message_memory);
}

void h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_fini_function(void * message_memory)
{
  h2x__srv__SetJointDirection_Event__fini(message_memory);
}

size_t h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__size_function__SetJointDirection_Event__request(
  const void * untyped_member)
{
  const h2x__srv__SetJointDirection_Request__Sequence * member =
    (const h2x__srv__SetJointDirection_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointDirection_Event__request(
  const void * untyped_member, size_t index)
{
  const h2x__srv__SetJointDirection_Request__Sequence * member =
    (const h2x__srv__SetJointDirection_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_function__SetJointDirection_Event__request(
  void * untyped_member, size_t index)
{
  h2x__srv__SetJointDirection_Request__Sequence * member =
    (h2x__srv__SetJointDirection_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointDirection_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const h2x__srv__SetJointDirection_Request * item =
    ((const h2x__srv__SetJointDirection_Request *)
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointDirection_Event__request(untyped_member, index));
  h2x__srv__SetJointDirection_Request * value =
    (h2x__srv__SetJointDirection_Request *)(untyped_value);
  *value = *item;
}

void h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__assign_function__SetJointDirection_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  h2x__srv__SetJointDirection_Request * item =
    ((h2x__srv__SetJointDirection_Request *)
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_function__SetJointDirection_Event__request(untyped_member, index));
  const h2x__srv__SetJointDirection_Request * value =
    (const h2x__srv__SetJointDirection_Request *)(untyped_value);
  *item = *value;
}

bool h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__resize_function__SetJointDirection_Event__request(
  void * untyped_member, size_t size)
{
  h2x__srv__SetJointDirection_Request__Sequence * member =
    (h2x__srv__SetJointDirection_Request__Sequence *)(untyped_member);
  h2x__srv__SetJointDirection_Request__Sequence__fini(member);
  return h2x__srv__SetJointDirection_Request__Sequence__init(member, size);
}

size_t h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__size_function__SetJointDirection_Event__response(
  const void * untyped_member)
{
  const h2x__srv__SetJointDirection_Response__Sequence * member =
    (const h2x__srv__SetJointDirection_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointDirection_Event__response(
  const void * untyped_member, size_t index)
{
  const h2x__srv__SetJointDirection_Response__Sequence * member =
    (const h2x__srv__SetJointDirection_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_function__SetJointDirection_Event__response(
  void * untyped_member, size_t index)
{
  h2x__srv__SetJointDirection_Response__Sequence * member =
    (h2x__srv__SetJointDirection_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointDirection_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const h2x__srv__SetJointDirection_Response * item =
    ((const h2x__srv__SetJointDirection_Response *)
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointDirection_Event__response(untyped_member, index));
  h2x__srv__SetJointDirection_Response * value =
    (h2x__srv__SetJointDirection_Response *)(untyped_value);
  *value = *item;
}

void h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__assign_function__SetJointDirection_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  h2x__srv__SetJointDirection_Response * item =
    ((h2x__srv__SetJointDirection_Response *)
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_function__SetJointDirection_Event__response(untyped_member, index));
  const h2x__srv__SetJointDirection_Response * value =
    (const h2x__srv__SetJointDirection_Response *)(untyped_value);
  *item = *value;
}

bool h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__resize_function__SetJointDirection_Event__response(
  void * untyped_member, size_t size)
{
  h2x__srv__SetJointDirection_Response__Sequence * member =
    (h2x__srv__SetJointDirection_Response__Sequence *)(untyped_member);
  h2x__srv__SetJointDirection_Response__Sequence__fini(member);
  return h2x__srv__SetJointDirection_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__srv__SetJointDirection_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(h2x__srv__SetJointDirection_Event, request),  // bytes offset in struct
    NULL,  // default value
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__size_function__SetJointDirection_Event__request,  // size() function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointDirection_Event__request,  // get_const(index) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_function__SetJointDirection_Event__request,  // get(index) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointDirection_Event__request,  // fetch(index, &value) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__assign_function__SetJointDirection_Event__request,  // assign(index, value) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__resize_function__SetJointDirection_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(h2x__srv__SetJointDirection_Event, response),  // bytes offset in struct
    NULL,  // default value
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__size_function__SetJointDirection_Event__response,  // size() function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_const_function__SetJointDirection_Event__response,  // get_const(index) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__get_function__SetJointDirection_Event__response,  // get(index) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__fetch_function__SetJointDirection_Event__response,  // fetch(index, &value) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__assign_function__SetJointDirection_Event__response,  // assign(index, value) function pointer
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__resize_function__SetJointDirection_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_members = {
  "h2x__srv",  // message namespace
  "SetJointDirection_Event",  // message name
  3,  // number of fields
  sizeof(h2x__srv__SetJointDirection_Event),
  false,  // has_any_key_member_
  h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_member_array,  // message members
  h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_type_support_handle = {
  0,
  &h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_members,
  get_message_typesupport_handle_function,
  &h2x__srv__SetJointDirection_Event__get_type_hash,
  &h2x__srv__SetJointDirection_Event__get_type_description,
  &h2x__srv__SetJointDirection_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Event)() {
  h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Request)();
  h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Response)();
  if (!h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_type_support_handle.typesupport_identifier) {
    h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "h2x/srv/detail/set_joint_direction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_service_members = {
  "h2x__srv",  // service namespace
  "SetJointDirection",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_type_support_handle,
  NULL,  // response message
  // h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_type_support_handle
  NULL  // event_message
  // h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_type_support_handle
};


static rosidl_service_type_support_t h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_service_type_support_handle = {
  0,
  &h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_service_members,
  get_service_typesupport_handle_function,
  &h2x__srv__SetJointDirection_Request__rosidl_typesupport_introspection_c__SetJointDirection_Request_message_type_support_handle,
  &h2x__srv__SetJointDirection_Response__rosidl_typesupport_introspection_c__SetJointDirection_Response_message_type_support_handle,
  &h2x__srv__SetJointDirection_Event__rosidl_typesupport_introspection_c__SetJointDirection_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    h2x,
    srv,
    SetJointDirection
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    h2x,
    srv,
    SetJointDirection
  ),
  &h2x__srv__SetJointDirection__get_type_hash,
  &h2x__srv__SetJointDirection__get_type_description,
  &h2x__srv__SetJointDirection__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection)(void) {
  if (!h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_service_type_support_handle.typesupport_identifier) {
    h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, srv, SetJointDirection_Event)()->data;
  }

  return &h2x__srv__detail__set_joint_direction__rosidl_typesupport_introspection_c__SetJointDirection_service_type_support_handle;
}
