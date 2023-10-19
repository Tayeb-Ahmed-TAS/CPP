#include <iostream>

using namespace std;

class Base1 {
  int a;

public:
  int get_data1(int x) { return a = x; }
};

class Base2 {
  int b;

public:
  int get_data2(int y) { return b = y; }
};

class Derived : public Base1, public Base2 {
  int sum;

public:
  int sum_data(int x, int y) {
    sum = get_data1(x) + get_data2(y);
    return sum;
  }
};

int main() {

  Derived obj;

  cout << "The sum is " << obj.sum_data(9, 26);

  return 0;
}