// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/GripperDiagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnosis.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__TRAITS_HPP_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/gripper_diagnosis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ds_data'
#include "h2x/msg/detail/gripper_diagnostic_data__traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperDiagnosis & msg,
  std::ostream & out)
{
  out << "{";
  // member: ds_data
  {
    if (msg.ds_data.size() == 0) {
      out << "ds_data: []";
    } else {
      out << "ds_data: [";
      size_t pending_items = msg.ds_data.size();
      for (auto item : msg.ds_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperDiagnosis & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ds_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ds_data.size() == 0) {
      out << "ds_data: []\n";
    } else {
      out << "ds_data:\n";
      for (auto item : msg.ds_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const GripperDiagnosis & msg, bool use_flow_style = false)
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
  const h2x::msg::GripperDiagnosis & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::GripperDiagnosis & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::GripperDiagnosis>()
{
  return "h2x::msg::GripperDiagnosis";
}

template<>
inline const char * name<h2x::msg::GripperDiagnosis>()
{
  return "h2x/msg/GripperDiagnosis";
}

template<>
struct has_fixed_size<h2x::msg::GripperDiagnosis>
  : std::integral_constant<bool, has_fixed_size<h2x::msg::GripperDiagnosticData>::value> {};

template<>
struct has_bounded_size<h2x::msg::GripperDiagnosis>
  : std::integral_constant<bool, has_bounded_size<h2x::msg::GripperDiagnosticData>::value> {};

template<>
struct is_message<h2x::msg::GripperDiagnosis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__TRAITS_HPP_
