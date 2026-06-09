// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/Diagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/diagnosis.hpp"


#ifndef H2X__MSG__DETAIL__DIAGNOSIS__TRAITS_HPP_
#define H2X__MSG__DETAIL__DIAGNOSIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/diagnosis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ds402_data'
#include "h2x/msg/detail/diagnostic_data__traits.hpp"
// Member 'debug_imu_state'
#include "h2x/msg/detail/debug_imu_state__traits.hpp"
// Member 'debug_cdu_state'
#include "h2x/msg/detail/debug_cdu_state__traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const Diagnosis & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_ds402
  {
    if (msg.is_ds402.size() == 0) {
      out << "is_ds402: []";
    } else {
      out << "is_ds402: [";
      size_t pending_items = msg.is_ds402.size();
      for (auto item : msg.is_ds402) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ds402_data
  {
    if (msg.ds402_data.size() == 0) {
      out << "ds402_data: []";
    } else {
      out << "ds402_data: [";
      size_t pending_items = msg.ds402_data.size();
      for (auto item : msg.ds402_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_imu_state
  {
    if (msg.debug_imu_state.size() == 0) {
      out << "debug_imu_state: []";
    } else {
      out << "debug_imu_state: [";
      size_t pending_items = msg.debug_imu_state.size();
      for (auto item : msg.debug_imu_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_cdu_state
  {
    out << "debug_cdu_state: ";
    to_flow_style_yaml(msg.debug_cdu_state, out);
    out << ", ";
  }

  // member: error_code
  {
    if (msg.error_code.size() == 0) {
      out << "error_code: []";
    } else {
      out << "error_code: [";
      size_t pending_items = msg.error_code.size();
      for (auto item : msg.error_code) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: warning_code
  {
    if (msg.warning_code.size() == 0) {
      out << "warning_code: []";
    } else {
      out << "warning_code: [";
      size_t pending_items = msg.warning_code.size();
      for (auto item : msg.warning_code) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cdu_error_code
  {
    out << "cdu_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.cdu_error_code, out);
    out << ", ";
  }

  // member: cdu_warning_code
  {
    out << "cdu_warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.cdu_warning_code, out);
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

  // member: imu_error_code
  {
    if (msg.imu_error_code.size() == 0) {
      out << "imu_error_code: []";
    } else {
      out << "imu_error_code: [";
      size_t pending_items = msg.imu_error_code.size();
      for (auto item : msg.imu_error_code) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_warning_code
  {
    if (msg.imu_warning_code.size() == 0) {
      out << "imu_warning_code: []";
    } else {
      out << "imu_warning_code: [";
      size_t pending_items = msg.imu_warning_code.size();
      for (auto item : msg.imu_warning_code) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: battery_error_code
  {
    out << "battery_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_error_code, out);
    out << ", ";
  }

  // member: battery_warning_code
  {
    out << "battery_warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_code, out);
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
  const Diagnosis & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_ds402
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.is_ds402.size() == 0) {
      out << "is_ds402: []\n";
    } else {
      out << "is_ds402:\n";
      for (auto item : msg.is_ds402) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ds402_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ds402_data.size() == 0) {
      out << "ds402_data: []\n";
    } else {
      out << "ds402_data:\n";
      for (auto item : msg.ds402_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: debug_imu_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.debug_imu_state.size() == 0) {
      out << "debug_imu_state: []\n";
    } else {
      out << "debug_imu_state:\n";
      for (auto item : msg.debug_imu_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: debug_cdu_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_cdu_state:\n";
    to_block_style_yaml(msg.debug_cdu_state, out, indentation + 2);
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_code.size() == 0) {
      out << "error_code: []\n";
    } else {
      out << "error_code:\n";
      for (auto item : msg.error_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: warning_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.warning_code.size() == 0) {
      out << "warning_code: []\n";
    } else {
      out << "warning_code:\n";
      for (auto item : msg.warning_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cdu_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cdu_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.cdu_error_code, out);
    out << "\n";
  }

  // member: cdu_warning_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cdu_warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.cdu_warning_code, out);
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

  // member: imu_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_error_code.size() == 0) {
      out << "imu_error_code: []\n";
    } else {
      out << "imu_error_code:\n";
      for (auto item : msg.imu_error_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu_warning_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_warning_code.size() == 0) {
      out << "imu_warning_code: []\n";
    } else {
      out << "imu_warning_code:\n";
      for (auto item : msg.imu_warning_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: battery_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_error_code, out);
    out << "\n";
  }

  // member: battery_warning_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_warning_code: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning_code, out);
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

inline std::string to_yaml(const Diagnosis & msg, bool use_flow_style = false)
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
  const h2x::msg::Diagnosis & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::Diagnosis & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::Diagnosis>()
{
  return "h2x::msg::Diagnosis";
}

template<>
inline const char * name<h2x::msg::Diagnosis>()
{
  return "h2x/msg/Diagnosis";
}

template<>
struct has_fixed_size<h2x::msg::Diagnosis>
  : std::integral_constant<bool, has_fixed_size<h2x::msg::DebugCDUState>::value && has_fixed_size<h2x::msg::DebugIMUState>::value && has_fixed_size<h2x::msg::DiagnosticData>::value> {};

template<>
struct has_bounded_size<h2x::msg::Diagnosis>
  : std::integral_constant<bool, has_bounded_size<h2x::msg::DebugCDUState>::value && has_bounded_size<h2x::msg::DebugIMUState>::value && has_bounded_size<h2x::msg::DiagnosticData>::value> {};

template<>
struct is_message<h2x::msg::Diagnosis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__DIAGNOSIS__TRAITS_HPP_
