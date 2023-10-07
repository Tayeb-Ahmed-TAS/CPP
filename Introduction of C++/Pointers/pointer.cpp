#include <iostream>

using namespace std;

int main() {

  int a = 3, c = 5, p = 10;

  int *b = &a;

  int *d;

  d = &p;

  cout << "The address of a is " << b << endl;

  cout << "The address of c is " << &c << endl;

  cout << "The value at address b is " << *b << endl;

  cout << "The value at address p is " << *(d) << endl;

  return 0;
}