#include <algorithm> // Header file for reverse() function
#include <iostream>
#include <vector>

using namespace std;

template <class T>

void display(vector<T> &vec) {
  cout << "The elements of the vector are:" << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }

  cout << endl;
}

int main() {

  vector<int> vec = {1, 2, 3, 4, 5, 6}; // initializing vector

  display(vec);

  reverse(vec.begin(), vec.end()); // Reversing the vector

  cout << "After reversing ";

  display(vec);

  return 0;
}