// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:srv/SetWlanPower.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_wlan_power.hpp"


#ifndef H2X__SRV__DETAIL__SET_WLAN_POWER__TRAITS_HPP_
#define H2X__SRV__DETAIL__SET_WLAN_POWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/srv/detail/set_wlan_power__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetWlanPower_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode_state
  {
    out << "mode_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetWlanPower_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetWlanPower_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace h2x

namespace rosidl_generator_traits
{

[[deprecated("use h2x::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const h2x::srv::SetWlanPower_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::srv::to_yaml() instead")]]
inline std::string to_yaml(const h2x::srv::SetWlanPower_Request & msg)
{
  return h2x::srv::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::srv::SetWlanPower_Request>()
{
  return "h2x::srv::SetWlanPower_Request";
}

template<>
inline const char * name<h2x::srv::SetWlanPower_Request>()
{
  return "h2x/srv/SetWlanPower_Request";
}

template<>
struct has_fixed_size<h2x::srv::SetWlanPower_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::srv::SetWlanPower_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::srv::SetWlanPower_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace h2x
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetWlanPower_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetWlanPower_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetWlanPower_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace h2x

namespace rosidl_generator_traits
{

[[deprecated("use h2x::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const h2x::srv::SetWlanPower_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::srv::to_yaml() instead")]]
inline std::string to_yaml(const h2x::srv::SetWlanPower_Response & msg)
{
  return h2x::srv::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::srv::SetWlanPower_Response>()
{
  return "h2x::srv::SetWlanPower_Response";
}

template<>
inline const char * name<h2x::srv::SetWlanPower_Response>()
{
  return "h2x/srv/SetWlanPower_Response";
}

template<>
struct has_fixed_size<h2x::srv::SetWlanPower_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<h2x::srv::SetWlanPower_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<h2x::srv::SetWlanPower_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace h2x
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetWlanPower_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SetWlanPower_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetWlanPower_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace h2x

namespace rosidl_generator_traits
{

[[deprecated("use h2x::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const h2x::srv::SetWlanPower_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::srv::to_yaml() instead")]]
inline std::string to_yaml(const h2x::srv::SetWlanPower_Event & msg)
{
  return h2x::srv::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::srv::SetWlanPower_Event>()
{
  return "h2x::srv::SetWlanPower_Event";
}

template<>
inline const char * name<h2x::srv::SetWlanPower_Event>()
{
  return "h2x/srv/SetWlanPower_Event";
}

template<>
struct has_fixed_size<h2x::srv::SetWlanPower_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<h2x::srv::SetWlanPower_Event>
  : std::integral_constant<bool, has_bounded_size<h2x::srv::SetWlanPower_Request>::value && has_bounded_size<h2x::srv::SetWlanPower_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<h2x::srv::SetWlanPower_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<h2x::srv::SetWlanPower>()
{
  return "h2x::srv::SetWlanPower";
}

template<>
inline const char * name<h2x::srv::SetWlanPower>()
{
  return "h2x/srv/SetWlanPower";
}

template<>
struct has_fixed_size<h2x::srv::SetWlanPower>
  : std::integral_constant<
    bool,
    has_fixed_size<h2x::srv::SetWlanPower_Request>::value &&
    has_fixed_size<h2x::srv::SetWlanPower_Response>::value
  >
{
};

template<>
struct has_bounded_size<h2x::srv::SetWlanPower>
  : std::integral_constant<
    bool,
    has_bounded_size<h2x::srv::SetWlanPower_Request>::value &&
    has_bounded_size<h2x::srv::SetWlanPower_Response>::value
  >
{
};

template<>
struct is_service<h2x::srv::SetWlanPower>
  : std::true_type
{
};

template<>
struct is_service_request<h2x::srv::SetWlanPower_Request>
  : std::true_type
{
};

template<>
struct is_service_response<h2x::srv::SetWlanPower_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // H2X__SRV__DETAIL__SET_WLAN_POWER__TRAITS_HPP_
