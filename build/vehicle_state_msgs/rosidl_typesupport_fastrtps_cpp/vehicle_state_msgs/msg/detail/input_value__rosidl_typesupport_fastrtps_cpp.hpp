// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from vehicle_state_msgs:msg/InputValue.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vehicle_state_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "vehicle_state_msgs/msg/detail/input_value__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace vehicle_state_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
cdr_serialize(
  const vehicle_state_msgs::msg::InputValue & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vehicle_state_msgs::msg::InputValue & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
get_serialized_size(
  const vehicle_state_msgs::msg::InputValue & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
max_serialized_size_InputValue(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vehicle_state_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vehicle_state_msgs, msg, InputValue)();

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
