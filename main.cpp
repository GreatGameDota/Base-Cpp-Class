#include "Class.h"
#include "./util/TimeElapsed.h"
#include <iostream>

using namespace std;

int main()
{
  startTimer();

  Class c{10, 2};
  Class c2{c};
  cout << c.getData() << " " << c.getNum() << endl;
  cout << "c2: " << c2.getData() << " " << c2.getNum() << endl;

  cout << c.getStr() << endl;
  c.setStr("test");
  cout << c2.getStr() << endl;

  Class c3;
  cout << c3.getData() << " " << c3.getNum() << endl;
  c3 = c;
  cout << c3.getData() << " " << c3.getNum() << endl;
  c3 = Class{2, 10};
  cout << c3.getData() << " " << c3.getNum() << endl;

  cout << "Change Num of c3: ";
  cin >> c3;
  cout << c3 << endl;

  finish();
  // system("pause");
}