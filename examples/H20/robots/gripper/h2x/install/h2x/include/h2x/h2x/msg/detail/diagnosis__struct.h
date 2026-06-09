// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/Diagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/diagnosis.h"


#ifndef H2X__MSG__DETAIL__DIAGNOSIS__STRUCT_H_
#define H2X__MSG__DETAIL__DIAGNOSIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ds402_data'
#include "h2x/msg/detail/diagnostic_data__struct.h"
// Member 'debug_imu_state'
#include "h2x/msg/detail/debug_imu_state__struct.h"
// Member 'debug_cdu_state'
#include "h2x/msg/detail/debug_cdu_state__struct.h"

/// Struct defined in msg/Diagnosis in the package h2x.
typedef struct h2x__msg__Diagnosis
{
  bool is_ds402[37];
  h2x__msg__DiagnosticData ds402_data[37];
  h2x__msg__DebugIMUState debug_imu_state[2];
  h2x__msg__DebugCDUState debug_cdu_state;
  int32_t error_code[37];
  int32_t warning_code[37];
  int32_t cdu_error_code;
  int32_t cdu_warning_code;
  int32_t pcu_error_code;
  int32_t pcu_warning_code;
  int32_t imu_error_code[2];
  int32_t imu_warning_code[2];
  int32_t battery_error_code;
  int32_t battery_warning_code;
  uint32_t crc;
} h2x__msg__Diagnosis;

// Struct for a sequence of h2x__msg__Diagnosis.
typedef struct h2x__msg__Diagnosis__Sequence
{
  h2x__msg__Diagnosis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__Diagnosis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__DIAGNOSIS__STRUCT_H_
