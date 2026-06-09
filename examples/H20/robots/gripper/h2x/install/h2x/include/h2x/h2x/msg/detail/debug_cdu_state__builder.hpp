// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/DebugCDUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_cdu_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_CDU_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__DEBUG_CDU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/debug_cdu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_DebugCDUState_lrcu_firmware_version
{
public:
  explicit Init_DebugCDUState_lrcu_firmware_version(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::DebugCDUState lrcu_firmware_version(::h2x::msg::DebugCDUState::_lrcu_firmware_version_type arg)
  {
    msg_.lrcu_firmware_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_led_b
{
public:
  explicit Init_DebugCDUState_led_b(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_lrcu_firmware_version led_b(::h2x::msg::DebugCDUState::_led_b_type arg)
  {
    msg_.led_b = std::move(arg);
    return Init_DebugCDUState_lrcu_firmware_version(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_led_g
{
public:
  explicit Init_DebugCDUState_led_g(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_led_b led_g(::h2x::msg::DebugCDUState::_led_g_type arg)
  {
    msg_.led_g = std::move(arg);
    return Init_DebugCDUState_led_b(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_led_r
{
public:
  explicit Init_DebugCDUState_led_r(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_led_g led_r(::h2x::msg::DebugCDUState::_led_r_type arg)
  {
    msg_.led_r = std::move(arg);
    return Init_DebugCDUState_led_g(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_led_period
{
public:
  explicit Init_DebugCDUState_led_period(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_led_r led_period(::h2x::msg::DebugCDUState::_led_period_type arg)
  {
    msg_.led_period = std::move(arg);
    return Init_DebugCDUState_led_r(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_led_mode
{
public:
  explicit Init_DebugCDUState_led_mode(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_led_period led_mode(::h2x::msg::DebugCDUState::_led_mode_type arg)
  {
    msg_.led_mode = std::move(arg);
    return Init_DebugCDUState_led_period(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_current_control_source
{
public:
  explicit Init_DebugCDUState_current_control_source(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_led_mode current_control_source(::h2x::msg::DebugCDUState::_current_control_source_type arg)
  {
    msg_.current_control_source = std::move(arg);
    return Init_DebugCDUState_led_mode(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_series_cell_count
{
public:
  explicit Init_DebugCDUState_series_cell_count(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_current_control_source series_cell_count(::h2x::msg::DebugCDUState::_series_cell_count_type arg)
  {
    msg_.series_cell_count = std::move(arg);
    return Init_DebugCDUState_current_control_source(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_ntc_count
{
public:
  explicit Init_DebugCDUState_ntc_count(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_series_cell_count ntc_count(::h2x::msg::DebugCDUState::_ntc_count_type arg)
  {
    msg_.ntc_count = std::move(arg);
    return Init_DebugCDUState_series_cell_count(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_battery_cycle_count
{
public:
  explicit Init_DebugCDUState_battery_cycle_count(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_ntc_count battery_cycle_count(::h2x::msg::DebugCDUState::_battery_cycle_count_type arg)
  {
    msg_.battery_cycle_count = std::move(arg);
    return Init_DebugCDUState_ntc_count(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_mosfet_status
{
public:
  explicit Init_DebugCDUState_mosfet_status(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_battery_cycle_count mosfet_status(::h2x::msg::DebugCDUState::_mosfet_status_type arg)
  {
    msg_.mosfet_status = std::move(arg);
    return Init_DebugCDUState_battery_cycle_count(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_battery_warning_status_l2
{
public:
  explicit Init_DebugCDUState_battery_warning_status_l2(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_mosfet_status battery_warning_status_l2(::h2x::msg::DebugCDUState::_battery_warning_status_l2_type arg)
  {
    msg_.battery_warning_status_l2 = std::move(arg);
    return Init_DebugCDUState_mosfet_status(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_battery_warning_status_l1
{
public:
  explicit Init_DebugCDUState_battery_warning_status_l1(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_battery_warning_status_l2 battery_warning_status_l1(::h2x::msg::DebugCDUState::_battery_warning_status_l1_type arg)
  {
    msg_.battery_warning_status_l1 = std::move(arg);
    return Init_DebugCDUState_battery_warning_status_l2(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_peak_battery_temperature
{
public:
  explicit Init_DebugCDUState_peak_battery_temperature(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_battery_warning_status_l1 peak_battery_temperature(::h2x::msg::DebugCDUState::_peak_battery_temperature_type arg)
  {
    msg_.peak_battery_temperature = std::move(arg);
    return Init_DebugCDUState_battery_warning_status_l1(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_average_battery_temperature
{
public:
  explicit Init_DebugCDUState_average_battery_temperature(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_peak_battery_temperature average_battery_temperature(::h2x::msg::DebugCDUState::_average_battery_temperature_type arg)
  {
    msg_.average_battery_temperature = std::move(arg);
    return Init_DebugCDUState_peak_battery_temperature(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_total_battery_current
{
public:
  explicit Init_DebugCDUState_total_battery_current(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_average_battery_temperature total_battery_current(::h2x::msg::DebugCDUState::_total_battery_current_type arg)
  {
    msg_.total_battery_current = std::move(arg);
    return Init_DebugCDUState_average_battery_temperature(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_total_battery_voltage
{
public:
  explicit Init_DebugCDUState_total_battery_voltage(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_total_battery_current total_battery_voltage(::h2x::msg::DebugCDUState::_total_battery_voltage_type arg)
  {
    msg_.total_battery_voltage = std::move(arg);
    return Init_DebugCDUState_total_battery_current(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_current_battery_capacity
{
public:
  explicit Init_DebugCDUState_current_battery_capacity(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_total_battery_voltage current_battery_capacity(::h2x::msg::DebugCDUState::_current_battery_capacity_type arg)
  {
    msg_.current_battery_capacity = std::move(arg);
    return Init_DebugCDUState_total_battery_voltage(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_nominal_battery_capacity
{
public:
  explicit Init_DebugCDUState_nominal_battery_capacity(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_current_battery_capacity nominal_battery_capacity(::h2x::msg::DebugCDUState::_nominal_battery_capacity_type arg)
  {
    msg_.nominal_battery_capacity = std::move(arg);
    return Init_DebugCDUState_current_battery_capacity(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_battery_soh
{
public:
  explicit Init_DebugCDUState_battery_soh(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_nominal_battery_capacity battery_soh(::h2x::msg::DebugCDUState::_battery_soh_type arg)
  {
    msg_.battery_soh = std::move(arg);
    return Init_DebugCDUState_nominal_battery_capacity(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_battery_soc
{
public:
  explicit Init_DebugCDUState_battery_soc(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_battery_soh battery_soc(::h2x::msg::DebugCDUState::_battery_soc_type arg)
  {
    msg_.battery_soc = std::move(arg);
    return Init_DebugCDUState_battery_soh(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_battery_warning_status_history_l2
{
public:
  explicit Init_DebugCDUState_battery_warning_status_history_l2(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_battery_soc battery_warning_status_history_l2(::h2x::msg::DebugCDUState::_battery_warning_status_history_l2_type arg)
  {
    msg_.battery_warning_status_history_l2 = std::move(arg);
    return Init_DebugCDUState_battery_soc(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_low_battery_warning
{
public:
  explicit Init_DebugCDUState_low_battery_warning(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_battery_warning_status_history_l2 low_battery_warning(::h2x::msg::DebugCDUState::_low_battery_warning_type arg)
  {
    msg_.low_battery_warning = std::move(arg);
    return Init_DebugCDUState_battery_warning_status_history_l2(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_pcu_firmware_version
{
public:
  explicit Init_DebugCDUState_pcu_firmware_version(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_low_battery_warning pcu_firmware_version(::h2x::msg::DebugCDUState::_pcu_firmware_version_type arg)
  {
    msg_.pcu_firmware_version = std::move(arg);
    return Init_DebugCDUState_low_battery_warning(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_current_12v
{
public:
  explicit Init_DebugCDUState_current_12v(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_pcu_firmware_version current_12v(::h2x::msg::DebugCDUState::_current_12v_type arg)
  {
    msg_.current_12v = std::move(arg);
    return Init_DebugCDUState_pcu_firmware_version(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_current_24v
{
public:
  explicit Init_DebugCDUState_current_24v(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_current_12v current_24v(::h2x::msg::DebugCDUState::_current_24v_type arg)
  {
    msg_.current_24v = std::move(arg);
    return Init_DebugCDUState_current_12v(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_motor_bus_current
{
public:
  explicit Init_DebugCDUState_motor_bus_current(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_current_24v motor_bus_current(::h2x::msg::DebugCDUState::_motor_bus_current_type arg)
  {
    msg_.motor_bus_current = std::move(arg);
    return Init_DebugCDUState_current_24v(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_voltage_12v
{
public:
  explicit Init_DebugCDUState_voltage_12v(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_motor_bus_current voltage_12v(::h2x::msg::DebugCDUState::_voltage_12v_type arg)
  {
    msg_.voltage_12v = std::move(arg);
    return Init_DebugCDUState_motor_bus_current(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_voltage_24v
{
public:
  explicit Init_DebugCDUState_voltage_24v(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_voltage_12v voltage_24v(::h2x::msg::DebugCDUState::_voltage_24v_type arg)
  {
    msg_.voltage_24v = std::move(arg);
    return Init_DebugCDUState_voltage_12v(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_dcdc_bus_voltage
{
public:
  explicit Init_DebugCDUState_dcdc_bus_voltage(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_voltage_24v dcdc_bus_voltage(::h2x::msg::DebugCDUState::_dcdc_bus_voltage_type arg)
  {
    msg_.dcdc_bus_voltage = std::move(arg);
    return Init_DebugCDUState_voltage_24v(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_motor_bus_voltage
{
public:
  explicit Init_DebugCDUState_motor_bus_voltage(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_dcdc_bus_voltage motor_bus_voltage(::h2x::msg::DebugCDUState::_motor_bus_voltage_type arg)
  {
    msg_.motor_bus_voltage = std::move(arg);
    return Init_DebugCDUState_dcdc_bus_voltage(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_battery_voltage
{
public:
  explicit Init_DebugCDUState_battery_voltage(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_motor_bus_voltage battery_voltage(::h2x::msg::DebugCDUState::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_DebugCDUState_motor_bus_voltage(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_power_supply_state
{
public:
  explicit Init_DebugCDUState_power_supply_state(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_battery_voltage power_supply_state(::h2x::msg::DebugCDUState::_power_supply_state_type arg)
  {
    msg_.power_supply_state = std::move(arg);
    return Init_DebugCDUState_battery_voltage(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_control_supply_state
{
public:
  explicit Init_DebugCDUState_control_supply_state(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_power_supply_state control_supply_state(::h2x::msg::DebugCDUState::_control_supply_state_type arg)
  {
    msg_.control_supply_state = std::move(arg);
    return Init_DebugCDUState_power_supply_state(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_emergency_stop_state
{
public:
  explicit Init_DebugCDUState_emergency_stop_state(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_control_supply_state emergency_stop_state(::h2x::msg::DebugCDUState::_emergency_stop_state_type arg)
  {
    msg_.emergency_stop_state = std::move(arg);
    return Init_DebugCDUState_control_supply_state(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_peripheral_status_feedback
{
public:
  explicit Init_DebugCDUState_peripheral_status_feedback(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_emergency_stop_state peripheral_status_feedback(::h2x::msg::DebugCDUState::_peripheral_status_feedback_type arg)
  {
    msg_.peripheral_status_feedback = std::move(arg);
    return Init_DebugCDUState_emergency_stop_state(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_cdu_fireware_version
{
public:
  explicit Init_DebugCDUState_cdu_fireware_version(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_peripheral_status_feedback cdu_fireware_version(::h2x::msg::DebugCDUState::_cdu_fireware_version_type arg)
  {
    msg_.cdu_fireware_version = std::move(arg);
    return Init_DebugCDUState_peripheral_status_feedback(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_slave_online_status
{
public:
  explicit Init_DebugCDUState_slave_online_status(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_cdu_fireware_version slave_online_status(::h2x::msg::DebugCDUState::_slave_online_status_type arg)
  {
    msg_.slave_online_status = std::move(arg);
    return Init_DebugCDUState_cdu_fireware_version(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_electrical_status_feedback_id
{
public:
  explicit Init_DebugCDUState_electrical_status_feedback_id(::h2x::msg::DebugCDUState & msg)
  : msg_(msg)
  {}
  Init_DebugCDUState_slave_online_status electrical_status_feedback_id(::h2x::msg::DebugCDUState::_electrical_status_feedback_id_type arg)
  {
    msg_.electrical_status_feedback_id = std::move(arg);
    return Init_DebugCDUState_slave_online_status(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

class Init_DebugCDUState_frame_counter
{
public:
  Init_DebugCDUState_frame_counter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugCDUState_electrical_status_feedback_id frame_counter(::h2x::msg::DebugCDUState::_frame_counter_type arg)
  {
    msg_.frame_counter = std::move(arg);
    return Init_DebugCDUState_electrical_status_feedback_id(msg_);
  }

private:
  ::h2x::msg::DebugCDUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::DebugCDUState>()
{
  return h2x::msg::builder::Init_DebugCDUState_frame_counter();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DEBUG_CDU_STATE__BUILDER_HPP_
