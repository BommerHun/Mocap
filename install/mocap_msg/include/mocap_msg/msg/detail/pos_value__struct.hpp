// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap_msg:msg/PosValue.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_MSG__MSG__DETAIL__POS_VALUE__STRUCT_HPP_
#define MOCAP_MSG__MSG__DETAIL__POS_VALUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mocap_msg__msg__PosValue __attribute__((deprecated))
#else
# define DEPRECATED__mocap_msg__msg__PosValue __declspec(deprecated)
#endif

namespace mocap_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PosValue_
{
  using Type = PosValue_<ContainerAllocator>;

  explicit PosValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rotation = 0.0;
    }
  }

  explicit PosValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rotation = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _rotation_type =
    double;
  _rotation_type rotation;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__rotation(
    const double & _arg)
  {
    this->rotation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap_msg::msg::PosValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap_msg::msg::PosValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap_msg::msg::PosValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap_msg::msg::PosValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap_msg::msg::PosValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap_msg::msg::PosValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap_msg::msg::PosValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap_msg::msg::PosValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap_msg::msg::PosValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap_msg::msg::PosValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap_msg__msg__PosValue
    std::shared_ptr<mocap_msg::msg::PosValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap_msg__msg__PosValue
    std::shared_ptr<mocap_msg::msg::PosValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosValue_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosValue_

// alias to use template instance with default allocator
using PosValue =
  mocap_msg::msg::PosValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mocap_msg

#endif  // MOCAP_MSG__MSG__DETAIL__POS_VALUE__STRUCT_HPP_
