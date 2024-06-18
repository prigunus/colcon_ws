// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interface:srv/Mysrv.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__SRV__DETAIL__MYSRV__STRUCT_HPP_
#define MY_INTERFACE__SRV__DETAIL__MYSRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interface__srv__Mysrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interface__srv__Mysrv_Request __declspec(deprecated)
#endif

namespace my_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mysrv_Request_
{
  using Type = Mysrv_Request_<ContainerAllocator>;

  explicit Mysrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0ll;
      this->second = 0ll;
    }
  }

  explicit Mysrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0ll;
      this->second = 0ll;
    }
  }

  // field types and members
  using _first_type =
    int64_t;
  _first_type first;
  using _second_type =
    int64_t;
  _second_type second;

  // setters for named parameter idiom
  Type & set__first(
    const int64_t & _arg)
  {
    this->first = _arg;
    return *this;
  }
  Type & set__second(
    const int64_t & _arg)
  {
    this->second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interface::srv::Mysrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interface::srv::Mysrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Mysrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Mysrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interface__srv__Mysrv_Request
    std::shared_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interface__srv__Mysrv_Request
    std::shared_ptr<my_interface::srv::Mysrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mysrv_Request_ & other) const
  {
    if (this->first != other.first) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mysrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mysrv_Request_

// alias to use template instance with default allocator
using Mysrv_Request =
  my_interface::srv::Mysrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interface


#ifndef _WIN32
# define DEPRECATED__my_interface__srv__Mysrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interface__srv__Mysrv_Response __declspec(deprecated)
#endif

namespace my_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mysrv_Response_
{
  using Type = Mysrv_Response_<ContainerAllocator>;

  explicit Mysrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
      this->multiply = 0ll;
      this->division = 0.0f;
    }
  }

  explicit Mysrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
      this->multiply = 0ll;
      this->division = 0.0f;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;
  using _multiply_type =
    int64_t;
  _multiply_type multiply;
  using _division_type =
    float;
  _division_type division;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }
  Type & set__multiply(
    const int64_t & _arg)
  {
    this->multiply = _arg;
    return *this;
  }
  Type & set__division(
    const float & _arg)
  {
    this->division = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interface::srv::Mysrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interface::srv::Mysrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Mysrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interface::srv::Mysrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interface__srv__Mysrv_Response
    std::shared_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interface__srv__Mysrv_Response
    std::shared_ptr<my_interface::srv::Mysrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mysrv_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    if (this->multiply != other.multiply) {
      return false;
    }
    if (this->division != other.division) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mysrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mysrv_Response_

// alias to use template instance with default allocator
using Mysrv_Response =
  my_interface::srv::Mysrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interface

namespace my_interface
{

namespace srv
{

struct Mysrv
{
  using Request = my_interface::srv::Mysrv_Request;
  using Response = my_interface::srv::Mysrv_Response;
};

}  // namespace srv

}  // namespace my_interface

#endif  // MY_INTERFACE__SRV__DETAIL__MYSRV__STRUCT_HPP_
