// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap_msg:msg/PosValue.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_MSG__MSG__DETAIL__POS_VALUE__TRAITS_HPP_
#define MOCAP_MSG__MSG__DETAIL__POS_VALUE__TRAITS_HPP_

#include "mocap_msg/msg/detail/pos_value__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mocap_msg::msg::PosValue>()
{
  return "mocap_msg::msg::PosValue";
}

template<>
inline const char * name<mocap_msg::msg::PosValue>()
{
  return "mocap_msg/msg/PosValue";
}

template<>
struct has_fixed_size<mocap_msg::msg::PosValue>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mocap_msg::msg::PosValue>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mocap_msg::msg::PosValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOCAP_MSG__MSG__DETAIL__POS_VALUE__TRAITS_HPP_
