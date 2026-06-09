// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_cmd_gripper.h"


#ifndef H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__FUNCTIONS_H_
#define H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "h2x/msg/rosidl_generator_c__visibility_control.h"

#include "h2x/msg/detail/motor_cmd_gripper__struct.h"

/// Initialize msg/MotorCmdGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * h2x__msg__MotorCmdGripper
 * )) before or use
 * h2x__msg__MotorCmdGripper__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__MotorCmdGripper__init(h2x__msg__MotorCmdGripper * msg);

/// Finalize msg/MotorCmdGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__MotorCmdGripper__fini(h2x__msg__MotorCmdGripper * msg);

/// Create msg/MotorCmdGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * h2x__msg__MotorCmdGripper__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
h2x__msg__MotorCmdGripper *
h2x__msg__MotorCmdGripper__create(void);

/// Destroy msg/MotorCmdGripper message.
/**
 * It calls
 * h2x__msg__MotorCmdGripper__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__MotorCmdGripper__destroy(h2x__msg__MotorCmdGripper * msg);

/// Check for msg/MotorCmdGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__MotorCmdGripper__are_equal(const h2x__msg__MotorCmdGripper * lhs, const h2x__msg__MotorCmdGripper * rhs);

/// Copy a msg/MotorCmdGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__MotorCmdGripper__copy(
  const h2x__msg__MotorCmdGripper * input,
  h2x__msg__MotorCmdGripper * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__MotorCmdGripper__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__MotorCmdGripper__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__MotorCmdGripper__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__MotorCmdGripper__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MotorCmdGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * h2x__msg__MotorCmdGripper__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__MotorCmdGripper__Sequence__init(h2x__msg__MotorCmdGripper__Sequence * array, size_t size);

/// Finalize array of msg/MotorCmdGripper messages.
/**
 * It calls
 * h2x__msg__MotorCmdGripper__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__MotorCmdGripper__Sequence__fini(h2x__msg__MotorCmdGripper__Sequence * array);

/// Create array of msg/MotorCmdGripper messages.
/**
 * It allocates the memory for the array and calls
 * h2x__msg__MotorCmdGripper__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
h2x__msg__MotorCmdGripper__Sequence *
h2x__msg__MotorCmdGripper__Sequence__create(size_t size);

/// Destroy array of msg/MotorCmdGripper messages.
/**
 * It calls
 * h2x__msg__MotorCmdGripper__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__MotorCmdGripper__Sequence__destroy(h2x__msg__MotorCmdGripper__Sequence * array);

/// Check for msg/MotorCmdGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__MotorCmdGripper__Sequence__are_equal(const h2x__msg__MotorCmdGripper__Sequence * lhs, const h2x__msg__MotorCmdGripper__Sequence * rhs);

/// Copy an array of msg/MotorCmdGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__MotorCmdGripper__Sequence__copy(
  const h2x__msg__MotorCmdGripper__Sequence * input,
  h2x__msg__MotorCmdGripper__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__FUNCTIONS_H_
