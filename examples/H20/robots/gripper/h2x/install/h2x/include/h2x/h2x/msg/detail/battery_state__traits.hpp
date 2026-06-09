// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/battery_state.hpp"


#ifndef H2X__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define H2X__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryState & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: battery_state
  {
    out << "battery_state: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_state, out);
    out << ", ";
  }

  // member: battery_low_warning
  {
    out << "battery_low_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_low_warning, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: warning_code
  {
    out << "warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: battery_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_state: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_state, out);
    out << "\n";
  }

  // member: battery_low_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_low_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_low_warning, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: warning_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryState & msg, bool use_flow_style = false)
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
  const h2x::msg::BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::BatteryState & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::BatteryState>()
{
  return "h2x::msg::BatteryState";
}

template<>
inline const char * name<h2x::msg::BatteryState>()
{
  return "h2x/msg/BatteryState";
}

template<>
struct has_fixed_size<h2x::msg::BatteryState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::msg::BatteryState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
