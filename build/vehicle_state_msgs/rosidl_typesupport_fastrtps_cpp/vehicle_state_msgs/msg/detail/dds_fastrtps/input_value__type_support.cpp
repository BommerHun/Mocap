// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from vehicle_state_msgs:msg/InputValue.idl
// generated code does not contain a copyright notice
#include "vehicle_state_msgs/msg/detail/input_value__rosidl_typesupport_fastrtps_cpp.hpp"
#include "vehicle_state_msgs/msg/detail/input_value__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: position_x
  cdr << ros_message.position_x;
  // Member: position_y
  cdr << ros_message.position_y;
  // Member: velocity_x
  cdr << ros_message.velocity_x;
  // Member: velocity_y
  cdr << ros_message.velocity_y;
  // Member: heading_angle
  cdr << ros_message.heading_angle;
  // Member: omega
  cdr << ros_message.omega;
  // Member: duty_cycle
  cdr << ros_message.duty_cycle;
  // Member: delta
  cdr << ros_message.delta;
  // Member: erpm
  cdr << ros_message.erpm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vehicle_state_msgs::msg::InputValue & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: position_x
  cdr >> ros_message.position_x;

  // Member: position_y
  cdr >> ros_message.position_y;

  // Member: velocity_x
  cdr >> ros_message.velocity_x;

  // Member: velocity_y
  cdr >> ros_message.velocity_y;

  // Member: heading_angle
  cdr >> ros_message.heading_angle;

  // Member: omega
  cdr >> ros_message.omega;

  // Member: duty_cycle
  cdr >> ros_message.duty_cycle;

  // Member: delta
  cdr >> ros_message.delta;

  // Member: erpm
  cdr >> ros_message.erpm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
get_serialized_size(
  const vehicle_state_msgs::msg::InputValue & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: position_x
  {
    size_t item_size = sizeof(ros_message.position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_y
  {
    size_t item_size = sizeof(ros_message.position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_x
  {
    size_t item_size = sizeof(ros_message.velocity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_y
  {
    size_t item_size = sizeof(ros_message.velocity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_angle
  {
    size_t item_size = sizeof(ros_message.heading_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: omega
  {
    size_t item_size = sizeof(ros_message.omega);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: duty_cycle
  {
    size_t item_size = sizeof(ros_message.duty_cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta
  {
    size_t item_size = sizeof(ros_message.delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: erpm
  {
    size_t item_size = sizeof(ros_message.erpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehicle_state_msgs
max_serialized_size_InputValue(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: position_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: position_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: omega
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: duty_cycle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: erpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _InputValue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vehicle_state_msgs::msg::InputValue *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InputValue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vehicle_state_msgs::msg::InputValue *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InputValue__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vehicle_state_msgs::msg::InputValue *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InputValue__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_InputValue(full_bounded, 0);
}

static message_type_support_callbacks_t _InputValue__callbacks = {
  "vehicle_state_msgs::msg",
  "InputValue",
  _InputValue__cdr_serialize,
  _InputValue__cdr_deserialize,
  _InputValue__get_serialized_size,
  _InputValue__max_serialized_size
};

static rosidl_message_type_support_t _InputValue__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InputValue__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vehicle_state_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vehicle_state_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<vehicle_state_msgs::msg::InputValue>()
{
  return &vehicle_state_msgs::msg::typesupport_fastrtps_cpp::_InputValue__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vehicle_state_msgs, msg, InputValue)() {
  return &vehicle_state_msgs::msg::typesupport_fastrtps_cpp::_InputValue__handle;
}

#ifdef __cplusplus
}
#endif
