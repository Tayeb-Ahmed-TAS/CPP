// Swap the elements of 2 vectors

#include <iostream>
#include <vector>

using namespace std;

template <class T>

void display(vector<T> &vec) {
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }

  cout << endl;
}

template <class T>

void call_vector(vector<T> &vec1, vector<T> &vec2) {
  cout << "Vector 1: ";

  display(vec1);

  cout << "Vector 2: ";

  display(vec2);
}

int main() {

  vector<int> vec1 = {1, 2, 3, 4}, vec2 = {5, 6, 7, 8};

  cout << "Before swapping" << endl;

  call_vector(vec1, vec2);

  swap(vec1, vec2); // Swapping the elements of the vectors

  cout << "After swapping" << endl;

  call_vector(vec1, vec2);

  return 0;
}