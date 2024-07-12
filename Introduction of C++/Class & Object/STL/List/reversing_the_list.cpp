#include <iostream>
#include <list>

using namespace std;

void display(list<int> &list1) {
  // Creating an iterator for list1
  list<int>::iterator it;
  cout << "The elements of the list are: " << endl;
  for (it = list1.begin(); it != list1.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}

int main() {

  list<int> list1 = {26, 9, 17, 12, 3}; // List of 5 length

  display(list1); // Output: 26 9 17 12 3

  list1.reverse(); // Reversing the list

  display(list1); // Output: 3 12 17 9 26

  return 0;
}