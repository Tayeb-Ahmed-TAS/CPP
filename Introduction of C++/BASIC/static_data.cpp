#include <iostream>

using namespace std;

void display() {

  static int a = 0;

  int b = 0;

  a++;

  b++;

  cout << "a = " << a << "\t"
       << "b = " << b << endl;
}

int main() {

  display();

  display();

  return 0;
}