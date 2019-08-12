#include "Class.h"

std::string Class::str{"None"};

// Constructor
Class::Class(int d, int n) : num{n}
{
  data = new int;
  *data = d;
}

// Copy constructor (Deep copy)
Class::Class(const Class &source) : Class(*source.data, source.num)
{
}

// Move constructor
Class::Class(Class &&source) : data{source.data}, num{source.num}
{
  source.data = nullptr;
}

// Destructor
Class::~Class()
{
  delete data;
}