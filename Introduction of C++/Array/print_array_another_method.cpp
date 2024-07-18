#include <iostream>

using namespace std;

int main() {

  int arr[] = {10, 20, 35, 48, 50, 60, 77, 95};

  // Print all the elements of the array

  for (int x : arr) {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}