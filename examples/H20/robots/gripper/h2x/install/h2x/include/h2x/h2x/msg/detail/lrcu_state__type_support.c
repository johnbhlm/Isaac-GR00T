// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from h2x:msg/LRCUState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "h2x/msg/detail/lrcu_state__rosidl_typesupport_introspection_c.h"
#include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "h2x/msg/detail/lrcu_state__functions.h"
#include "h2x/msg/detail/lrcu_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__msg__LRCUState__init(message_memory);
}

void h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_fini_function(void * message_memory)
{
  h2x__msg__LRCUState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_member_array[7] = {
  {
    "led_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LRCUState, led_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LRCUState, led_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_period_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LRCUState, led_period_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LRCUState, led_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LRCUState, led_g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LRCUState, led_b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LRCUState, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_members = {
  "h2x__msg",  // message namespace
  "LRCUState",  // message name
  7,  // number of fields
  sizeof(h2x__msg__LRCUState),
  false,  // has_any_key_member_
  h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_member_array,  // message members
  h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_type_support_handle = {
  0,
  &h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__LRCUState__get_type_hash,
  &h2x__msg__LRCUState__get_type_description,
  &h2x__msg__LRCUState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, LRCUState)() {
  if (!h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_type_support_handle.typesupport_identifier) {
    h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__msg__LRCUState__rosidl_typesupport_introspection_c__LRCUState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
