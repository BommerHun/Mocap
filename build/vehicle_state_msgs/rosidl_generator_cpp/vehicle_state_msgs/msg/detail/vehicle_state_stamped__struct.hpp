// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vehicle_state_msgs:msg/VehicleStateStamped.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__STRUCT_HPP_
#define VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vehicle_state_msgs__msg__VehicleStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__vehicle_state_msgs__msg__VehicleStateStamped __declspec(deprecated)
#endif

namespace vehicle_state_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStateStamped_
{
  using Type = VehicleStateStamped_<ContainerAllocator>;

  explicit VehicleStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_x = 0.0;
      this->position_y = 0.0;
      this->velocity_x = 0.0;
      this->velocity_y = 0.0;
      this->heading_angle = 0.0;
      this->omega = 0.0;
      this->duty_cycle = 0.0;
      this->delta = 0.0;
      this->erpm = 0.0;
    }
  }

  explicit VehicleStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position_x = 0.0;
      this->position_y = 0.0;
      this->velocity_x = 0.0;
      this->velocity_y = 0.0;
      this->heading_angle = 0.0;
      this->omega = 0.0;
      this->duty_cycle = 0.0;
      this->delta = 0.0;
      this->erpm = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_x_type =
    double;
  _position_x_type position_x;
  using _position_y_type =
    double;
  _position_y_type position_y;
  using _velocity_x_type =
    double;
  _velocity_x_type velocity_x;
  using _velocity_y_type =
    double;
  _velocity_y_type velocity_y;
  using _heading_angle_type =
    double;
  _heading_angle_type heading_angle;
  using _omega_type =
    double;
  _omega_type omega;
  using _duty_cycle_type =
    double;
  _duty_cycle_type duty_cycle;
  using _delta_type =
    double;
  _delta_type delta;
  using _erpm_type =
    double;
  _erpm_type erpm;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position_x(
    const double & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_y(
    const double & _arg)
  {
    this->position_y = _arg;
    return *this;
  }
  Type & set__velocity_x(
    const double & _arg)
  {
    this->velocity_x = _arg;
    return *this;
  }
  Type & set__velocity_y(
    const double & _arg)
  {
    this->velocity_y = _arg;
    return *this;
  }
  Type & set__heading_angle(
    const double & _arg)
  {
    this->heading_angle = _arg;
    return *this;
  }
  Type & set__omega(
    const double & _arg)
  {
    this->omega = _arg;
    return *this;
  }
  Type & set__duty_cycle(
    const double & _arg)
  {
    this->duty_cycle = _arg;
    return *this;
  }
  Type & set__delta(
    const double & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__erpm(
    const double & _arg)
  {
    this->erpm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vehicle_state_msgs__msg__VehicleStateStamped
    std::shared_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vehicle_state_msgs__msg__VehicleStateStamped
    std::shared_ptr<vehicle_state_msgs::msg::VehicleStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStateStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    if (this->velocity_x != other.velocity_x) {
      return false;
    }
    if (this->velocity_y != other.velocity_y) {
      return false;
    }
    if (this->heading_angle != other.heading_angle) {
      return false;
    }
    if (this->omega != other.omega) {
      return false;
    }
    if (this->duty_cycle != other.duty_cycle) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    if (this->erpm != other.erpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStateStamped_

// alias to use template instance with default allocator
using VehicleStateStamped =
  vehicle_state_msgs::msg::VehicleStateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vehicle_state_msgs

#endif  // VEHICLE_STATE_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__STRUCT_HPP_
