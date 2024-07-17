// Update all elements of an array by multiplying each element by 2

#include <iostream>

using namespace std;

template <class t>

void display(t arr[], int size) {
  cout << endl << "Displaying array: " << endl;

  for (int i = 0; i < size; i++) {
    cout << arr[i] << "  ";
  }
}

int main() {

  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[size];

  for (int i = 0; i < size; i++) {
    cout << "Enter the element " << i + 1 << ": ";
    cin >> arr[i];
  }

  display(arr, size);

  // Update the array

  for (int i = 0; i < size; i++) {
    arr[i] = arr[i] * 2; // Multiply each element by 2
  }

  display(arr, size);

  return 0;
}