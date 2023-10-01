#include <iostream>

using namespace std;

class Base1 {
  int data1;

public:
  Base1(int i) {
    data1 = i;
    cout << "Base1 class constructor called" << endl;
  }
  void printDataBase1(void) {
    cout << "The value of data1 is " << data1 << endl;
  }
};

class Base2 {
  int data2;

public:
  Base2(int i) {
    data2 = i;
    cout << "Base2 class constructor called" << endl;
  }
  void printDataBase2(void) {
    cout << "The value of data2 is " << data2 << endl;
  }
};

class Derived : public Base2, public Base1 {
  int derived1, derived2;

public:
  Derived(int a, int b, int c, int d) : Base2(a), Base1(b) {
    derived1 = c;
    derived2 = d;
    cout << "Derived class constructor called" << endl;
  }
  void printDataDerived(void) {
    cout << "The value of derived1 is " << derived1 << endl
         << "The value of derived2 is " << derived2 << endl;
  }
};

int main() {

  Derived obj1(10, 20, 30, 40);
  obj1.printDataBase1();
  obj1.printDataBase2();
  obj1.printDataDerived();

  return 0;
}