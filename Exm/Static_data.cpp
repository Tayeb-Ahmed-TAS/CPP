#include <iostream>

using namespace std;

void fnc() {
  static int a = 0;
  int b = 0;
  a++, b++;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

int main() {

  fnc();
  fnc();

  return 0;
}