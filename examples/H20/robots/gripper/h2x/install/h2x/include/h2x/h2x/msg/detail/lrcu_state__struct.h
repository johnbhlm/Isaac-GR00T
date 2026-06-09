// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/LRCUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/lrcu_state.h"


#ifndef H2X__MSG__DETAIL__LRCU_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__LRCU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LRCUState in the package h2x.
/**
  * LED status feedback message
 */
typedef struct h2x__msg__LRCUState
{
  /// 1. 是否可控
  /// 0: not controllable, 1: controllable
  uint8_t led_enable;
  /// 2. 当前 LED 模式
  /// 0: off, 1: constant, 2: blink, 3: breathing
  uint8_t led_mode;
  /// 3. 当前闪烁/呼吸周期 (ms)
  /// Example: 10000 ms = 0.1 Hz, 100 ms = 10 Hz
  uint16_t led_period_ms;
  /// 4-6. 当前 RGB 通道亮度 (0~255)
  uint8_t led_r;
  uint8_t led_g;
  uint8_t led_b;
  uint32_t crc;
} h2x__msg__LRCUState;

// Struct for a sequence of h2x__msg__LRCUState.
typedef struct h2x__msg__LRCUState__Sequence
{
  h2x__msg__LRCUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__LRCUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__LRCU_STATE__STRUCT_H_
