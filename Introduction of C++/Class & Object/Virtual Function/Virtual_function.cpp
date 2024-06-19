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

  obj.show(); // Output: This is Derived Class !

  Base *b1 = &obj; // Pointing Derived class object with Base class pointer

  b1->show(); // Output: This is Derived Class ! (Because of Virtual function)

  obj.show(); // Output: This is Derived Class !

  return 0;
}