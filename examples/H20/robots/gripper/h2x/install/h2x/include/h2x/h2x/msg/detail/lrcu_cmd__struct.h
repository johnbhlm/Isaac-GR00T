// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/LRCUCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/lrcu_cmd.h"


#ifndef H2X__MSG__DETAIL__LRCU_CMD__STRUCT_H_
#define H2X__MSG__DETAIL__LRCU_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LRCUCmd in the package h2x.
/**
  * LED control command message
 */
typedef struct h2x__msg__LRCUCmd
{
  /// 1. 三色灯使能控制
  /// 0: disable, 1: enable
  uint8_t led_enable;
  /// 2. LED 模式控制
  /// 0: off, 1: constant, 2: blink, 3: breathing
  uint8_t led_mode;
  /// 3. 闪烁/呼吸周期控制 (ms)
  /// Range: 100~1000 ms
  uint16_t led_period_ms;
  /// 4-6. RGB 通道亮度控制 (0~255)
  uint8_t led_r;
  uint8_t led_g;
  uint8_t led_b;
  uint32_t crc;
} h2x__msg__LRCUCmd;

// Struct for a sequence of h2x__msg__LRCUCmd.
typedef struct h2x__msg__LRCUCmd__Sequence
{
  h2x__msg__LRCUCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__LRCUCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__LRCU_CMD__STRUCT_H_
