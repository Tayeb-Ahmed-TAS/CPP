// Initialization list in Constructors

#include <iostream>

using namespace std;

class test {
  int a;
  int b;

public:
  test(int i, int j) : a(i), b(j) {
    cout << "Constructor executed !" << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
  }
};

int main() {

  test t1(4, 6);

  return 0;
}