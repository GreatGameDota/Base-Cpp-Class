class Class
{
private:
  int *data;
  int num;

public:
  // Constructor
  Class(int data = 0, int num = 0);
  // Copy constructor
  Class(const Class &source);
  // Move constructor
  Class(Class &&source);
  // Destructor
  ~Class();

  // Getters and Setters
  int getData() { return *data; }
  void setData(int d) { *data = d; }
  int getNum() { return num; }
  void setNum(int n) { num = n; }
};