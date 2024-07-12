#include <iostream>
#include <list>

using namespace std;

void display(list<int> &list1) {
  // Creating an iterator for list1
  list<int>::iterator it;
  cout << endl << "The elements of the list are: " << endl;
  for (it = list1.begin(); it != list1.end(); it++) {
    cout << *it << " ";
  }
}

int main() {

  list<int> list1(5); // List of 5 length

  // Inserting elements in list1

  list<int>::iterator it;

  int i = 0; // Counter for the elements not necessary

  for (it = list1.begin(); it != list1.end(); it++) {
    cout << "Enter the element " << i + 1 << ": ";
    cin >> *it;
    i++;
  }

  display(list1);

  list1.pop_back(); // Deleting the last element of the list

  display(list1);

  return 0;
}