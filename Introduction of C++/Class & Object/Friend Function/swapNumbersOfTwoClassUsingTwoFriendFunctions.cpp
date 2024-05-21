// Write a program that swapping private data of classes using friend function

#include <iostream>

using namespace std;

class number2;
class number1 {
  int num;

public:
  number1(int n) : num(n) {}

  friend void before_swap(number1, number2);
  friend void swap(number1, number2);
};

class number2 {
  int num;

public:
  number2(int n) : num(n) {}

  friend void before_swap(number1, number2);
  friend void swap(number1, number2);
};

void before_swap(number1 n1, number2 n2) {
  cout << "Before Swap =>" << endl
       << "Number 1 : " << n1.num << "\tNumber 2 : " << n2.num << endl
       << endl;
}

void swap(number1 n1, number2 n2) {
  int temp = n1.num;
  n1.num = n2.num;
  n2.num = temp;

  cout << "After Swap =>" << endl
       << "Number 1 : " << n1.num << "\tNumber 2 : " << n2.num << endl;
}

int main() {

  number1 n1(9);
  number2 n2(26);

  before_swap(n1, n2);

  swap(n1, n2);

  return 0;
}