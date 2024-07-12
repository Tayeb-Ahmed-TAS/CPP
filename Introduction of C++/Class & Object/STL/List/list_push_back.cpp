#include <iostream>
#include <list>

using namespace std;

void display(list<int> &list1) {

  // Creating an iterator for list1

  list<int>::iterator iter;

  cout << endl << "The elements of the list are: " << endl;
  for (iter = list1.begin(); iter != list1.end(); iter++) {
    cout << *iter << " ";
  }
}

int main() {

  list<int> list1;
  int element, size;

  cout << "Enter the size of the list: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the element " << i + 1 << ": ";
    cin >> element;
    list1.push_back(element);
  }

  display(list1);

  return 0;
}