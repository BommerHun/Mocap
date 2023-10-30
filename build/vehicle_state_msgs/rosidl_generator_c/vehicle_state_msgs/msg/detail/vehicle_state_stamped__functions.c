// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vehicle_state_msgs:msg/VehicleStateStamped.idl
// generated code does not contain a copyright notice
#include "vehicle_state_msgs/msg/detail/vehicle_state_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
vehicle_state_msgs__msg__VehicleStateStamped__init(vehicle_state_msgs__msg__VehicleStateStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vehicle_state_msgs__msg__VehicleStateStamped__fini(msg);
    return false;
  }
  // position_x
  // position_y
  // velocity_x
  // velocity_y
  // heading_angle
  // omega
  // duty_cycle
  // delta
  // erpm
  return true;
}

void
vehicle_state_msgs__msg__VehicleStateStamped__fini(vehicle_state_msgs__msg__VehicleStateStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position_x
  // position_y
  // velocity_x
  // velocity_y
  // heading_angle
  // omega
  // duty_cycle
  // delta
  // erpm
}

bool
vehicle_state_msgs__msg__VehicleStateStamped__are_equal(const vehicle_state_msgs__msg__VehicleStateStamped * lhs, const vehicle_state_msgs__msg__VehicleStateStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // position_x
  if (lhs->position_x != rhs->position_x) {
    return false;
  }
  // position_y
  if (lhs->position_y != rhs->position_y) {
    return false;
  }
  // velocity_x
  if (lhs->velocity_x != rhs->velocity_x) {
    return false;
  }
  // velocity_y
  if (lhs->velocity_y != rhs->velocity_y) {
    return false;
  }
  // heading_angle
  if (lhs->heading_angle != rhs->heading_angle) {
    return false;
  }
  // omega
  if (lhs->omega != rhs->omega) {
    return false;
  }
  // duty_cycle
  if (lhs->duty_cycle != rhs->duty_cycle) {
    return false;
  }
  // delta
  if (lhs->delta != rhs->delta) {
    return false;
  }
  // erpm
  if (lhs->erpm != rhs->erpm) {
    return false;
  }
  return true;
}

bool
vehicle_state_msgs__msg__VehicleStateStamped__copy(
  const vehicle_state_msgs__msg__VehicleStateStamped * input,
  vehicle_state_msgs__msg__VehicleStateStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // position_x
  output->position_x = input->position_x;
  // position_y
  output->position_y = input->position_y;
  // velocity_x
  output->velocity_x = input->velocity_x;
  // velocity_y
  output->velocity_y = input->velocity_y;
  // heading_angle
  output->heading_angle = input->heading_angle;
  // omega
  output->omega = input->omega;
  // duty_cycle
  output->duty_cycle = input->duty_cycle;
  // delta
  output->delta = input->delta;
  // erpm
  output->erpm = input->erpm;
  return true;
}

vehicle_state_msgs__msg__VehicleStateStamped *
vehicle_state_msgs__msg__VehicleStateStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_state_msgs__msg__VehicleStateStamped * msg = (vehicle_state_msgs__msg__VehicleStateStamped *)allocator.allocate(sizeof(vehicle_state_msgs__msg__VehicleStateStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vehicle_state_msgs__msg__VehicleStateStamped));
  bool success = vehicle_state_msgs__msg__VehicleStateStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vehicle_state_msgs__msg__VehicleStateStamped__destroy(vehicle_state_msgs__msg__VehicleStateStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vehicle_state_msgs__msg__VehicleStateStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vehicle_state_msgs__msg__VehicleStateStamped__Sequence__init(vehicle_state_msgs__msg__VehicleStateStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_state_msgs__msg__VehicleStateStamped * data = NULL;

  if (size) {
    data = (vehicle_state_msgs__msg__VehicleStateStamped *)allocator.zero_allocate(size, sizeof(vehicle_state_msgs__msg__VehicleStateStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vehicle_state_msgs__msg__VehicleStateStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vehicle_state_msgs__msg__VehicleStateStamped__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vehicle_state_msgs__msg__VehicleStateStamped__Sequence__fini(vehicle_state_msgs__msg__VehicleStateStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vehicle_state_msgs__msg__VehicleStateStamped__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vehicle_state_msgs__msg__VehicleStateStamped__Sequence *
vehicle_state_msgs__msg__VehicleStateStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vehicle_state_msgs__msg__VehicleStateStamped__Sequence * array = (vehicle_state_msgs__msg__VehicleStateStamped__Sequence *)allocator.allocate(sizeof(vehicle_state_msgs__msg__VehicleStateStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vehicle_state_msgs__msg__VehicleStateStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vehicle_state_msgs__msg__VehicleStateStamped__Sequence__destroy(vehicle_state_msgs__msg__VehicleStateStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vehicle_state_msgs__msg__VehicleStateStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vehicle_state_msgs__msg__VehicleStateStamped__Sequence__are_equal(const vehicle_state_msgs__msg__VehicleStateStamped__Sequence * lhs, const vehicle_state_msgs__msg__VehicleStateStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vehicle_state_msgs__msg__VehicleStateStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vehicle_state_msgs__msg__VehicleStateStamped__Sequence__copy(
  const vehicle_state_msgs__msg__VehicleStateStamped__Sequence * input,
  vehicle_state_msgs__msg__VehicleStateStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vehicle_state_msgs__msg__VehicleStateStamped);
    vehicle_state_msgs__msg__VehicleStateStamped * data =
      (vehicle_state_msgs__msg__VehicleStateStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vehicle_state_msgs__msg__VehicleStateStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vehicle_state_msgs__msg__VehicleStateStamped__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vehicle_state_msgs__msg__VehicleStateStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
