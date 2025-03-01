// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from person_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
#define PERSON_MSGS__MSG__DETAIL__PERSON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Person in the package person_msgs.
typedef struct person_msgs__msg__Person
{
  uint8_t light;
  uint8_t value;
  uint8_t color;
  uint8_t total;
} person_msgs__msg__Person;

// Struct for a sequence of person_msgs__msg__Person.
typedef struct person_msgs__msg__Person__Sequence
{
  person_msgs__msg__Person * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} person_msgs__msg__Person__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERSON_MSGS__MSG__DETAIL__PERSON__STRUCT_H_
