// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vehicle_state_msgs:msg/InputValue.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__BUILDER_HPP_
#define VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__BUILDER_HPP_

#include "vehicle_state_msgs/msg/detail/input_value__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vehicle_state_msgs
{

namespace msg
{

namespace builder
{

class Init_InputValue_erpm
{
public:
  explicit Init_InputValue_erpm(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  ::vehicle_state_msgs::msg::InputValue erpm(::vehicle_state_msgs::msg::InputValue::_erpm_type arg)
  {
    msg_.erpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_delta
{
public:
  explicit Init_InputValue_delta(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_erpm delta(::vehicle_state_msgs::msg::InputValue::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_InputValue_erpm(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_duty_cycle
{
public:
  explicit Init_InputValue_duty_cycle(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_delta duty_cycle(::vehicle_state_msgs::msg::InputValue::_duty_cycle_type arg)
  {
    msg_.duty_cycle = std::move(arg);
    return Init_InputValue_delta(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_omega
{
public:
  explicit Init_InputValue_omega(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_duty_cycle omega(::vehicle_state_msgs::msg::InputValue::_omega_type arg)
  {
    msg_.omega = std::move(arg);
    return Init_InputValue_duty_cycle(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_heading_angle
{
public:
  explicit Init_InputValue_heading_angle(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_omega heading_angle(::vehicle_state_msgs::msg::InputValue::_heading_angle_type arg)
  {
    msg_.heading_angle = std::move(arg);
    return Init_InputValue_omega(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_velocity_y
{
public:
  explicit Init_InputValue_velocity_y(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_heading_angle velocity_y(::vehicle_state_msgs::msg::InputValue::_velocity_y_type arg)
  {
    msg_.velocity_y = std::move(arg);
    return Init_InputValue_heading_angle(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_velocity_x
{
public:
  explicit Init_InputValue_velocity_x(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_velocity_y velocity_x(::vehicle_state_msgs::msg::InputValue::_velocity_x_type arg)
  {
    msg_.velocity_x = std::move(arg);
    return Init_InputValue_velocity_y(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_position_y
{
public:
  explicit Init_InputValue_position_y(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_velocity_x position_y(::vehicle_state_msgs::msg::InputValue::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_InputValue_velocity_x(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_position_x
{
public:
  explicit Init_InputValue_position_x(::vehicle_state_msgs::msg::InputValue & msg)
  : msg_(msg)
  {}
  Init_InputValue_position_y position_x(::vehicle_state_msgs::msg::InputValue::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_InputValue_position_y(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

class Init_InputValue_header
{
public:
  Init_InputValue_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputValue_position_x header(::vehicle_state_msgs::msg::InputValue::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InputValue_position_x(msg_);
  }

private:
  ::vehicle_state_msgs::msg::InputValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vehicle_state_msgs::msg::InputValue>()
{
  return vehicle_state_msgs::msg::builder::Init_InputValue_header();
}

}  // namespace vehicle_state_msgs

#endif  // VEHICLE_STATE_MSGS__MSG__DETAIL__INPUT_VALUE__BUILDER_HPP_
