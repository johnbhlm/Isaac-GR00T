// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from h2x:msg/LowCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "h2x/msg/detail/low_cmd__functions.h"
#include "h2x/msg/detail/low_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace h2x
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LowCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) h2x::msg::LowCmd(_init);
}

void LowCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<h2x::msg::LowCmd *>(message_memory);
  typed_message->~LowCmd();
}

size_t size_function__LowCmd__motor_cmd(const void * untyped_member)
{
  (void)untyped_member;
  return 37;
}

const void * get_const_function__LowCmd__motor_cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<h2x::msg::MotorCmd, 37> *>(untyped_member);
  return &member[index];
}

void * get_function__LowCmd__motor_cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<h2x::msg::MotorCmd, 37> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowCmd__motor_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const h2x::msg::MotorCmd *>(
    get_const_function__LowCmd__motor_cmd(untyped_member, index));
  auto & value = *reinterpret_cast<h2x::msg::MotorCmd *>(untyped_value);
  value = item;
}

void assign_function__LowCmd__motor_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<h2x::msg::MotorCmd *>(
    get_function__LowCmd__motor_cmd(untyped_member, index));
  const auto & value = *reinterpret_cast<const h2x::msg::MotorCmd *>(untyped_value);
  item = value;
}

size_t size_function__LowCmd__reserved(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__LowCmd__reserved(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__LowCmd__reserved(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__LowCmd__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__LowCmd__reserved(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__LowCmd__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__LowCmd__reserved(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LowCmd_message_member_array[4] = {
  {
    "mode_pr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::LowCmd, mode_pr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::msg::MotorCmd>(),  // members of sub message
    false,  // is key
    true,  // is array
    37,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::LowCmd, motor_cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowCmd__motor_cmd,  // size() function pointer
    get_const_function__LowCmd__motor_cmd,  // get_const(index) function pointer
    get_function__LowCmd__motor_cmd,  // get(index) function pointer
    fetch_function__LowCmd__motor_cmd,  // fetch(index, &value) function pointer
    assign_function__LowCmd__motor_cmd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::LowCmd, reserved),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowCmd__reserved,  // size() function pointer
    get_const_function__LowCmd__reserved,  // get_const(index) function pointer
    get_function__LowCmd__reserved,  // get(index) function pointer
    fetch_function__LowCmd__reserved,  // fetch(index, &value) function pointer
    assign_function__LowCmd__reserved,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::LowCmd, crc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LowCmd_message_members = {
  "h2x::msg",  // message namespace
  "LowCmd",  // message name
  4,  // number of fields
  sizeof(h2x::msg::LowCmd),
  false,  // has_any_key_member_
  LowCmd_message_member_array,  // message members
  LowCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  LowCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LowCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LowCmd_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__LowCmd__get_type_hash,
  &h2x__msg__LowCmd__get_type_description,
  &h2x__msg__LowCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace h2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<h2x::msg::LowCmd>()
{
  return &::h2x::msg::rosidl_typesupport_introspection_cpp::LowCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, h2x, msg, LowCmd)() {
  return &::h2x::msg::rosidl_typesupport_introspection_cpp::LowCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
