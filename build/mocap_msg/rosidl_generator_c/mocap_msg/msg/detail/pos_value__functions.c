// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap_msg:msg/PosValue.idl
// generated code does not contain a copyright notice
#include "mocap_msg/msg/detail/pos_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
mocap_msg__msg__PosValue__init(mocap_msg__msg__PosValue * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mocap_msg__msg__PosValue__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // rotation
  return true;
}

void
mocap_msg__msg__PosValue__fini(mocap_msg__msg__PosValue * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // z
  // rotation
}

bool
mocap_msg__msg__PosValue__are_equal(const mocap_msg__msg__PosValue * lhs, const mocap_msg__msg__PosValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // rotation
  if (lhs->rotation != rhs->rotation) {
    return false;
  }
  return true;
}

bool
mocap_msg__msg__PosValue__copy(
  const mocap_msg__msg__PosValue * input,
  mocap_msg__msg__PosValue * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // rotation
  output->rotation = input->rotation;
  return true;
}

mocap_msg__msg__PosValue *
mocap_msg__msg__PosValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap_msg__msg__PosValue * msg = (mocap_msg__msg__PosValue *)allocator.allocate(sizeof(mocap_msg__msg__PosValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap_msg__msg__PosValue));
  bool success = mocap_msg__msg__PosValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mocap_msg__msg__PosValue__destroy(mocap_msg__msg__PosValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mocap_msg__msg__PosValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mocap_msg__msg__PosValue__Sequence__init(mocap_msg__msg__PosValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap_msg__msg__PosValue * data = NULL;

  if (size) {
    data = (mocap_msg__msg__PosValue *)allocator.zero_allocate(size, sizeof(mocap_msg__msg__PosValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap_msg__msg__PosValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap_msg__msg__PosValue__fini(&data[i - 1]);
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
mocap_msg__msg__PosValue__Sequence__fini(mocap_msg__msg__PosValue__Sequence * array)
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
      mocap_msg__msg__PosValue__fini(&array->data[i]);
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

mocap_msg__msg__PosValue__Sequence *
mocap_msg__msg__PosValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mocap_msg__msg__PosValue__Sequence * array = (mocap_msg__msg__PosValue__Sequence *)allocator.allocate(sizeof(mocap_msg__msg__PosValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mocap_msg__msg__PosValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mocap_msg__msg__PosValue__Sequence__destroy(mocap_msg__msg__PosValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mocap_msg__msg__PosValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mocap_msg__msg__PosValue__Sequence__are_equal(const mocap_msg__msg__PosValue__Sequence * lhs, const mocap_msg__msg__PosValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mocap_msg__msg__PosValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mocap_msg__msg__PosValue__Sequence__copy(
  const mocap_msg__msg__PosValue__Sequence * input,
  mocap_msg__msg__PosValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mocap_msg__msg__PosValue);
    mocap_msg__msg__PosValue * data =
      (mocap_msg__msg__PosValue *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mocap_msg__msg__PosValue__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mocap_msg__msg__PosValue__fini(&data[i]);
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
    if (!mocap_msg__msg__PosValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
