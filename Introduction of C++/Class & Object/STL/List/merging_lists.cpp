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

  list<int> list1 = {26, 9, 17, 12, 3}, list2 = {5, 9, 25, 13, 6};

  list1.merge(list2); // Merging list2 into list1

  list1.sort(); // Sorting the list1

  display(list1); // Output: 3 5 6 9 9 12 13 17 25 26

  return 0;
}