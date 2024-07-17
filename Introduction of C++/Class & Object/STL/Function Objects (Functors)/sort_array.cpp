#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

template <class t>

void display(t arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr[] = {5, 2, 8, 1, 9, 3, 7, 4, 6, 10};

  int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

  sort(arr, arr + n); // Ascending order and arr + n is the end pointer

  cout << "Ascending order: " << endl;

  display(arr, n);

  sort(arr, arr + n, greater<int>());
  // Descending order.
  // Here greater<int>() is a function object

  cout << "Descending order: " << endl;

  display(arr, n);

  return 0;
}