// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_interface:srv/Mysrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_interface/srv/detail/mysrv__rosidl_typesupport_introspection_c.h"
#include "my_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_interface/srv/detail/mysrv__functions.h"
#include "my_interface/srv/detail/mysrv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_interface__srv__Mysrv_Request__init(message_memory);
}

void my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_fini_function(void * message_memory)
{
  my_interface__srv__Mysrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_member_array[2] = {
  {
    "first",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interface__srv__Mysrv_Request, first),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interface__srv__Mysrv_Request, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_members = {
  "my_interface__srv",  // message namespace
  "Mysrv_Request",  // message name
  2,  // number of fields
  sizeof(my_interface__srv__Mysrv_Request),
  my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_member_array,  // message members
  my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_type_support_handle = {
  0,
  &my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, srv, Mysrv_Request)() {
  if (!my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_type_support_handle.typesupport_identifier) {
    my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_interface__srv__Mysrv_Request__rosidl_typesupport_introspection_c__Mysrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_interface/srv/detail/mysrv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_interface/srv/detail/mysrv__functions.h"
// already included above
// #include "my_interface/srv/detail/mysrv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_interface__srv__Mysrv_Response__init(message_memory);
}

void my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_fini_function(void * message_memory)
{
  my_interface__srv__Mysrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_member_array[3] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interface__srv__Mysrv_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multiply",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interface__srv__Mysrv_Response, multiply),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "division",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interface__srv__Mysrv_Response, division),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_members = {
  "my_interface__srv",  // message namespace
  "Mysrv_Response",  // message name
  3,  // number of fields
  sizeof(my_interface__srv__Mysrv_Response),
  my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_member_array,  // message members
  my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_type_support_handle = {
  0,
  &my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, srv, Mysrv_Response)() {
  if (!my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_type_support_handle.typesupport_identifier) {
    my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_interface__srv__Mysrv_Response__rosidl_typesupport_introspection_c__Mysrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_interface/srv/detail/mysrv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_service_members = {
  "my_interface__srv",  // service namespace
  "Mysrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_Request_message_type_support_handle,
  NULL  // response message
  // my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_service_type_support_handle = {
  0,
  &my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, srv, Mysrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, srv, Mysrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, srv, Mysrv)() {
  if (!my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_service_type_support_handle.typesupport_identifier) {
    my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, srv, Mysrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interface, srv, Mysrv_Response)()->data;
  }

  return &my_interface__srv__detail__mysrv__rosidl_typesupport_introspection_c__Mysrv_service_type_support_handle;
}
