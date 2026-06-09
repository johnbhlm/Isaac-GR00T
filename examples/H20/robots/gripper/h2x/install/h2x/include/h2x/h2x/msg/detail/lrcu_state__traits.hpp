// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/LRCUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/lrcu_state.hpp"


#ifndef H2X__MSG__DETAIL__LRCU_STATE__TRAITS_HPP_
#define H2X__MSG__DETAIL__LRCU_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/lrcu_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const LRCUState & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_enable
  {
    out << "led_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.led_enable, out);
    out << ", ";
  }

  // member: led_mode
  {
    out << "led_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.led_mode, out);
    out << ", ";
  }

  // member: led_period_ms
  {
    out << "led_period_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.led_period_ms, out);
    out << ", ";
  }

  // member: led_r
  {
    out << "led_r: ";
    rosidl_generator_traits::value_to_yaml(msg.led_r, out);
    out << ", ";
  }

  // member: led_g
  {
    out << "led_g: ";
    rosidl_generator_traits::value_to_yaml(msg.led_g, out);
    out << ", ";
  }

  // member: led_b
  {
    out << "led_b: ";
    rosidl_generator_traits::value_to_yaml(msg.led_b, out);
    out << ", ";
  }

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LRCUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.led_enable, out);
    out << "\n";
  }

  // member: led_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.led_mode, out);
    out << "\n";
  }

  // member: led_period_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_period_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.led_period_ms, out);
    out << "\n";
  }

  // member: led_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_r: ";
    rosidl_generator_traits::value_to_yaml(msg.led_r, out);
    out << "\n";
  }

  // member: led_g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_g: ";
    rosidl_generator_traits::value_to_yaml(msg.led_g, out);
    out << "\n";
  }

  // member: led_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_b: ";
    rosidl_generator_traits::value_to_yaml(msg.led_b, out);
    out << "\n";
  }

  // member: crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LRCUState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace h2x

namespace rosidl_generator_traits
{

[[deprecated("use h2x::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const h2x::msg::LRCUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::LRCUState & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::LRCUState>()
{
  return "h2x::msg::LRCUState";
}

template<>
inline const char * name<h2x::msg::LRCUState>()
{
  return "h2x/msg/LRCUState";
}

template<>
struct has_fixed_size<h2x::msg::LRCUState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::msg::LRCUState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::msg::LRCUState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__LRCU_STATE__TRAITS_HPP_
