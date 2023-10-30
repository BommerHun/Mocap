// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vehicle_state_msgs:msg/InputValue.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__FUNCTIONS_H_
#define VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vehicle_state_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vehicle_state_msgs/msg/detail/input_value__struct.h"

/// Initialize msg/InputValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vehicle_state_msgs__msg__InputValue
 * )) before or use
 * vehicle_state_msgs__msg__InputValue__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
bool
vehicle_state_msgs__msg__InputValue__init(vehicle_state_msgs__msg__InputValue * msg);

/// Finalize msg/InputValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
void
vehicle_state_msgs__msg__InputValue__fini(vehicle_state_msgs__msg__InputValue * msg);

/// Create msg/InputValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vehicle_state_msgs__msg__InputValue__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
vehicle_state_msgs__msg__InputValue *
vehicle_state_msgs__msg__InputValue__create();

/// Destroy msg/InputValue message.
/**
 * It calls
 * vehicle_state_msgs__msg__InputValue__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
void
vehicle_state_msgs__msg__InputValue__destroy(vehicle_state_msgs__msg__InputValue * msg);

/// Check for msg/InputValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
bool
vehicle_state_msgs__msg__InputValue__are_equal(const vehicle_state_msgs__msg__InputValue * lhs, const vehicle_state_msgs__msg__InputValue * rhs);

/// Copy a msg/InputValue message.
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
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
bool
vehicle_state_msgs__msg__InputValue__copy(
  const vehicle_state_msgs__msg__InputValue * input,
  vehicle_state_msgs__msg__InputValue * output);

/// Initialize array of msg/InputValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * vehicle_state_msgs__msg__InputValue__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
bool
vehicle_state_msgs__msg__InputValue__Sequence__init(vehicle_state_msgs__msg__InputValue__Sequence * array, size_t size);

/// Finalize array of msg/InputValue messages.
/**
 * It calls
 * vehicle_state_msgs__msg__InputValue__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
void
vehicle_state_msgs__msg__InputValue__Sequence__fini(vehicle_state_msgs__msg__InputValue__Sequence * array);

/// Create array of msg/InputValue messages.
/**
 * It allocates the memory for the array and calls
 * vehicle_state_msgs__msg__InputValue__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
vehicle_state_msgs__msg__InputValue__Sequence *
vehicle_state_msgs__msg__InputValue__Sequence__create(size_t size);

/// Destroy array of msg/InputValue messages.
/**
 * It calls
 * vehicle_state_msgs__msg__InputValue__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
void
vehicle_state_msgs__msg__InputValue__Sequence__destroy(vehicle_state_msgs__msg__InputValue__Sequence * array);

/// Check for msg/InputValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
bool
vehicle_state_msgs__msg__InputValue__Sequence__are_equal(const vehicle_state_msgs__msg__InputValue__Sequence * lhs, const vehicle_state_msgs__msg__InputValue__Sequence * rhs);

/// Copy an array of msg/InputValue messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vehicle_state_msgs
bool
vehicle_state_msgs__msg__InputValue__Sequence__copy(
  const vehicle_state_msgs__msg__InputValue__Sequence * input,
  vehicle_state_msgs__msg__InputValue__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__FUNCTIONS_H_
