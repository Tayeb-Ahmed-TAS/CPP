#include <iostream>

using namespace std;

class Base {
public:
  void show_base() { cout << "This is Base class" << endl; }
};

class Derived1 : public Base {
public:
  void show_derived1() { cout << "This is Derived 1 class" << endl; }
};

class Derived2 : public Base {
public:
  void show_derived2() { cout << "This is Derived 2 class" << endl; }
};

int main() {

  Derived1 d1;
  Derived2 d2;

  d1.show_base();
  d2.show_base();

  d1.show_derived1();
  d2.show_derived2();

  return 0;
}