// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interface:srv/Mysrv.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__SRV__DETAIL__MYSRV__BUILDER_HPP_
#define MY_INTERFACE__SRV__DETAIL__MYSRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interface/srv/detail/mysrv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interface
{

namespace srv
{

namespace builder
{

class Init_Mysrv_Request_second
{
public:
  explicit Init_Mysrv_Request_second(::my_interface::srv::Mysrv_Request & msg)
  : msg_(msg)
  {}
  ::my_interface::srv::Mysrv_Request second(::my_interface::srv::Mysrv_Request::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface::srv::Mysrv_Request msg_;
};

class Init_Mysrv_Request_first
{
public:
  Init_Mysrv_Request_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mysrv_Request_second first(::my_interface::srv::Mysrv_Request::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_Mysrv_Request_second(msg_);
  }

private:
  ::my_interface::srv::Mysrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface::srv::Mysrv_Request>()
{
  return my_interface::srv::builder::Init_Mysrv_Request_first();
}

}  // namespace my_interface


namespace my_interface
{

namespace srv
{

namespace builder
{

class Init_Mysrv_Response_division
{
public:
  explicit Init_Mysrv_Response_division(::my_interface::srv::Mysrv_Response & msg)
  : msg_(msg)
  {}
  ::my_interface::srv::Mysrv_Response division(::my_interface::srv::Mysrv_Response::_division_type arg)
  {
    msg_.division = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface::srv::Mysrv_Response msg_;
};

class Init_Mysrv_Response_multiply
{
public:
  explicit Init_Mysrv_Response_multiply(::my_interface::srv::Mysrv_Response & msg)
  : msg_(msg)
  {}
  Init_Mysrv_Response_division multiply(::my_interface::srv::Mysrv_Response::_multiply_type arg)
  {
    msg_.multiply = std::move(arg);
    return Init_Mysrv_Response_division(msg_);
  }

private:
  ::my_interface::srv::Mysrv_Response msg_;
};

class Init_Mysrv_Response_sum
{
public:
  Init_Mysrv_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mysrv_Response_multiply sum(::my_interface::srv::Mysrv_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return Init_Mysrv_Response_multiply(msg_);
  }

private:
  ::my_interface::srv::Mysrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface::srv::Mysrv_Response>()
{
  return my_interface::srv::builder::Init_Mysrv_Response_sum();
}

}  // namespace my_interface

#endif  // MY_INTERFACE__SRV__DETAIL__MYSRV__BUILDER_HPP_
