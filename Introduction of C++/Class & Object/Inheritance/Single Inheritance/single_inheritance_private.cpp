#include <iostream>

using namespace std;

class Base {

  int data1; // ? Private by default and is not inheritable

public:
  int data2;

  void setData();

  int getData1();

  int getData2();
};

void Base::setData(void) {

  data1 = 20;

  data2 = 30;
}

int Base::getData1() { return data1; }

int Base::getData2() { return data2; }

class Derived : private Base { // ? Class is being derived privately

  int data3;

public:
  void process();

  void display();
};

void Derived::process() {

  setData();

  data3 = data2 * getData1();
}

void Derived::display() {

  cout << "Value of Data 1 is " << getData1() << endl;

  cout << "Value of Data 2 is " << data2 << endl;

  cout << "Value of Data 3 is " << data3 << endl;
}

int main() {

  Derived drv;

  // ? drv.setData() will not work as setData() is private in Derived class

  drv.process();

  drv.display();

  return 0;
}