#include <iostream>
#include <list>

using namespace std;

int main() {

  list<int> list1;    // List of 0 length

  // Inserting elements in list1

  list1.push_back(10);
  list1.push_back(20);
  list1.push_back(30);
  list1.push_back(40);
  list1.push_back(50);

  // Creating an iterator for list1

  list<int>::iterator iter;
  iter = list1.begin(); // It'll point to the first element of list1

  cout << *iter << endl; // 10

  iter++; // It'll point to the second element of list1

  cout << *iter << endl; // 20

  return 0;
}