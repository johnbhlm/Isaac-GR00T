// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/GripperDiagnosticData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnostic_data.h"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__STRUCT_H_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GripperDiagnosticData in the package h2x.
typedef struct h2x__msg__GripperDiagnosticData
{
  int8_t mode_of_operation;
  int8_t mode_display;
} h2x__msg__GripperDiagnosticData;

// Struct for a sequence of h2x__msg__GripperDiagnosticData.
typedef struct h2x__msg__GripperDiagnosticData__Sequence
{
  h2x__msg__GripperDiagnosticData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__GripperDiagnosticData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__STRUCT_H_
