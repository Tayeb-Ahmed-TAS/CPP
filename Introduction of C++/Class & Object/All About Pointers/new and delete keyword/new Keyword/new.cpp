#include <iostream>

using namespace std;

int main() {

  int *ptr = new int;

  cout << "Enter an integer => ";

  cin >> *ptr;

  cout << "The value at address " << ptr << " is " << *ptr << endl;

  return 0;
}