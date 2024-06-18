// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interface:msg/Mytopic.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__MSG__DETAIL__MYTOPIC__BUILDER_HPP_
#define MY_INTERFACE__MSG__DETAIL__MYTOPIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interface/msg/detail/mytopic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interface
{

namespace msg
{

namespace builder
{

class Init_Mytopic_my_float
{
public:
  explicit Init_Mytopic_my_float(::my_interface::msg::Mytopic & msg)
  : msg_(msg)
  {}
  ::my_interface::msg::Mytopic my_float(::my_interface::msg::Mytopic::_my_float_type arg)
  {
    msg_.my_float = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface::msg::Mytopic msg_;
};

class Init_Mytopic_stamp
{
public:
  Init_Mytopic_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mytopic_my_float stamp(::my_interface::msg::Mytopic::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Mytopic_my_float(msg_);
  }

private:
  ::my_interface::msg::Mytopic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface::msg::Mytopic>()
{
  return my_interface::msg::builder::Init_Mytopic_stamp();
}

}  // namespace my_interface

#endif  // MY_INTERFACE__MSG__DETAIL__MYTOPIC__BUILDER_HPP_
