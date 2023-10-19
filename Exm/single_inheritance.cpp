#include <iostream>

using namespace std;

class Base {
public:
  void show_base() { cout << "This is Base Class" << endl; }
};

class Derived : public Base {
public:
  void show_derived() { cout << "This is Derived Class" << endl; }
};

int main() {

  Derived obj;

  obj.show_base();
  obj.show_derived();

  return 0;
}