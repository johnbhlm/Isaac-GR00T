// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from h2x:srv/GetJointMonitor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "h2x/srv/detail/get_joint_monitor__functions.h"
#include "h2x/srv/detail/get_joint_monitor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace h2x
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetJointMonitor_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) h2x::srv::GetJointMonitor_Request(_init);
}

void GetJointMonitor_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<h2x::srv::GetJointMonitor_Request *>(message_memory);
  typed_message->~GetJointMonitor_Request();
}

size_t size_function__GetJointMonitor_Request__motor_index(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointMonitor_Request__motor_index(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointMonitor_Request__motor_index(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointMonitor_Request__motor_index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__GetJointMonitor_Request__motor_index(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__GetJointMonitor_Request__motor_index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__GetJointMonitor_Request__motor_index(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__GetJointMonitor_Request__motor_index(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetJointMonitor_Request_message_member_array[1] = {
  {
    "motor_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::srv::GetJointMonitor_Request, motor_index),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointMonitor_Request__motor_index,  // size() function pointer
    get_const_function__GetJointMonitor_Request__motor_index,  // get_const(index) function pointer
    get_function__GetJointMonitor_Request__motor_index,  // get(index) function pointer
    fetch_function__GetJointMonitor_Request__motor_index,  // fetch(index, &value) function pointer
    assign_function__GetJointMonitor_Request__motor_index,  // assign(index, value) function pointer
    resize_function__GetJointMonitor_Request__motor_index  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetJointMonitor_Request_message_members = {
  "h2x::srv",  // message namespace
  "GetJointMonitor_Request",  // message name
  1,  // number of fields
  sizeof(h2x::srv::GetJointMonitor_Request),
  false,  // has_any_key_member_
  GetJointMonitor_Request_message_member_array,  // message members
  GetJointMonitor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetJointMonitor_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetJointMonitor_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetJointMonitor_Request_message_members,
  get_message_typesupport_handle_function,
  &h2x__srv__GetJointMonitor_Request__get_type_hash,
  &h2x__srv__GetJointMonitor_Request__get_type_description,
  &h2x__srv__GetJointMonitor_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace h2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<h2x::srv::GetJointMonitor_Request>()
{
  return &::h2x::srv::rosidl_typesupport_introspection_cpp::GetJointMonitor_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, h2x, srv, GetJointMonitor_Request)() {
  return &::h2x::srv::rosidl_typesupport_introspection_cpp::GetJointMonitor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "h2x/srv/detail/get_joint_monitor__functions.h"
// already included above
// #include "h2x/srv/detail/get_joint_monitor__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace h2x
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetJointMonitor_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) h2x::srv::GetJointMonitor_Response(_init);
}

void GetJointMonitor_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<h2x::srv::GetJointMonitor_Response *>(message_memory);
  typed_message->~GetJointMonitor_Response();
}

size_t size_function__GetJointMonitor_Response__min_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointMonitor_Response__min_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointMonitor_Response__min_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointMonitor_Response__min_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GetJointMonitor_Response__min_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GetJointMonitor_Response__min_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GetJointMonitor_Response__min_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GetJointMonitor_Response__min_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetJointMonitor_Response__max_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointMonitor_Response__max_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointMonitor_Response__max_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointMonitor_Response__max_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GetJointMonitor_Response__max_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GetJointMonitor_Response__max_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GetJointMonitor_Response__max_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GetJointMonitor_Response__max_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetJointMonitor_Response_message_member_array[3] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::srv::GetJointMonitor_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::srv::GetJointMonitor_Response, min_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointMonitor_Response__min_position,  // size() function pointer
    get_const_function__GetJointMonitor_Response__min_position,  // get_const(index) function pointer
    get_function__GetJointMonitor_Response__min_position,  // get(index) function pointer
    fetch_function__GetJointMonitor_Response__min_position,  // fetch(index, &value) function pointer
    assign_function__GetJointMonitor_Response__min_position,  // assign(index, value) function pointer
    resize_function__GetJointMonitor_Response__min_position  // resize(index) function pointer
  },
  {
    "max_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::srv::GetJointMonitor_Response, max_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointMonitor_Response__max_position,  // size() function pointer
    get_const_function__GetJointMonitor_Response__max_position,  // get_const(index) function pointer
    get_function__GetJointMonitor_Response__max_position,  // get(index) function pointer
    fetch_function__GetJointMonitor_Response__max_position,  // fetch(index, &value) function pointer
    assign_function__GetJointMonitor_Response__max_position,  // assign(index, value) function pointer
    resize_function__GetJointMonitor_Response__max_position  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetJointMonitor_Response_message_members = {
  "h2x::srv",  // message namespace
  "GetJointMonitor_Response",  // message name
  3,  // number of fields
  sizeof(h2x::srv::GetJointMonitor_Response),
  false,  // has_any_key_member_
  GetJointMonitor_Response_message_member_array,  // message members
  GetJointMonitor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetJointMonitor_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetJointMonitor_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetJointMonitor_Response_message_members,
  get_message_typesupport_handle_function,
  &h2x__srv__GetJointMonitor_Response__get_type_hash,
  &h2x__srv__GetJointMonitor_Response__get_type_description,
  &h2x__srv__GetJointMonitor_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace h2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<h2x::srv::GetJointMonitor_Response>()
{
  return &::h2x::srv::rosidl_typesupport_introspection_cpp::GetJointMonitor_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, h2x, srv, GetJointMonitor_Response)() {
  return &::h2x::srv::rosidl_typesupport_introspection_cpp::GetJointMonitor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "h2x/srv/detail/get_joint_monitor__functions.h"
// already included above
// #include "h2x/srv/detail/get_joint_monitor__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace h2x
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetJointMonitor_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) h2x::srv::GetJointMonitor_Event(_init);
}

void GetJointMonitor_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<h2x::srv::GetJointMonitor_Event *>(message_memory);
  typed_message->~GetJointMonitor_Event();
}

size_t size_function__GetJointMonitor_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<h2x::srv::GetJointMonitor_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointMonitor_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<h2x::srv::GetJointMonitor_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointMonitor_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<h2x::srv::GetJointMonitor_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointMonitor_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const h2x::srv::GetJointMonitor_Request *>(
    get_const_function__GetJointMonitor_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<h2x::srv::GetJointMonitor_Request *>(untyped_value);
  value = item;
}

void assign_function__GetJointMonitor_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<h2x::srv::GetJointMonitor_Request *>(
    get_function__GetJointMonitor_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const h2x::srv::GetJointMonitor_Request *>(untyped_value);
  item = value;
}

void resize_function__GetJointMonitor_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<h2x::srv::GetJointMonitor_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetJointMonitor_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<h2x::srv::GetJointMonitor_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetJointMonitor_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<h2x::srv::GetJointMonitor_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetJointMonitor_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<h2x::srv::GetJointMonitor_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetJointMonitor_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const h2x::srv::GetJointMonitor_Response *>(
    get_const_function__GetJointMonitor_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<h2x::srv::GetJointMonitor_Response *>(untyped_value);
  value = item;
}

void assign_function__GetJointMonitor_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<h2x::srv::GetJointMonitor_Response *>(
    get_function__GetJointMonitor_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const h2x::srv::GetJointMonitor_Response *>(untyped_value);
  item = value;
}

void resize_function__GetJointMonitor_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<h2x::srv::GetJointMonitor_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetJointMonitor_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(h2x::srv::GetJointMonitor_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::srv::GetJointMonitor_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(h2x::srv::GetJointMonitor_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointMonitor_Event__request,  // size() function pointer
    get_const_function__GetJointMonitor_Event__request,  // get_const(index) function pointer
    get_function__GetJointMonitor_Event__request,  // get(index) function pointer
    fetch_function__GetJointMonitor_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetJointMonitor_Event__request,  // assign(index, value) function pointer
    resize_function__GetJointMonitor_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::srv::GetJointMonitor_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(h2x::srv::GetJointMonitor_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetJointMonitor_Event__response,  // size() function pointer
    get_const_function__GetJointMonitor_Event__response,  // get_const(index) function pointer
    get_function__GetJointMonitor_Event__response,  // get(index) function pointer
    fetch_function__GetJointMonitor_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetJointMonitor_Event__response,  // assign(index, value) function pointer
    resize_function__GetJointMonitor_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetJointMonitor_Event_message_members = {
  "h2x::srv",  // message namespace
  "GetJointMonitor_Event",  // message name
  3,  // number of fields
  sizeof(h2x::srv::GetJointMonitor_Event),
  false,  // has_any_key_member_
  GetJointMonitor_Event_message_member_array,  // message members
  GetJointMonitor_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetJointMonitor_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetJointMonitor_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetJointMonitor_Event_message_members,
  get_message_typesupport_handle_function,
  &h2x__srv__GetJointMonitor_Event__get_type_hash,
  &h2x__srv__GetJointMonitor_Event__get_type_description,
  &h2x__srv__GetJointMonitor_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace h2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<h2x::srv::GetJointMonitor_Event>()
{
  return &::h2x::srv::rosidl_typesupport_introspection_cpp::GetJointMonitor_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, h2x, srv, GetJointMonitor_Event)() {
  return &::h2x::srv::rosidl_typesupport_introspection_cpp::GetJointMonitor_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "h2x/srv/detail/get_joint_monitor__functions.h"
// already included above
// #include "h2x/srv/detail/get_joint_monitor__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace h2x
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetJointMonitor_service_members = {
  "h2x::srv",  // service namespace
  "GetJointMonitor",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<h2x::srv::GetJointMonitor>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetJointMonitor_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetJointMonitor_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::srv::GetJointMonitor_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::srv::GetJointMonitor_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<h2x::srv::GetJointMonitor_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<h2x::srv::GetJointMonitor>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<h2x::srv::GetJointMonitor>,
  &h2x__srv__GetJointMonitor__get_type_hash,
  &h2x__srv__GetJointMonitor__get_type_description,
  &h2x__srv__GetJointMonitor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace h2x


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<h2x::srv::GetJointMonitor>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::h2x::srv::rosidl_typesupport_introspection_cpp::GetJointMonitor_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::h2x::srv::GetJointMonitor_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::h2x::srv::GetJointMonitor_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::h2x::srv::GetJointMonitor_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, h2x, srv, GetJointMonitor)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<h2x::srv::GetJointMonitor>();
}

#ifdef __cplusplus
}
#endif
