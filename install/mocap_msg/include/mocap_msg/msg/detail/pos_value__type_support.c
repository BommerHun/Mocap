// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap_msg:msg/PosValue.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap_msg/msg/detail/pos_value__rosidl_typesupport_introspection_c.h"
#include "mocap_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap_msg/msg/detail/pos_value__functions.h"
#include "mocap_msg/msg/detail/pos_value__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PosValue__rosidl_typesupport_introspection_c__PosValue_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap_msg__msg__PosValue__init(message_memory);
}

void PosValue__rosidl_typesupport_introspection_c__PosValue_fini_function(void * message_memory)
{
  mocap_msg__msg__PosValue__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PosValue__rosidl_typesupport_introspection_c__PosValue_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_msg__msg__PosValue, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_msg__msg__PosValue, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_msg__msg__PosValue, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_msg__msg__PosValue, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_msg__msg__PosValue, rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PosValue__rosidl_typesupport_introspection_c__PosValue_message_members = {
  "mocap_msg__msg",  // message namespace
  "PosValue",  // message name
  5,  // number of fields
  sizeof(mocap_msg__msg__PosValue),
  PosValue__rosidl_typesupport_introspection_c__PosValue_message_member_array,  // message members
  PosValue__rosidl_typesupport_introspection_c__PosValue_init_function,  // function to initialize message memory (memory has to be allocated)
  PosValue__rosidl_typesupport_introspection_c__PosValue_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PosValue__rosidl_typesupport_introspection_c__PosValue_message_type_support_handle = {
  0,
  &PosValue__rosidl_typesupport_introspection_c__PosValue_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap_msg, msg, PosValue)() {
  if (!PosValue__rosidl_typesupport_introspection_c__PosValue_message_type_support_handle.typesupport_identifier) {
    PosValue__rosidl_typesupport_introspection_c__PosValue_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PosValue__rosidl_typesupport_introspection_c__PosValue_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
