// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from h2x:msg/GripperDiagnosticData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "h2x/msg/detail/gripper_diagnostic_data__functions.h"
#include "h2x/msg/detail/gripper_diagnostic_data__struct.hpp"
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

void GripperDiagnosticData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) h2x::msg::GripperDiagnosticData(_init);
}

void GripperDiagnosticData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<h2x::msg::GripperDiagnosticData *>(message_memory);
  typed_message->~GripperDiagnosticData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperDiagnosticData_message_member_array[2] = {
  {
    "mode_of_operation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::GripperDiagnosticData, mode_of_operation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode_display",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::msg::GripperDiagnosticData, mode_display),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperDiagnosticData_message_members = {
  "h2x::msg",  // message namespace
  "GripperDiagnosticData",  // message name
  2,  // number of fields
  sizeof(h2x::msg::GripperDiagnosticData),
  false,  // has_any_key_member_
  GripperDiagnosticData_message_member_array,  // message members
  GripperDiagnosticData_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperDiagnosticData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperDiagnosticData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperDiagnosticData_message_members,
  get_message_typesupport_handle_function,
  &h2x__msg__GripperDiagnosticData__get_type_hash,
  &h2x__msg__GripperDiagnosticData__get_type_description,
  &h2x__msg__GripperDiagnosticData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace h2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<h2x::msg::GripperDiagnosticData>()
{
  return &::h2x::msg::rosidl_typesupport_introspection_cpp::GripperDiagnosticData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, h2x, msg, GripperDiagnosticData)() {
  return &::h2x::msg::rosidl_typesupport_introspection_cpp::GripperDiagnosticData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
