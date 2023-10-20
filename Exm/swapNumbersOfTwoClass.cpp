/*
Write a program that swapping private data of classes using friend function
*/

#include <iostream>

using namespace std;

class B;
class A {
  int x = 10;

public:
  void showData() { cout << "X = " << x << endl; }

  friend void swap(A, B);
};

class B {
  int y = 20;

public:
  void showData() { cout << "Y = " << y << endl; }

  friend void swap(A, B);
};

void swap(A c, B d) {
  int temp = c.x;
  c.x = d.y;
  d.y = temp;
  cout << "After Swapping => " << endl;
  cout << "X = " << c.x << endl;
  cout << "Y = " << d.y << endl;
}

int main() {

  A m;
  B n;
  cout << "Before Swapping => " << endl;
  m.showData();
  n.showData();
  swap(m, n);

  return 0;
}