// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vehicle_state_msgs:msg/VehicleStateStamped.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__TRAITS_HPP_
#define VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__TRAITS_HPP_

#include "vehicle_state_msgs/msg/detail/vehicle_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vehicle_state_msgs::msg::VehicleStateStamped>()
{
  return "vehicle_state_msgs::msg::VehicleStateStamped";
}

template<>
inline const char * name<vehicle_state_msgs::msg::VehicleStateStamped>()
{
  return "vehicle_state_msgs/msg/VehicleStateStamped";
}

template<>
struct has_fixed_size<vehicle_state_msgs::msg::VehicleStateStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<vehicle_state_msgs::msg::VehicleStateStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<vehicle_state_msgs::msg::VehicleStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__TRAITS_HPP_
