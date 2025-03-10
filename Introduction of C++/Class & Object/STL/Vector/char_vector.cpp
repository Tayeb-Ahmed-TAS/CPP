#include <iostream>
#include <vector>

using namespace std;

template <class t>

void take_input(vector<t> &arr, int n) {

  for (int i = 0; i < n; i++) {
    char element;
    cout << "Enter the element " << i + 1 << ": ";
    element = cin.get(); // To avoid buffer
    cin >> element;
    arr.push_back(element);
  }

  return;
}

template <class t>

void display(vector<t> &arr) {

  cout << endl;

  cout << "I love you ";

  for (char i : arr) {
    cout << i;
  }

  // we can also use this.

  // for (int i = 0; i < arr.size(); i++) {
  //   cout << arr[i];
  // }

  cout << endl;

  return;
}

int main() {

  vector<char> arr;

  int n;
  cout << "Enter the number of characters: ";
  cin >> n;

  take_input(arr, n);
  display(arr);

  return 0;
}