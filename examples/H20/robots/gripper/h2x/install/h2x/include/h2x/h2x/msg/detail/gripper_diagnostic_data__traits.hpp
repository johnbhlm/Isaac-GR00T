// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/GripperDiagnosticData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnostic_data.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__TRAITS_HPP_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/gripper_diagnostic_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperDiagnosticData & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode_of_operation
  {
    out << "mode_of_operation: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_of_operation, out);
    out << ", ";
  }

  // member: mode_display
  {
    out << "mode_display: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_display, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperDiagnosticData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode_of_operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_of_operation: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_of_operation, out);
    out << "\n";
  }

  // member: mode_display
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_display: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_display, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperDiagnosticData & msg, bool use_flow_style = false)
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
  const h2x::msg::GripperDiagnosticData & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::GripperDiagnosticData & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::GripperDiagnosticData>()
{
  return "h2x::msg::GripperDiagnosticData";
}

template<>
inline const char * name<h2x::msg::GripperDiagnosticData>()
{
  return "h2x/msg/GripperDiagnosticData";
}

template<>
struct has_fixed_size<h2x::msg::GripperDiagnosticData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::msg::GripperDiagnosticData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::msg::GripperDiagnosticData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__TRAITS_HPP_
