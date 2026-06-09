// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/CDUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/cdu_state.h"


#ifndef H2X__MSG__DETAIL__CDU_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__CDU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CDUState in the package h2x.
typedef struct h2x__msg__CDUState
{
  int32_t error_code;
  int32_t warning_code;
} h2x__msg__CDUState;

// Struct for a sequence of h2x__msg__CDUState.
typedef struct h2x__msg__CDUState__Sequence
{
  h2x__msg__CDUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__CDUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__CDU_STATE__STRUCT_H_
