// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from h2x:msg/Diagnosis.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "h2x/msg/detail/diagnosis__functions.h"
#include "h2x/msg/detail/diagnosis__struct.hpp"
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

void Diagnosis_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) h2x::msg::Diagnosis(_init);
}

void Diagnosis_fini_function(void * message_memory)
{
  auto typed_message = static_cast<h2x::msg::Diagnosis *>(message_memory);
  typed_message->~Diagnosis();
}

size_t size_function__Diagnosis__is_ds402(const void * untyped_member)
{
  (void)untyped_member;
  return 37;
}

const void * get_const_function__Diagnosis__is_ds402(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 37> *>(untyped_member);
  return &member[index];
}

void * get_function__Diagnosis__is_ds402(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 37> *>(untyped_member);
  return &member[index];
}

void fetch_function__Diagnosis__is_ds402(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__Diagnosis__is_ds402(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__Diagnosis__is_ds402(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__Diagnosis__is_ds402(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__Diagnosis__ds402_data(const void * untyped_member)
{
  (void)untyped_member;
  return 37;
}

const void * get_const_function__Diagnosis__ds402_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<h2x::msg::DiagnosticData, 37> *>(untyped_member);
  return &member[index];
}

void * get_function__Diagnosis__ds402_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<h2x::msg::DiagnosticData, 37> *>(untyped_member);
  return &member[index];
}

void fetch_function__Diagnosis__ds402_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const h2x::msg::DiagnosticData *>(
    get_const_function__Diagnosis__ds402_data(untyped_member, index));
  auto & value = *reinterpret_cast<h2x::msg::DiagnosticData *>(untyped_value);
  value = item;
}

void assign_function__Diagnosis__ds402_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<h2x::msg::DiagnosticData *>(
    get_function__Diagnosis__ds402_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const h2x::msg::DiagnosticData *>(untyped_value);
  item = value;
}

size_t size_function__Diagnosis__debug_imu_state(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Diagnosis__debug_imu_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<h2x::msg::DebugIMUState, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Diagnosis__debug_imu_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<h2x::msg::DebugIMUState, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Diagnosis__debug_imu_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const h2x::msg::DebugIMUState *>(
    get_const_function__Diagnosis__debug_imu_state(untyped_member, index));
  auto & value = *reinterpret_cast<h2x::msg::DebugIMUState *>(untyped_value);
  value = item;
}

void assign_function__Diagnosis__debug_imu_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<h2x::msg::DebugIMUState *>(
    get_function__Diagnosis__debug_imu_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const h2x::msg::DebugIMUState *>(untyped_value);
  item = value;
}

size_t size_function__Diagnosis__error_code(const void * untyped_member)
{
  (void)untyped_member;
  return 37;
}

const void * get_const_function__Diagnosis__error_code(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 37> *>(untyped_member);
  return &member[index];
}

void * get_function__Diagnosis__error_code(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 37> *>(untyped_member);
  return &member[index];
}

void fetch_function__Diagnosis__error_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Diagnosis__error_code(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Diagnosis__error_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Diagnosis__error_code(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Diagnosis__warning_code(const void * untyped_member)
{
  (void)untyped_member;
  return 37;
}

const void * get_const_function__Diagnosis__warning_code(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 37> *>(untyped_member);
  return &member[index];
}

void * get_function__Diagnosis__warning_code(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 37> *>(untyped_member);
  return &member[index];
}

void fetch_function__Diagnosis__warning_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Diagnosis__warning_code(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Diagnosis__warning_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Diagnosis__warning_code(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Diagnosis__imu_error_code(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Diagnosis__imu_error_code(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Diagnosis__imu_error_code(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Diagnosis__imu_error_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Diagnosis__imu_error_code(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Diagnosis__imu_error_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Diagnosis__imu_error_code(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

size_t size_function__Diagnosis__imu_warning_code(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Diagnosis__imu_warning_code(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Diagnosis__imu_warning_code(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Diagnosis__imu_warning_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__Diagnosis__imu_warning_code(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__Diagnosis__imu_warning_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__Diagnosis__imu_warning_code(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Diagnosis_message_member_array[15] = {
  {
    "is_ds402",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    37,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, is_ds402),  // bytes offset in struct
    nullptr,  // default value
    size_function__Diagnosis__is_ds402,  // size() function pointer
    get_const_function__Diagnosis__is_ds402,  // get_const(index) function pointer
    get_function__Diagnosis__is_ds402,  // get(index) function pointer
    fetch_function__Diagnosis__is_ds402,  // fetch(index, &value) function pointer
    assign_function__Diagnosis__is_ds402,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ds402_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::msg::DiagnosticData>(),  // members of sub message
    false,  // is key
    true,  // is array
    37,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, ds402_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Diagnosis__ds402_data,  // size() function pointer
    get_const_function__Diagnosis__ds402_data,  // get_const(index) function pointer
    get_function__Diagnosis__ds402_data,  // get(index) function pointer
    fetch_function__Diagnosis__ds402_data,  // fetch(index, &value) function pointer
    assign_function__Diagnosis__ds402_data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "debug_imu_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::msg::DebugIMUState>(),  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, debug_imu_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Diagnosis__debug_imu_state,  // size() function pointer
    get_const_function__Diagnosis__debug_imu_state,  // get_const(index) function pointer
    get_function__Diagnosis__debug_imu_state,  // get(index) function pointer
    fetch_function__Diagnosis__debug_imu_state,  // fetch(index, &value) function pointer
    assign_function__Diagnosis__debug_imu_state,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "debug_cdu_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::msg::DebugCDUState>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, debug_cdu_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    37,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, error_code),  // bytes offset in struct
    nullptr,  // default value
    size_function__Diagnosis__error_code,  // size() function pointer
    get_const_function__Diagnosis__error_code,  // get_const(index) function pointer
    get_function__Diagnosis__error_code,  // get(index) function pointer
    fetch_function__Diagnosis__error_code,  // fetch(index, &value) function pointer
    assign_function__Diagnosis__error_code,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "warning_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    37,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, warning_code),  // bytes offset in struct
    nullptr,  // default value
    size_function__Diagnosis__warning_code,  // size() function pointer
    get_const_function__Diagnosis__warning_code,  // get_const(index) function pointer
    get_function__Diagnosis__warning_code,  // get(index) function pointer
    fetch_function__Diagnosis__warning_code,  // fetch(index, &value) function pointer
    assign_function__Diagnosis__warning_code,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cdu_error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, cdu_error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cdu_warning_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, cdu_warning_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pcu_error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, pcu_error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pcu_warning_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, pcu_warning_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, imu_error_code),  // bytes offset in struct
    nullptr,  // default value
    size_function__Diagnosis__imu_error_code,  // size() function pointer
    get_const_function__Diagnosis__imu_error_code,  // get_const(index) function pointer
    get_function__Diagnosis__imu_error_code,  // get(index) function pointer
    fetch_function__Diagnosis__imu_error_code,  // fetch(index, &value) function pointer
    assign_function__Diagnosis__imu_error_code,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_warning_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, imu_warning_code),  // bytes offset in struct
    nullptr,  // default value
    size_function__Diagnosis__imu_warning_code,  // size() function pointer
    get_const_function__Diagnosis__imu_warning_code,  // get_const(index) function pointer
    get_function__Diagnosis__imu_warning_code,  // get(index) function pointer
    fetch_function__Diagnosis__imu_warning_code,  // fetch(index, &value) function pointer
    assign_function__Diagnosis__imu_warning_code,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery_error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, battery_error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery_warning_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::Diagnosis, battery_warning_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(h2x::msg::Diagnosis, crc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Diagnosis_message_members = {
  "h2x::msg",  // message namespace
  "Diagnosis",  // message name
  15,  // number of fields
  sizeof(h2x::msg::Diagnosis),
  false,  // has_any_key_member_
  Diagnosis_message_member_array,  // message members
  Diagnosis_init_function,  // function to initialize message memory (memory has to be allocated)
  Diagnosis_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Diagnosis_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Diagnosis_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__Diagnosis__get_type_hash,
  &h2x__msg__Diagnosis__get_type_description,
  &h2x__msg__Diagnosis__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace h2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<h2x::msg::Diagnosis>()
{
  return &::h2x::msg::rosidl_typesupport_introspection_cpp::Diagnosis_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, h2x, msg, Diagnosis)() {
  return &::h2x::msg::rosidl_typesupport_introspection_cpp::Diagnosis_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
