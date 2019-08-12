#include "Class.h"
#include "./helpers/TimeElapsed.h"
#include <iostream>

using namespace std;

int main()
{
  startTimer();

  Class c{10, 2};
  Class c2{2, 10};
  cout << c.getData() << endl;
  cout << c.getNum() << endl;
  cout << c.getStr() << endl;
  c.setStr("test");
  cout << c2.getStr() << endl;

  finish();
  // system("pause");
}