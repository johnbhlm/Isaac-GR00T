// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from h2x:msg/LRCUCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/lrcu_cmd.h"


#ifndef H2X__MSG__DETAIL__LRCU_CMD__FUNCTIONS_H_
#define H2X__MSG__DETAIL__LRCU_CMD__FUNCTIONS_H_

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

#include "h2x/msg/detail/lrcu_cmd__struct.h"

/// Initialize msg/LRCUCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * h2x__msg__LRCUCmd
 * )) before or use
 * h2x__msg__LRCUCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__LRCUCmd__init(h2x__msg__LRCUCmd * msg);

/// Finalize msg/LRCUCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__LRCUCmd__fini(h2x__msg__LRCUCmd * msg);

/// Create msg/LRCUCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * h2x__msg__LRCUCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
h2x__msg__LRCUCmd *
h2x__msg__LRCUCmd__create(void);

/// Destroy msg/LRCUCmd message.
/**
 * It calls
 * h2x__msg__LRCUCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__LRCUCmd__destroy(h2x__msg__LRCUCmd * msg);

/// Check for msg/LRCUCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__LRCUCmd__are_equal(const h2x__msg__LRCUCmd * lhs, const h2x__msg__LRCUCmd * rhs);

/// Copy a msg/LRCUCmd message.
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
h2x__msg__LRCUCmd__copy(
  const h2x__msg__LRCUCmd * input,
  h2x__msg__LRCUCmd * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__LRCUCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__LRCUCmd__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__LRCUCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__LRCUCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LRCUCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * h2x__msg__LRCUCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__LRCUCmd__Sequence__init(h2x__msg__LRCUCmd__Sequence * array, size_t size);

/// Finalize array of msg/LRCUCmd messages.
/**
 * It calls
 * h2x__msg__LRCUCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__LRCUCmd__Sequence__fini(h2x__msg__LRCUCmd__Sequence * array);

/// Create array of msg/LRCUCmd messages.
/**
 * It allocates the memory for the array and calls
 * h2x__msg__LRCUCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
h2x__msg__LRCUCmd__Sequence *
h2x__msg__LRCUCmd__Sequence__create(size_t size);

/// Destroy array of msg/LRCUCmd messages.
/**
 * It calls
 * h2x__msg__LRCUCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
void
h2x__msg__LRCUCmd__Sequence__destroy(h2x__msg__LRCUCmd__Sequence * array);

/// Check for msg/LRCUCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_h2x
bool
h2x__msg__LRCUCmd__Sequence__are_equal(const h2x__msg__LRCUCmd__Sequence * lhs, const h2x__msg__LRCUCmd__Sequence * rhs);

/// Copy an array of msg/LRCUCmd messages.
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
h2x__msg__LRCUCmd__Sequence__copy(
  const h2x__msg__LRCUCmd__Sequence * input,
  h2x__msg__LRCUCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__LRCU_CMD__FUNCTIONS_H_
