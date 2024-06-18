// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interface:srv/Mysrv.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__SRV__DETAIL__MYSRV__STRUCT_H_
#define MY_INTERFACE__SRV__DETAIL__MYSRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Mysrv in the package my_interface.
typedef struct my_interface__srv__Mysrv_Request
{
  int64_t first;
  int64_t second;
} my_interface__srv__Mysrv_Request;

// Struct for a sequence of my_interface__srv__Mysrv_Request.
typedef struct my_interface__srv__Mysrv_Request__Sequence
{
  my_interface__srv__Mysrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface__srv__Mysrv_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Mysrv in the package my_interface.
typedef struct my_interface__srv__Mysrv_Response
{
  int64_t sum;
  int64_t multiply;
  float division;
} my_interface__srv__Mysrv_Response;

// Struct for a sequence of my_interface__srv__Mysrv_Response.
typedef struct my_interface__srv__Mysrv_Response__Sequence
{
  my_interface__srv__Mysrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface__srv__Mysrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACE__SRV__DETAIL__MYSRV__STRUCT_H_
