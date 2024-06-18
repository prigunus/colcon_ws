// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interface:msg/MyTopic.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__MSG__DETAIL__MY_TOPIC__STRUCT_HPP_
#define MY_INTERFACE__MSG__DETAIL__MY_TOPIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_interface__msg__MyTopic __attribute__((deprecated))
#else
# define DEPRECATED__my_interface__msg__MyTopic __declspec(deprecated)
#endif

namespace my_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyTopic_
{
  using Type = MyTopic_<ContainerAllocator>;

  explicit MyTopic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_float = 0.0f;
    }
  }

  explicit MyTopic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_float = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _my_float_type =
    float;
  _my_float_type my_float;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__my_float(
    const float & _arg)
  {
    this->my_float = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interface::msg::MyTopic_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interface::msg::MyTopic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interface::msg::MyTopic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interface::msg::MyTopic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interface::msg::MyTopic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interface::msg::MyTopic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interface::msg::MyTopic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interface::msg::MyTopic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interface::msg::MyTopic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interface::msg::MyTopic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interface__msg__MyTopic
    std::shared_ptr<my_interface::msg::MyTopic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interface__msg__MyTopic
    std::shared_ptr<my_interface::msg::MyTopic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyTopic_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->my_float != other.my_float) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyTopic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyTopic_

// alias to use template instance with default allocator
using MyTopic =
  my_interface::msg::MyTopic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interface

#endif  // MY_INTERFACE__MSG__DETAIL__MY_TOPIC__STRUCT_HPP_
