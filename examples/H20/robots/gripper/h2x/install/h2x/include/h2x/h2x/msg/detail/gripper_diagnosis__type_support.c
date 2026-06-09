// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from h2x:msg/GripperDiagnosis.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "h2x/msg/detail/gripper_diagnosis__rosidl_typesupport_introspection_c.h"
#include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "h2x/msg/detail/gripper_diagnosis__functions.h"
#include "h2x/msg/detail/gripper_diagnosis__struct.h"


// Include directives for member types
// Member `ds_data`
#include "h2x/msg/gripper_diagnostic_data.h"
// Member `ds_data`
#include "h2x/msg/detail/gripper_diagnostic_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__msg__GripperDiagnosis__init(message_memory);
}

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_fini_function(void * message_memory)
{
  h2x__msg__GripperDiagnosis__fini(message_memory);
}

size_t h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__size_function__GripperDiagnosis__ds_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__ds_data(
  const void * untyped_member, size_t index)
{
  const h2x__msg__GripperDiagnosticData * member =
    (const h2x__msg__GripperDiagnosticData *)(untyped_member);
  return &member[index];
}

void * h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__ds_data(
  void * untyped_member, size_t index)
{
  h2x__msg__GripperDiagnosticData * member =
    (h2x__msg__GripperDiagnosticData *)(untyped_member);
  return &member[index];
}

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__fetch_function__GripperDiagnosis__ds_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const h2x__msg__GripperDiagnosticData * item =
    ((const h2x__msg__GripperDiagnosticData *)
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__ds_data(untyped_member, index));
  h2x__msg__GripperDiagnosticData * value =
    (h2x__msg__GripperDiagnosticData *)(untyped_value);
  *value = *item;
}

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__assign_function__GripperDiagnosis__ds_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  h2x__msg__GripperDiagnosticData * item =
    ((h2x__msg__GripperDiagnosticData *)
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__ds_data(untyped_member, index));
  const h2x__msg__GripperDiagnosticData * value =
    (const h2x__msg__GripperDiagnosticData *)(untyped_value);
  *item = *value;
}

size_t h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__size_function__GripperDiagnosis__error_code(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__error_code(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__error_code(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__fetch_function__GripperDiagnosis__error_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__error_code(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__assign_function__GripperDiagnosis__error_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__error_code(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__size_function__GripperDiagnosis__warning_code(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__warning_code(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__warning_code(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__fetch_function__GripperDiagnosis__warning_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__warning_code(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__assign_function__GripperDiagnosis__warning_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__warning_code(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_member_array[4] = {
  {
    "ds_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__GripperDiagnosis, ds_data),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__size_function__GripperDiagnosis__ds_data,  // size() function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__ds_data,  // get_const(index) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__ds_data,  // get(index) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__fetch_function__GripperDiagnosis__ds_data,  // fetch(index, &value) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__assign_function__GripperDiagnosis__ds_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__GripperDiagnosis, error_code),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__size_function__GripperDiagnosis__error_code,  // size() function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__error_code,  // get_const(index) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__error_code,  // get(index) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__fetch_function__GripperDiagnosis__error_code,  // fetch(index, &value) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__assign_function__GripperDiagnosis__error_code,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warning_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__GripperDiagnosis, warning_code),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__size_function__GripperDiagnosis__warning_code,  // size() function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_const_function__GripperDiagnosis__warning_code,  // get_const(index) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__get_function__GripperDiagnosis__warning_code,  // get(index) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__fetch_function__GripperDiagnosis__warning_code,  // fetch(index, &value) function pointer
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__assign_function__GripperDiagnosis__warning_code,  // assign(index, value) function pointer
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
    offsetof(h2x__msg__GripperDiagnosis, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_members = {
  "h2x__msg",  // message namespace
  "GripperDiagnosis",  // message name
  4,  // number of fields
  sizeof(h2x__msg__GripperDiagnosis),
  false,  // has_any_key_member_
  h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_member_array,  // message members
  h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_type_support_handle = {
  0,
  &h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__GripperDiagnosis__get_type_hash,
  &h2x__msg__GripperDiagnosis__get_type_description,
  &h2x__msg__GripperDiagnosis__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, GripperDiagnosis)() {
  h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, GripperDiagnosticData)();
  if (!h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_type_support_handle.typesupport_identifier) {
    h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__msg__GripperDiagnosis__rosidl_typesupport_introspection_c__GripperDiagnosis_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
