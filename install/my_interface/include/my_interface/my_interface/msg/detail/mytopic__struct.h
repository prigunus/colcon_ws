// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interface:msg/Mytopic.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__MSG__DETAIL__MYTOPIC__STRUCT_H_
#define MY_INTERFACE__MSG__DETAIL__MYTOPIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Mytopic in the package my_interface.
typedef struct my_interface__msg__Mytopic
{
  builtin_interfaces__msg__Time stamp;
  float my_float;
} my_interface__msg__Mytopic;

// Struct for a sequence of my_interface__msg__Mytopic.
typedef struct my_interface__msg__Mytopic__Sequence
{
  my_interface__msg__Mytopic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface__msg__Mytopic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACE__MSG__DETAIL__MYTOPIC__STRUCT_H_
