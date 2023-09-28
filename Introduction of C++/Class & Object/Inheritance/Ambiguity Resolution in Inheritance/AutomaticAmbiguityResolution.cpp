#include <iostream>

using namespace std;

class Base1 {
public:
  void msg() { cout << "Hello World !" << endl; }
};

class Base2 {
public:
  void msg() { cout << "Good Morning !" << endl; }
};

class Derived : public Base1, public Base2 {
public:
  // ?  Derived class's new msg() method will override base class's msg() method

  void msg() { cout << "Welcome to Derived class !" << endl; }
};

int main() {

  Base1 obj1;
  obj1.msg();

  Base2 obj2;
  obj2.msg();

  Derived obj_d;
  obj_d.msg();

  return 0;
}