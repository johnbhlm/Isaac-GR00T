// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/LowState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/low_state.hpp"


#ifndef H2X__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
#define H2X__MSG__DETAIL__LOW_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/low_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imu_state'
#include "h2x/msg/detail/imu_state__traits.hpp"
// Member 'motor_state'
#include "h2x/msg/detail/motor_state__traits.hpp"
// Member 'battery_info'
#include "h2x/msg/detail/battery_state__traits.hpp"
// Member 'pcu_state'
#include "h2x/msg/detail/pcu_state__traits.hpp"
// Member 'cdu_state'
#include "h2x/msg/detail/cdu_state__traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const LowState & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    if (msg.version.size() == 0) {
      out << "version: []";
    } else {
      out << "version: [";
      size_t pending_items = msg.version.size();
      for (auto item : msg.version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mode_pr
  {
    out << "mode_pr: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_pr, out);
    out << ", ";
  }

  // member: tick
  {
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << ", ";
  }

  // member: imu_state
  {
    if (msg.imu_state.size() == 0) {
      out << "imu_state: []";
    } else {
      out << "imu_state: [";
      size_t pending_items = msg.imu_state.size();
      for (auto item : msg.imu_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_state
  {
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []";
    } else {
      out << "motor_state: [";
      size_t pending_items = msg.motor_state.size();
      for (auto item : msg.motor_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_battery_info
  {
    out << "has_battery_info: ";
    rosidl_generator_traits::value_to_yaml(msg.has_battery_info, out);
    out << ", ";
  }

  // member: battery_info
  {
    out << "battery_info: ";
    to_flow_style_yaml(msg.battery_info, out);
    out << ", ";
  }

  // member: ground_count
  {
    out << "ground_count: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_count, out);
    out << ", ";
  }

  // member: ground_signal
  {
    if (msg.ground_signal.size() == 0) {
      out << "ground_signal: []";
    } else {
      out << "ground_signal: [";
      size_t pending_items = msg.ground_signal.size();
      for (auto item : msg.ground_signal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_seconds
  {
    out << "time_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.time_seconds, out);
    out << ", ";
  }

  // member: is_pcu_valid
  {
    out << "is_pcu_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_pcu_valid, out);
    out << ", ";
  }

  // member: pcu_state
  {
    out << "pcu_state: ";
    to_flow_style_yaml(msg.pcu_state, out);
    out << ", ";
  }

  // member: is_cdu_valid
  {
    out << "is_cdu_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_cdu_valid, out);
    out << ", ";
  }

  // member: cdu_state
  {
    out << "cdu_state: ";
    to_flow_style_yaml(msg.cdu_state, out);
    out << ", ";
  }

  // member: is_data_valid
  {
    out << "is_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_data_valid, out);
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
    out << ", ";
  }

  // member: reserved
  {
    if (msg.reserved.size() == 0) {
      out << "reserved: []";
    } else {
      out << "reserved: [";
      size_t pending_items = msg.reserved.size();
      for (auto item : msg.reserved) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const LowState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.version.size() == 0) {
      out << "version: []\n";
    } else {
      out << "version:\n";
      for (auto item : msg.version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mode_pr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_pr: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_pr, out);
    out << "\n";
  }

  // member: tick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << "\n";
  }

  // member: imu_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_state.size() == 0) {
      out << "imu_state: []\n";
    } else {
      out << "imu_state:\n";
      for (auto item : msg.imu_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: motor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_state.size() == 0) {
      out << "motor_state: []\n";
    } else {
      out << "motor_state:\n";
      for (auto item : msg.motor_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: has_battery_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_battery_info: ";
    rosidl_generator_traits::value_to_yaml(msg.has_battery_info, out);
    out << "\n";
  }

  // member: battery_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_info:\n";
    to_block_style_yaml(msg.battery_info, out, indentation + 2);
  }

  // member: ground_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_count: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_count, out);
    out << "\n";
  }

  // member: ground_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ground_signal.size() == 0) {
      out << "ground_signal: []\n";
    } else {
      out << "ground_signal:\n";
      for (auto item : msg.ground_signal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.time_seconds, out);
    out << "\n";
  }

  // member: is_pcu_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_pcu_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_pcu_valid, out);
    out << "\n";
  }

  // member: pcu_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcu_state:\n";
    to_block_style_yaml(msg.pcu_state, out, indentation + 2);
  }

  // member: is_cdu_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_cdu_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_cdu_valid, out);
    out << "\n";
  }

  // member: cdu_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cdu_state:\n";
    to_block_style_yaml(msg.cdu_state, out, indentation + 2);
  }

  // member: is_data_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_data_valid, out);
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

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved.size() == 0) {
      out << "reserved: []\n";
    } else {
      out << "reserved:\n";
      for (auto item : msg.reserved) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const LowState & msg, bool use_flow_style = false)
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
  const h2x::msg::LowState & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::LowState & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::LowState>()
{
  return "h2x::msg::LowState";
}

template<>
inline const char * name<h2x::msg::LowState>()
{
  return "h2x/msg/LowState";
}

template<>
struct has_fixed_size<h2x::msg::LowState>
  : std::integral_constant<bool, has_fixed_size<h2x::msg::BatteryState>::value && has_fixed_size<h2x::msg::CDUState>::value && has_fixed_size<h2x::msg::IMUState>::value && has_fixed_size<h2x::msg::MotorState>::value && has_fixed_size<h2x::msg::PCUState>::value> {};

template<>
struct has_bounded_size<h2x::msg::LowState>
  : std::integral_constant<bool, has_bounded_size<h2x::msg::BatteryState>::value && has_bounded_size<h2x::msg::CDUState>::value && has_bounded_size<h2x::msg::IMUState>::value && has_bounded_size<h2x::msg::MotorState>::value && has_bounded_size<h2x::msg::PCUState>::value> {};

template<>
struct is_message<h2x::msg::LowState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
