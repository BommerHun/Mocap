// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vehicle_state_msgs:msg/VehicleStateStamped.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__STRUCT_H_
#define VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/VehicleStateStamped in the package vehicle_state_msgs.
typedef struct vehicle_state_msgs__msg__VehicleStateStamped
{
  std_msgs__msg__Header header;
  double position_x;
  double position_y;
  double velocity_x;
  double velocity_y;
  double heading_angle;
  double omega;
  double duty_cycle;
  double delta;
  double erpm;
} vehicle_state_msgs__msg__VehicleStateStamped;

// Struct for a sequence of vehicle_state_msgs__msg__VehicleStateStamped.
typedef struct vehicle_state_msgs__msg__VehicleStateStamped__Sequence
{
  vehicle_state_msgs__msg__VehicleStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vehicle_state_msgs__msg__VehicleStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__STRUCT_H_
