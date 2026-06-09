// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/DiagnosticData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/diagnostic_data.h"


#ifndef H2X__MSG__DETAIL__DIAGNOSTIC_DATA__STRUCT_H_
#define H2X__MSG__DETAIL__DIAGNOSTIC_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'debug_motor_state'
#include "h2x/msg/detail/debug_motor_state__struct.h"

/// Struct defined in msg/DiagnosticData in the package h2x.
typedef struct h2x__msg__DiagnosticData
{
  uint16_t control_word;
  uint16_t status_word;
  uint8_t error_register;
  int8_t mode_of_operation;
  int8_t mode_display;
  h2x__msg__DebugMotorState debug_motor_state;
} h2x__msg__DiagnosticData;

// Struct for a sequence of h2x__msg__DiagnosticData.
typedef struct h2x__msg__DiagnosticData__Sequence
{
  h2x__msg__DiagnosticData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__DiagnosticData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__DIAGNOSTIC_DATA__STRUCT_H_
