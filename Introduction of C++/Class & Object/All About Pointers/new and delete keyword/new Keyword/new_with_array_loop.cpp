#include <iostream>

using namespace std;

int main() {

  int *arr = new int[5];

  for (int i = 0; i < 5; i++) {
    arr[i] = i + 3;
  }

  cout << "Array elements are: " << endl;

  for (int i = 0; i < 5; i++) {
    cout << "arr[" << i << "] = " << arr[i] << endl;
  }

  return 0;
}