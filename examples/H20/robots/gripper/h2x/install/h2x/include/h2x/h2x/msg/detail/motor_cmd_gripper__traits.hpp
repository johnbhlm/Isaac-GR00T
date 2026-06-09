// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_cmd_gripper.hpp"


#ifndef H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__TRAITS_HPP_
#define H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/motor_cmd_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCmdGripper & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: operation_mode
  {
    out << "operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_mode, out);
    out << ", ";
  }

  // member: q
  {
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << ", ";
  }

  // member: dq_percentage
  {
    out << "dq_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.dq_percentage, out);
    out << ", ";
  }

  // member: acc_percentage
  {
    out << "acc_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_percentage, out);
    out << ", ";
  }

  // member: finger_force
  {
    out << "finger_force: ";
    rosidl_generator_traits::value_to_yaml(msg.finger_force, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCmdGripper & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: operation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operation_mode, out);
    out << "\n";
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << "\n";
  }

  // member: dq_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dq_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.dq_percentage, out);
    out << "\n";
  }

  // member: acc_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_percentage, out);
    out << "\n";
  }

  // member: finger_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finger_force: ";
    rosidl_generator_traits::value_to_yaml(msg.finger_force, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCmdGripper & msg, bool use_flow_style = false)
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
  const h2x::msg::MotorCmdGripper & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::MotorCmdGripper & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::MotorCmdGripper>()
{
  return "h2x::msg::MotorCmdGripper";
}

template<>
inline const char * name<h2x::msg::MotorCmdGripper>()
{
  return "h2x/msg/MotorCmdGripper";
}

template<>
struct has_fixed_size<h2x::msg::MotorCmdGripper>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::msg::MotorCmdGripper>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::msg::MotorCmdGripper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__TRAITS_HPP_
