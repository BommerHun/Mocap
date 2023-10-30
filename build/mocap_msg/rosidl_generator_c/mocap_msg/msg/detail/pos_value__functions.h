// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mocap_msg:msg/PosValue.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_MSG__MSG__DETAIL__POS_VALUE__FUNCTIONS_H_
#define MOCAP_MSG__MSG__DETAIL__POS_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mocap_msg/msg/rosidl_generator_c__visibility_control.h"

#include "mocap_msg/msg/detail/pos_value__struct.h"

/// Initialize msg/PosValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap_msg__msg__PosValue
 * )) before or use
 * mocap_msg__msg__PosValue__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
bool
mocap_msg__msg__PosValue__init(mocap_msg__msg__PosValue * msg);

/// Finalize msg/PosValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
void
mocap_msg__msg__PosValue__fini(mocap_msg__msg__PosValue * msg);

/// Create msg/PosValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap_msg__msg__PosValue__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
mocap_msg__msg__PosValue *
mocap_msg__msg__PosValue__create();

/// Destroy msg/PosValue message.
/**
 * It calls
 * mocap_msg__msg__PosValue__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
void
mocap_msg__msg__PosValue__destroy(mocap_msg__msg__PosValue * msg);

/// Check for msg/PosValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
bool
mocap_msg__msg__PosValue__are_equal(const mocap_msg__msg__PosValue * lhs, const mocap_msg__msg__PosValue * rhs);

/// Copy a msg/PosValue message.
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
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
bool
mocap_msg__msg__PosValue__copy(
  const mocap_msg__msg__PosValue * input,
  mocap_msg__msg__PosValue * output);

/// Initialize array of msg/PosValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap_msg__msg__PosValue__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
bool
mocap_msg__msg__PosValue__Sequence__init(mocap_msg__msg__PosValue__Sequence * array, size_t size);

/// Finalize array of msg/PosValue messages.
/**
 * It calls
 * mocap_msg__msg__PosValue__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
void
mocap_msg__msg__PosValue__Sequence__fini(mocap_msg__msg__PosValue__Sequence * array);

/// Create array of msg/PosValue messages.
/**
 * It allocates the memory for the array and calls
 * mocap_msg__msg__PosValue__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
mocap_msg__msg__PosValue__Sequence *
mocap_msg__msg__PosValue__Sequence__create(size_t size);

/// Destroy array of msg/PosValue messages.
/**
 * It calls
 * mocap_msg__msg__PosValue__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
void
mocap_msg__msg__PosValue__Sequence__destroy(mocap_msg__msg__PosValue__Sequence * array);

/// Check for msg/PosValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
bool
mocap_msg__msg__PosValue__Sequence__are_equal(const mocap_msg__msg__PosValue__Sequence * lhs, const mocap_msg__msg__PosValue__Sequence * rhs);

/// Copy an array of msg/PosValue messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mocap_msg
bool
mocap_msg__msg__PosValue__Sequence__copy(
  const mocap_msg__msg__PosValue__Sequence * input,
  mocap_msg__msg__PosValue__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_MSG__MSG__DETAIL__POS_VALUE__FUNCTIONS_H_
