#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &vec) {
  cout << endl << "The elements of the vector are : " << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
}

int main() {

  int element, size;
  vector<int> vec1;

  cout << "Enter the size of your vector : ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the element " << i + 1 << " : ";
    cin >> element;
    vec1.push_back(element);
    // push_back() is used to add element at the end of the vector
  }

  display(vec1);

  return 0;
}