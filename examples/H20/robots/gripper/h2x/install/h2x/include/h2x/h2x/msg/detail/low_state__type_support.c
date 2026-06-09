// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from h2x:msg/LowState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "h2x/msg/detail/low_state__rosidl_typesupport_introspection_c.h"
#include "h2x/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "h2x/msg/detail/low_state__functions.h"
#include "h2x/msg/detail/low_state__struct.h"


// Include directives for member types
// Member `imu_state`
#include "h2x/msg/imu_state.h"
// Member `imu_state`
#include "h2x/msg/detail/imu_state__rosidl_typesupport_introspection_c.h"
// Member `motor_state`
#include "h2x/msg/motor_state.h"
// Member `motor_state`
#include "h2x/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
// Member `battery_info`
#include "h2x/msg/battery_state.h"
// Member `battery_info`
#include "h2x/msg/detail/battery_state__rosidl_typesupport_introspection_c.h"
// Member `pcu_state`
#include "h2x/msg/pcu_state.h"
// Member `pcu_state`
#include "h2x/msg/detail/pcu_state__rosidl_typesupport_introspection_c.h"
// Member `cdu_state`
#include "h2x/msg/cdu_state.h"
// Member `cdu_state`
#include "h2x/msg/detail/cdu_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  h2x__msg__LowState__init(message_memory);
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_fini_function(void * message_memory)
{
  h2x__msg__LowState__fini(message_memory);
}

size_t h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__version(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__version(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__version(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__version(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__version(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__version(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__version(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__imu_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__imu_state(
  const void * untyped_member, size_t index)
{
  const h2x__msg__IMUState * member =
    (const h2x__msg__IMUState *)(untyped_member);
  return &member[index];
}

void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__imu_state(
  void * untyped_member, size_t index)
{
  h2x__msg__IMUState * member =
    (h2x__msg__IMUState *)(untyped_member);
  return &member[index];
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__imu_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const h2x__msg__IMUState * item =
    ((const h2x__msg__IMUState *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__imu_state(untyped_member, index));
  h2x__msg__IMUState * value =
    (h2x__msg__IMUState *)(untyped_value);
  *value = *item;
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__imu_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  h2x__msg__IMUState * item =
    ((h2x__msg__IMUState *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__imu_state(untyped_member, index));
  const h2x__msg__IMUState * value =
    (const h2x__msg__IMUState *)(untyped_value);
  *item = *value;
}

size_t h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__motor_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 37;
}

const void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__motor_state(
  const void * untyped_member, size_t index)
{
  const h2x__msg__MotorState * member =
    (const h2x__msg__MotorState *)(untyped_member);
  return &member[index];
}

void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__motor_state(
  void * untyped_member, size_t index)
{
  h2x__msg__MotorState * member =
    (h2x__msg__MotorState *)(untyped_member);
  return &member[index];
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__motor_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const h2x__msg__MotorState * item =
    ((const h2x__msg__MotorState *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__motor_state(untyped_member, index));
  h2x__msg__MotorState * value =
    (h2x__msg__MotorState *)(untyped_value);
  *value = *item;
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__motor_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  h2x__msg__MotorState * item =
    ((h2x__msg__MotorState *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__motor_state(untyped_member, index));
  const h2x__msg__MotorState * value =
    (const h2x__msg__MotorState *)(untyped_value);
  *item = *value;
}

size_t h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__ground_signal(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__ground_signal(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__ground_signal(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__ground_signal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__ground_signal(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__ground_signal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__ground_signal(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__reserved(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__reserved(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__reserved(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__reserved(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__reserved(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[19] = {
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, version),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__version,  // size() function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__version,  // get_const(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__version,  // get(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__version,  // fetch(index, &value) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__version,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode_pr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, mode_pr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, tick),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, imu_state),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__imu_state,  // size() function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__imu_state,  // get_const(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__imu_state,  // get(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__imu_state,  // fetch(index, &value) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__imu_state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    37,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, motor_state),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__motor_state,  // size() function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__motor_state,  // get_const(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__motor_state,  // get(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__motor_state,  // fetch(index, &value) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__motor_state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_battery_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, has_battery_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, battery_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, ground_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_signal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, ground_signal),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__ground_signal,  // size() function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__ground_signal,  // get_const(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__ground_signal,  // get(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__ground_signal,  // fetch(index, &value) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__ground_signal,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, time_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_pcu_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, is_pcu_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pcu_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, pcu_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_cdu_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, is_cdu_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cdu_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, cdu_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_data_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x__msg__LowState, is_data_valid),  // bytes offset in struct
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
    offsetof(h2x__msg__LowState, error_code),  // bytes offset in struct
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
    offsetof(h2x__msg__LowState, warning_code),  // bytes offset in struct
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
    offsetof(h2x__msg__LowState, reserved),  // bytes offset in struct
    NULL,  // default value
    h2x__msg__LowState__rosidl_typesupport_introspection_c__size_function__LowState__reserved,  // size() function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_const_function__LowState__reserved,  // get_const(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__get_function__LowState__reserved,  // get(index) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__fetch_function__LowState__reserved,  // fetch(index, &value) function pointer
    h2x__msg__LowState__rosidl_typesupport_introspection_c__assign_function__LowState__reserved,  // assign(index, value) function pointer
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
    offsetof(h2x__msg__LowState, crc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_members = {
  "h2x__msg",  // message namespace
  "LowState",  // message name
  19,  // number of fields
  sizeof(h2x__msg__LowState),
  false,  // has_any_key_member_
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array,  // message members
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_init_function,  // function to initialize message memory (memory has to be allocated)
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle = {
  0,
  &h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__LowState__get_type_hash,
  &h2x__msg__LowState__get_type_description,
  &h2x__msg__LowState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, LowState)() {
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, IMUState)();
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, MotorState)();
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, BatteryState)();
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, PCUState)();
  h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, h2x, msg, CDUState)();
  if (!h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier) {
    h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &h2x__msg__LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
