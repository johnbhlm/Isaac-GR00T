// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from h2x:msg/GripperCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "h2x/msg/detail/gripper_cmd__rosidl_typesupport_introspection_c.h"
#include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "h2x/msg/detail/gripper_cmd__functions.h"
#include "h2x/msg/detail/gripper_cmd__struct.h"


// Include directives for member types
// Member `motor_cmd`
#include "h2x/msg/motor_cmd_gripper.h"
// Member `motor_cmd`
#include "h2x/msg/detail/motor_cmd_gripper__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__msg__GripperCmd__init(message_memory);
}

void h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_fini_function(void * message_memory)
{
  h2x__msg__GripperCmd__fini(message_memory);
}

size_t h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__size_function__GripperCmd__motor_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__get_const_function__GripperCmd__motor_cmd(
  const void * untyped_member, size_t index)
{
  const h2x__msg__MotorCmdGripper * member =
    (const h2x__msg__MotorCmdGripper *)(untyped_member);
  return &member[index];
}

void * h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__get_function__GripperCmd__motor_cmd(
  void * untyped_member, size_t index)
{
  h2x__msg__MotorCmdGripper * member =
    (h2x__msg__MotorCmdGripper *)(untyped_member);
  return &member[index];
}

void h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__fetch_function__GripperCmd__motor_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const h2x__msg__MotorCmdGripper * item =
    ((const h2x__msg__MotorCmdGripper *)
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__get_const_function__GripperCmd__motor_cmd(untyped_member, index));
  h2x__msg__MotorCmdGripper * value =
    (h2x__msg__MotorCmdGripper *)(untyped_value);
  *value = *item;
}

void h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__assign_function__GripperCmd__motor_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  h2x__msg__MotorCmdGripper * item =
    ((h2x__msg__MotorCmdGripper *)
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__get_function__GripperCmd__motor_cmd(untyped_member, index));
  const h2x__msg__MotorCmdGripper * value =
    (const h2x__msg__MotorCmdGripper *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_member_array[2] = {
  {
    "motor_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__GripperCmd, motor_cmd),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__size_function__GripperCmd__motor_cmd,  // size() function pointer
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__get_const_function__GripperCmd__motor_cmd,  // get_const(index) function pointer
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__get_function__GripperCmd__motor_cmd,  // get(index) function pointer
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__fetch_function__GripperCmd__motor_cmd,  // fetch(index, &value) function pointer
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__assign_function__GripperCmd__motor_cmd,  // assign(index, value) function pointer
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
    offsetof(h2x__msg__GripperCmd, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_members = {
  "h2x__msg",  // message namespace
  "GripperCmd",  // message name
  2,  // number of fields
  sizeof(h2x__msg__GripperCmd),
  false,  // has_any_key_member_
  h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_member_array,  // message members
  h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_type_support_handle = {
  0,
  &h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__GripperCmd__get_type_hash,
  &h2x__msg__GripperCmd__get_type_description,
  &h2x__msg__GripperCmd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, GripperCmd)() {
  h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, MotorCmdGripper)();
  if (!h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_type_support_handle.typesupport_identifier) {
    h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__msg__GripperCmd__rosidl_typesupport_introspection_c__GripperCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
