// Update specific element in an array

#include <iostream>

using namespace std;

template <class t>

void display(t arr[], int size) {
  cout << endl << "Displaying array: " << endl;

  for (int i = 0; i < size; i++) {
    cout << arr[i] << "  ";
  }
  cout << endl;
}

template <class t>

void update(t arr[], int size) {
  int index, value;

  cout << "Enter the index (0 to " << size - 1
       << ") of the element you want to update: ";
  cin >> index;

  cout << "Enter the new value: ";
  cin >> value;

  if (index >= 0 && index < size) {
    arr[index] = value;
    display(arr, size);
  } else {
    cout << "Invalid index !" << endl;
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

  update(arr, size);

  return 0;
}