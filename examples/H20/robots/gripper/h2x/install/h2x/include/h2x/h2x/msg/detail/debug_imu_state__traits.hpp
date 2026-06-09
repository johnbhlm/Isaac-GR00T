// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/DebugIMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_imu_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_IMU_STATE__TRAITS_HPP_
#define H2X__MSG__DETAIL__DEBUG_IMU_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/debug_imu_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugIMUState & msg,
  std::ostream & out)
{
  out << "{";
  // member: slave_id
  {
    out << "slave_id: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_id, out);
    out << ", ";
  }

  // member: frame_counter
  {
    out << "frame_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_counter, out);
    out << ", ";
  }

  // member: status_word
  {
    out << "status_word: ";
    rosidl_generator_traits::value_to_yaml(msg.status_word, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: euler_angle_roll
  {
    out << "euler_angle_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.euler_angle_roll, out);
    out << ", ";
  }

  // member: eluer_angle_pitch
  {
    out << "eluer_angle_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.eluer_angle_pitch, out);
    out << ", ";
  }

  // member: eluer_angle_yaw
  {
    out << "eluer_angle_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.eluer_angle_yaw, out);
    out << ", ";
  }

  // member: q1
  {
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << ", ";
  }

  // member: q2
  {
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << ", ";
  }

  // member: q3
  {
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
    out << ", ";
  }

  // member: q4
  {
    out << "q4: ";
    rosidl_generator_traits::value_to_yaml(msg.q4, out);
    out << ", ";
  }

  // member: accx
  {
    out << "accx: ";
    rosidl_generator_traits::value_to_yaml(msg.accx, out);
    out << ", ";
  }

  // member: accy
  {
    out << "accy: ";
    rosidl_generator_traits::value_to_yaml(msg.accy, out);
    out << ", ";
  }

  // member: accz
  {
    out << "accz: ";
    rosidl_generator_traits::value_to_yaml(msg.accz, out);
    out << ", ";
  }

  // member: angular_vel_x
  {
    out << "angular_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel_x, out);
    out << ", ";
  }

  // member: angular_vel_y
  {
    out << "angular_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel_y, out);
    out << ", ";
  }

  // member: angular_vel_z
  {
    out << "angular_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel_z, out);
    out << ", ";
  }

  // member: mag_x
  {
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << ", ";
  }

  // member: mag_y
  {
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << ", ";
  }

  // member: mag_z
  {
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << ", ";
  }

  // member: txobject_index
  {
    out << "txobject_index: ";
    rosidl_generator_traits::value_to_yaml(msg.txobject_index, out);
    out << ", ";
  }

  // member: txobject_data
  {
    out << "txobject_data: ";
    rosidl_generator_traits::value_to_yaml(msg.txobject_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugIMUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: slave_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave_id: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_id, out);
    out << "\n";
  }

  // member: frame_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_counter, out);
    out << "\n";
  }

  // member: status_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_word: ";
    rosidl_generator_traits::value_to_yaml(msg.status_word, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: euler_angle_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "euler_angle_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.euler_angle_roll, out);
    out << "\n";
  }

  // member: eluer_angle_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eluer_angle_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.eluer_angle_pitch, out);
    out << "\n";
  }

  // member: eluer_angle_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eluer_angle_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.eluer_angle_yaw, out);
    out << "\n";
  }

  // member: q1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << "\n";
  }

  // member: q2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << "\n";
  }

  // member: q3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
    out << "\n";
  }

  // member: q4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q4: ";
    rosidl_generator_traits::value_to_yaml(msg.q4, out);
    out << "\n";
  }

  // member: accx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accx: ";
    rosidl_generator_traits::value_to_yaml(msg.accx, out);
    out << "\n";
  }

  // member: accy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accy: ";
    rosidl_generator_traits::value_to_yaml(msg.accy, out);
    out << "\n";
  }

  // member: accz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accz: ";
    rosidl_generator_traits::value_to_yaml(msg.accz, out);
    out << "\n";
  }

  // member: angular_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel_x, out);
    out << "\n";
  }

  // member: angular_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel_y, out);
    out << "\n";
  }

  // member: angular_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel_z, out);
    out << "\n";
  }

  // member: mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << "\n";
  }

  // member: mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << "\n";
  }

  // member: mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << "\n";
  }

  // member: txobject_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "txobject_index: ";
    rosidl_generator_traits::value_to_yaml(msg.txobject_index, out);
    out << "\n";
  }

  // member: txobject_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "txobject_data: ";
    rosidl_generator_traits::value_to_yaml(msg.txobject_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugIMUState & msg, bool use_flow_style = false)
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
  const h2x::msg::DebugIMUState & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::DebugIMUState & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::DebugIMUState>()
{
  return "h2x::msg::DebugIMUState";
}

template<>
inline const char * name<h2x::msg::DebugIMUState>()
{
  return "h2x/msg/DebugIMUState";
}

template<>
struct has_fixed_size<h2x::msg::DebugIMUState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::msg::DebugIMUState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::msg::DebugIMUState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__DEBUG_IMU_STATE__TRAITS_HPP_
