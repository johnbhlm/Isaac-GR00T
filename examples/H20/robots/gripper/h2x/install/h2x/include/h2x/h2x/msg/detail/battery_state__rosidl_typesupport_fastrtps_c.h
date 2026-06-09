// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice
#ifndef H2X__MSG__DETAIL__BATTERY_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define H2X__MSG__DETAIL__BATTERY_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "h2x/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "h2x/msg/detail/battery_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
bool cdr_serialize_h2x__msg__BatteryState(
  const h2x__msg__BatteryState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
bool cdr_deserialize_h2x__msg__BatteryState(
  eprosima::fastcdr::Cdr &,
  h2x__msg__BatteryState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
size_t get_serialized_size_h2x__msg__BatteryState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
size_t max_serialized_size_h2x__msg__BatteryState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
bool cdr_serialize_key_h2x__msg__BatteryState(
  const h2x__msg__BatteryState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
size_t get_serialized_size_key_h2x__msg__BatteryState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
size_t max_serialized_size_key_h2x__msg__BatteryState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_h2x
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, h2x, msg, BatteryState)();

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__BATTERY_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
