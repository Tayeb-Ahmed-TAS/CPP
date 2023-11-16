#include <iostream>

using namespace std;

class A {
public:
  int a = 15;
};

class B : virtual public A {
public:
  int b = 10;
};

class C : virtual public A {
public:
  int c = 20;
};

class D : public B, public C {
public:
  int sum() { return a + b + c; }
};

int main() {

  D obj;

  cout << "The sum is " << obj.sum() << endl;

  return 0;
}