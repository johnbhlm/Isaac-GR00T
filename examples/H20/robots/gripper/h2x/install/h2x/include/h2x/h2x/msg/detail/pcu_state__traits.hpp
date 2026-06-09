// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/PCUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/pcu_state.hpp"


#ifndef H2X__MSG__DETAIL__PCU_STATE__TRAITS_HPP_
#define H2X__MSG__DETAIL__PCU_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/pcu_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const PCUState & msg,
  std::ostream & out)
{
  out << "{";
  // member: emergency_stop_state
  {
    out << "emergency_stop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_state, out);
    out << ", ";
  }

  // member: control_supply_state
  {
    out << "control_supply_state: ";
    rosidl_generator_traits::value_to_yaml(msg.control_supply_state, out);
    out << ", ";
  }

  // member: power_supply_state
  {
    out << "power_supply_state: ";
    rosidl_generator_traits::value_to_yaml(msg.power_supply_state, out);
    out << ", ";
  }

  // member: pcu_error_code
  {
    out << "pcu_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.pcu_error_code, out);
    out << ", ";
  }

  // member: pcu_warning_code
  {
    out << "pcu_warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.pcu_warning_code, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: motor_bus_voltage
  {
    out << "motor_bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bus_voltage, out);
    out << ", ";
  }

  // member: motor_bus_current
  {
    out << "motor_bus_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bus_current, out);
    out << ", ";
  }

  // member: dcdc_bus_voltage
  {
    out << "dcdc_bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_bus_voltage, out);
    out << ", ";
  }

  // member: voltage_24v
  {
    out << "voltage_24v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_24v, out);
    out << ", ";
  }

  // member: voltage_12v
  {
    out << "voltage_12v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_12v, out);
    out << ", ";
  }

  // member: current_24v
  {
    out << "current_24v: ";
    rosidl_generator_traits::value_to_yaml(msg.current_24v, out);
    out << ", ";
  }

  // member: current_12v
  {
    out << "current_12v: ";
    rosidl_generator_traits::value_to_yaml(msg.current_12v, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: emergency_stop_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_state, out);
    out << "\n";
  }

  // member: control_supply_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_supply_state: ";
    rosidl_generator_traits::value_to_yaml(msg.control_supply_state, out);
    out << "\n";
  }

  // member: power_supply_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_supply_state: ";
    rosidl_generator_traits::value_to_yaml(msg.power_supply_state, out);
    out << "\n";
  }

  // member: pcu_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcu_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.pcu_error_code, out);
    out << "\n";
  }

  // member: pcu_warning_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcu_warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.pcu_warning_code, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: motor_bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bus_voltage, out);
    out << "\n";
  }

  // member: motor_bus_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_bus_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bus_current, out);
    out << "\n";
  }

  // member: dcdc_bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc_bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc_bus_voltage, out);
    out << "\n";
  }

  // member: voltage_24v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_24v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_24v, out);
    out << "\n";
  }

  // member: voltage_12v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_12v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_12v, out);
    out << "\n";
  }

  // member: current_24v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_24v: ";
    rosidl_generator_traits::value_to_yaml(msg.current_24v, out);
    out << "\n";
  }

  // member: current_12v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_12v: ";
    rosidl_generator_traits::value_to_yaml(msg.current_12v, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCUState & msg, bool use_flow_style = false)
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
  const h2x::msg::PCUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::PCUState & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::PCUState>()
{
  return "h2x::msg::PCUState";
}

template<>
inline const char * name<h2x::msg::PCUState>()
{
  return "h2x/msg/PCUState";
}

template<>
struct has_fixed_size<h2x::msg::PCUState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::msg::PCUState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::msg::PCUState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__PCU_STATE__TRAITS_HPP_
