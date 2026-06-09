// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/DebugCDUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_cdu_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_CDU_STATE__TRAITS_HPP_
#define H2X__MSG__DETAIL__DEBUG_CDU_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/debug_cdu_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugCDUState & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_counter
  {
    out << "frame_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_counter, out);
    out << ", ";
  }

  // member: electrical_status_feedback_id
  {
    out << "electrical_status_feedback_id: ";
    rosidl_generator_traits::value_to_yaml(msg.electrical_status_feedback_id, out);
    out << ", ";
  }

  // member: slave_online_status
  {
    out << "slave_online_status: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_online_status, out);
    out << ", ";
  }

  // member: cdu_fireware_version
  {
    out << "cdu_fireware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cdu_fireware_version, out);
    out << ", ";
  }

  // member: peripheral_status_feedback
  {
    out << "peripheral_status_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.peripheral_status_feedback, out);
    out << ", ";
  }

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

  // member: motor_bus_current
  {
    out << "motor_bus_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bus_current, out);
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
    out << ", ";
  }

  // member: pcu_firmware_version
  {
    out << "pcu_firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pcu_firmware_version, out);
    out << ", ";
  }

  // member: low_battery_warning
  {
    out << "low_battery_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.low_battery_warning, out);
    out << ", ";
  }

  // member: battery_warning_status_history_l2
  {
    out << "battery_warning_status_history_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_status_history_l2, out);
    out << ", ";
  }

  // member: battery_soc
  {
    out << "battery_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_soc, out);
    out << ", ";
  }

  // member: battery_soh
  {
    out << "battery_soh: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_soh, out);
    out << ", ";
  }

  // member: nominal_battery_capacity
  {
    out << "nominal_battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_battery_capacity, out);
    out << ", ";
  }

  // member: current_battery_capacity
  {
    out << "current_battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.current_battery_capacity, out);
    out << ", ";
  }

  // member: total_battery_voltage
  {
    out << "total_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.total_battery_voltage, out);
    out << ", ";
  }

  // member: total_battery_current
  {
    out << "total_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.total_battery_current, out);
    out << ", ";
  }

  // member: average_battery_temperature
  {
    out << "average_battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.average_battery_temperature, out);
    out << ", ";
  }

  // member: peak_battery_temperature
  {
    out << "peak_battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.peak_battery_temperature, out);
    out << ", ";
  }

  // member: battery_warning_status_l1
  {
    out << "battery_warning_status_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_status_l1, out);
    out << ", ";
  }

  // member: battery_warning_status_l2
  {
    out << "battery_warning_status_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_status_l2, out);
    out << ", ";
  }

  // member: mosfet_status
  {
    out << "mosfet_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mosfet_status, out);
    out << ", ";
  }

  // member: battery_cycle_count
  {
    out << "battery_cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_cycle_count, out);
    out << ", ";
  }

  // member: ntc_count
  {
    out << "ntc_count: ";
    rosidl_generator_traits::value_to_yaml(msg.ntc_count, out);
    out << ", ";
  }

  // member: series_cell_count
  {
    out << "series_cell_count: ";
    rosidl_generator_traits::value_to_yaml(msg.series_cell_count, out);
    out << ", ";
  }

  // member: current_control_source
  {
    out << "current_control_source: ";
    rosidl_generator_traits::value_to_yaml(msg.current_control_source, out);
    out << ", ";
  }

  // member: led_mode
  {
    out << "led_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.led_mode, out);
    out << ", ";
  }

  // member: led_period
  {
    out << "led_period: ";
    rosidl_generator_traits::value_to_yaml(msg.led_period, out);
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

  // member: lrcu_firmware_version
  {
    out << "lrcu_firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.lrcu_firmware_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugCDUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_counter, out);
    out << "\n";
  }

  // member: electrical_status_feedback_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "electrical_status_feedback_id: ";
    rosidl_generator_traits::value_to_yaml(msg.electrical_status_feedback_id, out);
    out << "\n";
  }

  // member: slave_online_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave_online_status: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_online_status, out);
    out << "\n";
  }

  // member: cdu_fireware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cdu_fireware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cdu_fireware_version, out);
    out << "\n";
  }

  // member: peripheral_status_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "peripheral_status_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.peripheral_status_feedback, out);
    out << "\n";
  }

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

  // member: motor_bus_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_bus_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_bus_current, out);
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

  // member: pcu_firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcu_firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.pcu_firmware_version, out);
    out << "\n";
  }

  // member: low_battery_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_battery_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.low_battery_warning, out);
    out << "\n";
  }

  // member: battery_warning_status_history_l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_warning_status_history_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_status_history_l2, out);
    out << "\n";
  }

  // member: battery_soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_soc: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_soc, out);
    out << "\n";
  }

  // member: battery_soh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_soh: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_soh, out);
    out << "\n";
  }

  // member: nominal_battery_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_battery_capacity, out);
    out << "\n";
  }

  // member: current_battery_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_battery_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.current_battery_capacity, out);
    out << "\n";
  }

  // member: total_battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.total_battery_voltage, out);
    out << "\n";
  }

  // member: total_battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.total_battery_current, out);
    out << "\n";
  }

  // member: average_battery_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.average_battery_temperature, out);
    out << "\n";
  }

  // member: peak_battery_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "peak_battery_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.peak_battery_temperature, out);
    out << "\n";
  }

  // member: battery_warning_status_l1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_warning_status_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_status_l1, out);
    out << "\n";
  }

  // member: battery_warning_status_l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_warning_status_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_status_l2, out);
    out << "\n";
  }

  // member: mosfet_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mosfet_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mosfet_status, out);
    out << "\n";
  }

  // member: battery_cycle_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_cycle_count: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_cycle_count, out);
    out << "\n";
  }

  // member: ntc_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ntc_count: ";
    rosidl_generator_traits::value_to_yaml(msg.ntc_count, out);
    out << "\n";
  }

  // member: series_cell_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_cell_count: ";
    rosidl_generator_traits::value_to_yaml(msg.series_cell_count, out);
    out << "\n";
  }

  // member: current_control_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_control_source: ";
    rosidl_generator_traits::value_to_yaml(msg.current_control_source, out);
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

  // member: led_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_period: ";
    rosidl_generator_traits::value_to_yaml(msg.led_period, out);
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

  // member: lrcu_firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lrcu_firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.lrcu_firmware_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugCDUState & msg, bool use_flow_style = false)
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
  const h2x::msg::DebugCDUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::DebugCDUState & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::DebugCDUState>()
{
  return "h2x::msg::DebugCDUState";
}

template<>
inline const char * name<h2x::msg::DebugCDUState>()
{
  return "h2x/msg/DebugCDUState";
}

template<>
struct has_fixed_size<h2x::msg::DebugCDUState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<h2x::msg::DebugCDUState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<h2x::msg::DebugCDUState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__DEBUG_CDU_STATE__TRAITS_HPP_
