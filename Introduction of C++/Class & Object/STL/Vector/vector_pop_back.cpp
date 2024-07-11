#include <iostream>
#include <vector>

using namespace std;

template <class T>

void display(vector<T> &vec) {
  cout << endl << "The elements of the vector are : " << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
}

int main() {

  vector<int> vec1;
  int size, element;

  cout << "Enter the size of your vector : ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the element " << i + 1 << " : ";
    cin >> element;
    vec1.push_back(element);
  }

  vec1.pop_back();
  // pop_back() is used to remove the last element of the vector

  display(vec1);

  return 0;
}