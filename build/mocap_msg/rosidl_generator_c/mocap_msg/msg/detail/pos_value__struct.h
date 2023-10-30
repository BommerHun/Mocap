// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap_msg:msg/PosValue.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_MSG__MSG__DETAIL__POS_VALUE__STRUCT_H_
#define MOCAP_MSG__MSG__DETAIL__POS_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PosValue in the package mocap_msg.
typedef struct mocap_msg__msg__PosValue
{
  rosidl_runtime_c__String name;
  double x;
  double y;
  double z;
  double rotation;
} mocap_msg__msg__PosValue;

// Struct for a sequence of mocap_msg__msg__PosValue.
typedef struct mocap_msg__msg__PosValue__Sequence
{
  mocap_msg__msg__PosValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap_msg__msg__PosValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_MSG__MSG__DETAIL__POS_VALUE__STRUCT_H_
