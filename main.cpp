#include "Class.h"
#include "TimeElapsed.h"
#include <iostream>

using namespace std;

int main()
{
  startTimer();

  Class c{10, 2};
  cout << c.getData() << endl;
  cout << c.getNum() << endl;

  finish();
  // system("pause");
}