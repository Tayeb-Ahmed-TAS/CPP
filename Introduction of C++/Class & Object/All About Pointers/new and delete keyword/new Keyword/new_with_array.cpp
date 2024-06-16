#include <iostream>

using namespace std;

int main() {

  int *arr = new int[5];

  arr[0] = 3;
  arr[1] = 4;
  arr[2] = 5;
  arr[3] = 6;
  arr[4] = 7;

  cout << "Array elements are: " << endl;

  cout << "arr[0] = " << arr[0] << endl;
  cout << "arr[1] = " << arr[1] << endl;
  cout << "arr[2] = " << arr[2] << endl;
  cout << "arr[3] = " << arr[3] << endl;
  cout << "arr[4] = " << arr[4] << endl;

  return 0;
}