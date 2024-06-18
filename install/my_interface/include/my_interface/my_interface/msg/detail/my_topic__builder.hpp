// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interface:msg/MyTopic.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__MSG__DETAIL__MY_TOPIC__BUILDER_HPP_
#define MY_INTERFACE__MSG__DETAIL__MY_TOPIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interface/msg/detail/my_topic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interface
{

namespace msg
{

namespace builder
{

class Init_MyTopic_my_float
{
public:
  explicit Init_MyTopic_my_float(::my_interface::msg::MyTopic & msg)
  : msg_(msg)
  {}
  ::my_interface::msg::MyTopic my_float(::my_interface::msg::MyTopic::_my_float_type arg)
  {
    msg_.my_float = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface::msg::MyTopic msg_;
};

class Init_MyTopic_stamp
{
public:
  Init_MyTopic_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyTopic_my_float stamp(::my_interface::msg::MyTopic::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MyTopic_my_float(msg_);
  }

private:
  ::my_interface::msg::MyTopic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface::msg::MyTopic>()
{
  return my_interface::msg::builder::Init_MyTopic_stamp();
}

}  // namespace my_interface

#endif  // MY_INTERFACE__MSG__DETAIL__MY_TOPIC__BUILDER_HPP_
