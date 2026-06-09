// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/LowCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/low_cmd.h"


#ifndef H2X__MSG__DETAIL__LOW_CMD__STRUCT_H_
#define H2X__MSG__DETAIL__LOW_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'motor_cmd'
#include "h2x/msg/detail/motor_cmd__struct.h"

/// Struct defined in msg/LowCmd in the package h2x.
typedef struct h2x__msg__LowCmd
{
  uint8_t mode_pr;
  h2x__msg__MotorCmd motor_cmd[37];
  uint32_t reserved[4];
  uint32_t crc;
} h2x__msg__LowCmd;

// Struct for a sequence of h2x__msg__LowCmd.
typedef struct h2x__msg__LowCmd__Sequence
{
  h2x__msg__LowCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__LowCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__LOW_CMD__STRUCT_H_
