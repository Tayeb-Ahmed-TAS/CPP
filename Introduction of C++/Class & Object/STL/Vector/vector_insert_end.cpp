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

  vector<int> vec;
  int size = 4, element;

  for (int i = 0; i < size; i++) {
    element = i + 10;
    vec.push_back(element);
  }

  display(vec);

  vector<int>::iterator iter = vec.end();
  vec.insert(iter, 69);
  display(vec);

  vector<int>::iterator iter1 = vec.end();
  vec.insert(iter1 - 3, 2, 55);
  display(vec);

  return 0;
}