#include <iostream>

using namespace std;

class Base1 {
public:
  void show() { cout << "This is Base1 !" << endl; }
};

class Base2 {
public:
  void show() { cout << "This is Base2 !" << endl; }
};

class Derived : public Base1, public Base2 {
public:
  void show() { Base2::show(); }
};

int main() {

  Derived obj;

  obj.show();

  return 0;
}