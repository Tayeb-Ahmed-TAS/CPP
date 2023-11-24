// ! Write a program to find the largest and smallest number between two numbers
// ! of different classes

#include <iostream>

using namespace std;

class class2;
class class1 {
  int a;

public:
  class1(int x) { a = x; }

  void showdata() { cout << "The number of class1 is: " << a << endl; }
  friend void compare(class1, class2);
};

class class2 {
  int b;

public:
  class2(int y) { b = y; }
  void showdata() { cout << "The number of class2 is: " << b << endl; }
  friend void compare(class1, class2);
};

void compare(class1 c1, class2 c2) {
  if (c1.a > c2.b) {
    cout << "The largest number is: " << c1.a << endl;
    cout << "The smallest number is: " << c2.b << endl;
  } else {
    cout << "The largest number is: " << c2.b << endl;
    cout << "The smallest number is: " << c1.a << endl;
  }
}

int main() {

  class1 c1(9);

  c1.showdata();

  class2 c2(26);

  c2.showdata();

  compare(c1, c2);

  return 0;
}