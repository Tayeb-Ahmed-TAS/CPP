#include <iostream>

using namespace std;

class Base {

private:
  int a;

protected:
  int b;
};

class Derived : protected Base {};

int main() {

  cout << "Hello World" << endl;

  Base b1;

  Derived d1;

  // ? Will not work since b is protected in Base class

  //   cout << b1.b << endl;

  // ? Will not work since a is protected in both base as well as derived class

  //   cout << d1.b << endl;

  return 0;
}