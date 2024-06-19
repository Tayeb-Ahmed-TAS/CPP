#include <iostream>

using namespace std;

class BaseClass {
public:
  int var_base;

  void display(void) {
    cout << "Base class display function called !" << endl;
    cout << "var_base : " << var_base << endl << endl;
  }
};

class DerivedClass : public BaseClass {
public:
  int var_derived;

  void display(void) {
    cout << "Derived class display function called !" << endl;
    cout << "var_base : " << var_base << endl;
    cout << "var_derived : " << var_derived << endl << endl;
  }
};

int main() {

  BaseClass *base_class_pointer;

  DerivedClass obj_derived;

  // ? Pointing base class pointer to derived class object
  base_class_pointer = &obj_derived;

  // ? Initialize base class variable because it is public
  base_class_pointer->var_base = 34;
  base_class_pointer->display(); // ? It will call base class display function
                                 // not derived class display function

  // base_class_pointer->var_derived = 134;

  // ? This will give error because base class pointer can't access derived
  // class variable

  DerivedClass *derived_class_pointer;

  // ? Pointing derived class pointer to derived class object
  derived_class_pointer = &obj_derived;

  derived_class_pointer->var_base = 111;
  derived_class_pointer->var_derived = 222;

  derived_class_pointer->display();
  // ? It will call derived class display function not base class display
  // function

  return 0;
}