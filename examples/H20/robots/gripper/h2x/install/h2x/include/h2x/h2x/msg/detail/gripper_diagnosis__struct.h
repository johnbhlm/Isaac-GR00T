// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/GripperDiagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnosis.h"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__STRUCT_H_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ds_data'
#include "h2x/msg/detail/gripper_diagnostic_data__struct.h"

/// Struct defined in msg/GripperDiagnosis in the package h2x.
typedef struct h2x__msg__GripperDiagnosis
{
  h2x__msg__GripperDiagnosticData ds_data[2];
  int32_t error_code[2];
  int32_t warning_code[2];
  uint32_t crc;
} h2x__msg__GripperDiagnosis;

// Struct for a sequence of h2x__msg__GripperDiagnosis.
typedef struct h2x__msg__GripperDiagnosis__Sequence
{
  h2x__msg__GripperDiagnosis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__GripperDiagnosis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__STRUCT_H_
