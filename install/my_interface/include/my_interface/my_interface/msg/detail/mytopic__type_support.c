// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_interface:msg/Mytopic.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_interface/msg/detail/mytopic__rosidl_typesupport_introspection_c.h"
#include "my_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_interface/msg/detail/mytopic__functions.h"
#include "my_interface/msg/detail/mytopic__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_interface__msg__Mytopic__init(message_memory);
}

void my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_fini_function(void * message_memory)
{
  my_interface__msg__Mytopic__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interface__msg__Mytopic, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "my_float",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interface__msg__Mytopic, my_float),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_members = {
  "my_interface__msg",  // message namespace
  "Mytopic",  // message name
  2,  // number of fields
  sizeof(my_interface__msg__Mytopic),
  my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_member_array,  // message members
  my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_init_function,  // function to initialize message memory (memory has to be allocated)
  my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_type_support_handle = {
  0,
  &my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, msg, Mytopic)() {
  my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_type_support_handle.typesupport_identifier) {
    my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_interface__msg__Mytopic__rosidl_typesupport_introspection_c__Mytopic_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
