// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap_msg:msg/PosValue.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_MSG__MSG__DETAIL__POS_VALUE__BUILDER_HPP_
#define MOCAP_MSG__MSG__DETAIL__POS_VALUE__BUILDER_HPP_

#include "mocap_msg/msg/detail/pos_value__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mocap_msg
{

namespace msg
{

namespace builder
{

class Init_PosValue_rotation
{
public:
  explicit Init_PosValue_rotation(::mocap_msg::msg::PosValue & msg)
  : msg_(msg)
  {}
  ::mocap_msg::msg::PosValue rotation(::mocap_msg::msg::PosValue::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap_msg::msg::PosValue msg_;
};

class Init_PosValue_z
{
public:
  explicit Init_PosValue_z(::mocap_msg::msg::PosValue & msg)
  : msg_(msg)
  {}
  Init_PosValue_rotation z(::mocap_msg::msg::PosValue::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PosValue_rotation(msg_);
  }

private:
  ::mocap_msg::msg::PosValue msg_;
};

class Init_PosValue_y
{
public:
  explicit Init_PosValue_y(::mocap_msg::msg::PosValue & msg)
  : msg_(msg)
  {}
  Init_PosValue_z y(::mocap_msg::msg::PosValue::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PosValue_z(msg_);
  }

private:
  ::mocap_msg::msg::PosValue msg_;
};

class Init_PosValue_x
{
public:
  explicit Init_PosValue_x(::mocap_msg::msg::PosValue & msg)
  : msg_(msg)
  {}
  Init_PosValue_y x(::mocap_msg::msg::PosValue::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PosValue_y(msg_);
  }

private:
  ::mocap_msg::msg::PosValue msg_;
};

class Init_PosValue_name
{
public:
  Init_PosValue_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosValue_x name(::mocap_msg::msg::PosValue::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PosValue_x(msg_);
  }

private:
  ::mocap_msg::msg::PosValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap_msg::msg::PosValue>()
{
  return mocap_msg::msg::builder::Init_PosValue_name();
}

}  // namespace mocap_msg

#endif  // MOCAP_MSG__MSG__DETAIL__POS_VALUE__BUILDER_HPP_
