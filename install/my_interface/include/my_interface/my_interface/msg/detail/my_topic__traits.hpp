// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interface:msg/MyTopic.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__MSG__DETAIL__MY_TOPIC__TRAITS_HPP_
#define MY_INTERFACE__MSG__DETAIL__MY_TOPIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interface/msg/detail/my_topic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace my_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyTopic & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: my_float
  {
    out << "my_float: ";
    rosidl_generator_traits::value_to_yaml(msg.my_float, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: my_float
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_float: ";
    rosidl_generator_traits::value_to_yaml(msg.my_float, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyTopic & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_interface

namespace rosidl_generator_traits
{

[[deprecated("use my_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interface::msg::MyTopic & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interface::msg::MyTopic & msg)
{
  return my_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interface::msg::MyTopic>()
{
  return "my_interface::msg::MyTopic";
}

template<>
inline const char * name<my_interface::msg::MyTopic>()
{
  return "my_interface/msg/MyTopic";
}

template<>
struct has_fixed_size<my_interface::msg::MyTopic>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_interface::msg::MyTopic>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_interface::msg::MyTopic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACE__MSG__DETAIL__MY_TOPIC__TRAITS_HPP_
