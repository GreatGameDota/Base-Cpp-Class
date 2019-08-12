#ifndef _CLASS_H_
#define _CLASS_H_

#include <string>

class Class
{
  // Iostream Operator Overrides
  friend std::ostream &operator<<(std::ostream &os, const Class &rhs);
  friend std::istream &operator>>(std::istream &in, Class &rhs);

private:
  int *data;
  int num;
  static std::string str;

public:
  // Constructor
  Class(int data = 0, int num = 0);
  // Copy constructor
  Class(const Class &source);
  // Move constructor
  Class(Class &&source);
  // Destructor
  ~Class();

  // Override Operators
  // Copy Op
  Class &operator=(const Class &rhs);
  // Move Op
  Class &operator=(Class &&rhs);

  // Getters and Setters
  int getData() const { return *data; } // Method will work with const objs
  void setData(int d) { *data = d; }
  int getNum() const { return num; }
  void setNum(int n) { num = n; }
  static std::string getStr() { return str; }
  static void setStr(std::string s) { str = s; }
};

#endif