// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_

#include "person_msgs/srv/detail/query__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query_Request_value
{
public:
  explicit Init_Query_Request_value(::person_msgs::srv::Query_Request & msg)
  : msg_(msg)
  {}
  ::person_msgs::srv::Query_Request value(::person_msgs::srv::Query_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query_Request msg_;
};

class Init_Query_Request_light
{
public:
  Init_Query_Request_light()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Query_Request_value light(::person_msgs::srv::Query_Request::_light_type arg)
  {
    msg_.light = std::move(arg);
    return Init_Query_Request_value(msg_);
  }

private:
  ::person_msgs::srv::Query_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query_Request>()
{
  return person_msgs::srv::builder::Init_Query_Request_light();
}

}  // namespace person_msgs


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query_Response_total
{
public:
  explicit Init_Query_Response_total(::person_msgs::srv::Query_Response & msg)
  : msg_(msg)
  {}
  ::person_msgs::srv::Query_Response total(::person_msgs::srv::Query_Response::_total_type arg)
  {
    msg_.total = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query_Response msg_;
};

class Init_Query_Response_color
{
public:
  Init_Query_Response_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Query_Response_total color(::person_msgs::srv::Query_Response::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Query_Response_total(msg_);
  }

private:
  ::person_msgs::srv::Query_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query_Response>()
{
  return person_msgs::srv::builder::Init_Query_Response_color();
}

}  // namespace person_msgs

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_
