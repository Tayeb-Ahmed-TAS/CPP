#include <iostream>

using namespace std;

class Base1 {
public:
  void greet() { cout << "Good Morning !" << endl; }
};

class Base2 {
public:
  void greet() { cout << "Hey, What's up ?" << endl; }
};

class Derived : public Base1, public Base2 {
public:
  void greet() { Base2::greet(); } // ? Ambiguity Resolution
};

int main() {

  Derived obj1;

  obj1.greet();

  return 0;
}