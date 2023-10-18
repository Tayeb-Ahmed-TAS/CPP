// ? Sum of two integers

#include <iostream>

using namespace std;

class class_name {
  int a, b;

public:
  class_name(int x, int y) {
    a = x;
    b = y;
  }

  friend int frnd_fnc(class_name);
};

int frnd_fnc(class_name c) {
  int sum = c.a + c.b;
  return sum;
}

int main() {

  class_name obj1(9, 26);

  cout << "The sum is " << frnd_fnc(obj1) << endl;

  return 0;
}