#include <iostream>

using namespace std;

class BaseClass {
public:
  int var_base;

  virtual void display(void) {
    cout << "Base Class Display Called !" << endl;
    cout << "var_base = " << var_base << endl << endl;
  }
};

class DerivedClass : public BaseClass {
public:
  int var_derived;

  void display(void) {
    cout << "Derived Class Display Called !" << endl;
    cout << "var_base = " << var_base << endl;
    cout << "var_derived = " << var_derived << endl << endl;
  }
};

int main() {

  BaseClass *base_class_pointer;

  DerivedClass obj_derived;

  base_class_pointer = &obj_derived;

  base_class_pointer->var_base = 34;
  //   base_class_pointer->var_derived = 34; // It will throw an error;
  obj_derived.var_derived = 369; // It will work fine;
  base_class_pointer->display();

  return 0;
}

/*
      Output:

Derived Class Display Called !
var_base = 34
var_derived = 369

 */