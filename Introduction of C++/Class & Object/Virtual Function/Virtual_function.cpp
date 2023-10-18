#include <iostream>

using namespace std;

class Base {

public:
  virtual void show() { cout << "This is Base Class !" << endl; }
};

class Derived : public Base {
public:
  void show() { cout << "This is Derived Class !" << endl; }
};

int main() {

  Derived obj;

  obj.show();

  Base *b1 = &obj;

  b1->show();

  obj.show();

  return 0;
}