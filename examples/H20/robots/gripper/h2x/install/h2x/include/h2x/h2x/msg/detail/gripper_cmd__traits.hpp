// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/GripperCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_cmd.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_CMD__TRAITS_HPP_
#define H2X__MSG__DETAIL__GRIPPER_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/gripper_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motor_cmd'
#include "h2x/msg/detail/motor_cmd_gripper__traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_cmd
  {
    if (msg.motor_cmd.size() == 0) {
      out << "motor_cmd: []";
    } else {
      out << "motor_cmd: [";
      size_t pending_items = msg.motor_cmd.size();
      for (auto item : msg.motor_cmd) {
        to_flow_style_yaml(item, out);
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
  const GripperCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_cmd.size() == 0) {
      out << "motor_cmd: []\n";
    } else {
      out << "motor_cmd:\n";
      for (auto item : msg.motor_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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

inline std::string to_yaml(const GripperCmd & msg, bool use_flow_style = false)
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
  const h2x::msg::GripperCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::GripperCmd & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::GripperCmd>()
{
  return "h2x::msg::GripperCmd";
}

template<>
inline const char * name<h2x::msg::GripperCmd>()
{
  return "h2x/msg/GripperCmd";
}

template<>
struct has_fixed_size<h2x::msg::GripperCmd>
  : std::integral_constant<bool, has_fixed_size<h2x::msg::MotorCmdGripper>::value> {};

template<>
struct has_bounded_size<h2x::msg::GripperCmd>
  : std::integral_constant<bool, has_bounded_size<h2x::msg::MotorCmdGripper>::value> {};

template<>
struct is_message<h2x::msg::GripperCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__GRIPPER_CMD__TRAITS_HPP_
