#include <iostream>

using namespace std;

class Base {
public:
  void msg1() { cout << "This is Grandfather class !" << endl; }
};

class Derived1 : public Base {
public:
  void msg2() { cout << "This is Father class !" << endl; }
};

class Derived2 : public Derived1 {
public:
  void msg3() { cout << "This is Child class !" << endl; }
};

int main() {

  Derived2 obj;

  obj.msg1();
  obj.msg2();
  obj.msg3();

  return 0;
}