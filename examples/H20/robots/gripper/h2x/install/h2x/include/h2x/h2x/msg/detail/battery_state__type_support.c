// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "h2x/msg/detail/battery_state__rosidl_typesupport_introspection_c.h"
#include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "h2x/msg/detail/battery_state__functions.h"
#include "h2x/msg/detail/battery_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__msg__BatteryState__init(message_memory);
}

void h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_fini_function(void * message_memory)
{
  h2x__msg__BatteryState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_member_array[5] = {
  {
    "battery_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__BatteryState, battery_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__BatteryState, battery_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_low_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__BatteryState, battery_low_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__BatteryState, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warning_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__BatteryState, warning_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_members = {
  "h2x__msg",  // message namespace
  "BatteryState",  // message name
  5,  // number of fields
  sizeof(h2x__msg__BatteryState),
  false,  // has_any_key_member_
  h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_member_array,  // message members
  h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_type_support_handle = {
  0,
  &h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__BatteryState__get_type_hash,
  &h2x__msg__BatteryState__get_type_description,
  &h2x__msg__BatteryState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, BatteryState)() {
  if (!h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_type_support_handle.typesupport_identifier) {
    h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__msg__BatteryState__rosidl_typesupport_introspection_c__BatteryState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
