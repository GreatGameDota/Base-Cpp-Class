#include <iostream>
#include "Class.h"

std::string Class::str{"None"};

// Constructor
Class::Class(int d, int n) : num{n}
{
  data = new int;
  *data = d;
  std::cout << "Constructor Called" << std::endl;
}

// Copy constructor (Deep copy)
Class::Class(const Class &source) : Class(*source.data, source.num)
{
  std::cout << "Copy Constructor Called" << std::endl;
}

// Move constructor
Class::Class(Class &&source) : data{source.data}, num{source.num}
{
  source.data = nullptr;
  std::cout << "Move Constructor Called" << std::endl;
}

// Destructor
Class::~Class()
{
  delete data;
  std::cout << "Destructor Called" << std::endl;
}

// Copy Op (Deep Copy)
Class &Class::operator=(const Class &rhs)
{
  if (this == &rhs)
    return *this;
  delete data;
  data = new int;
  *data = *rhs.data;
  num = rhs.num;
  std::cout << "Copy Op Called" << std::endl;
  return *this;
}

// Move Op
Class &Class::operator=(Class &&rhs)
{
  if (this == &rhs)
    return *this;
  delete data;
  data = rhs.data;
  rhs.data = nullptr;
  num = rhs.num;
  std::cout << "Move Op Called" << std::endl;
  return *this;
}

// Input and Output stream Operator Overrides
std::ostream &operator<<(std::ostream &os, const Class &rhs)
{
  os << "[Data: " << *rhs.data << ", Num: " << rhs.num << ", Str: " << rhs.str << "]";
  return os;
}
std::istream &operator>>(std::istream &in, Class &rhs)
{
  int buff;
  in >> buff;
  rhs.num = buff;
  return in;
}