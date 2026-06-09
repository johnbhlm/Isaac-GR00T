// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "h2x/msg/detail/motor_cmd_gripper__rosidl_typesupport_introspection_c.h"
#include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "h2x/msg/detail/motor_cmd_gripper__functions.h"
#include "h2x/msg/detail/motor_cmd_gripper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__msg__MotorCmdGripper__init(message_memory);
}

void h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_fini_function(void * message_memory)
{
  h2x__msg__MotorCmdGripper__fini(message_memory);
}

size_t h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__size_function__MotorCmdGripper__reserved(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__get_const_function__MotorCmdGripper__reserved(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__get_function__MotorCmdGripper__reserved(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__fetch_function__MotorCmdGripper__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__get_const_function__MotorCmdGripper__reserved(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__assign_function__MotorCmdGripper__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__get_function__MotorCmdGripper__reserved(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_member_array[7] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__MotorCmdGripper, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operation_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__MotorCmdGripper, operation_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__MotorCmdGripper, q),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dq_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__MotorCmdGripper, dq_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__MotorCmdGripper, acc_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finger_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__MotorCmdGripper, finger_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__MotorCmdGripper, reserved),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__size_function__MotorCmdGripper__reserved,  // size() function pointer
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__get_const_function__MotorCmdGripper__reserved,  // get_const(index) function pointer
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__get_function__MotorCmdGripper__reserved,  // get(index) function pointer
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__fetch_function__MotorCmdGripper__reserved,  // fetch(index, &value) function pointer
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__assign_function__MotorCmdGripper__reserved,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_members = {
  "h2x__msg",  // message namespace
  "MotorCmdGripper",  // message name
  7,  // number of fields
  sizeof(h2x__msg__MotorCmdGripper),
  false,  // has_any_key_member_
  h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_member_array,  // message members
  h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_type_support_handle = {
  0,
  &h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__MotorCmdGripper__get_type_hash,
  &h2x__msg__MotorCmdGripper__get_type_description,
  &h2x__msg__MotorCmdGripper__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, MotorCmdGripper)() {
  if (!h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_type_support_handle.typesupport_identifier) {
    h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__msg__MotorCmdGripper__rosidl_typesupport_introspection_c__MotorCmdGripper_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
