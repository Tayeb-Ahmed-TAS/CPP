#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &vec) {
  cout << endl << "The elements of the vector are : " << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }

  cout << endl;
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

  vector<int>::iterator iter = vec1.begin();
  // Creating an iterator to point to the beginning of the vector. Here iter is
  // the iterator name and vec1.begin() is the function which returns the
  // iterator pointing to the beginning of the vector.

  vec1.insert(iter, 10); // Inserting 10 at the beginning of the vector

  display(vec1);

  vector<int>::iterator iter1 = vec1.begin();

  vec1.insert(iter1 + 2, 69); // Inserting 69 at the 3rd position of the vector

  display(vec1);

  vector<int>::iterator iter2 = vec1.begin();

  vec1.insert(iter2 + 2, 5, 50);
  // Inserting 50 five times at the 3rd position of the vector

  display(vec1);

  return 0;
}

// Output:
/*

Enter the size of your vector : 4
Enter the element 1 : 1
Enter the element 2 : 2
Enter the element 3 : 3
Enter the element 4 : 4

The elements of the vector are :
1 2 3 4

The elements of the vector are :
10 1 2 3 4

The elements of the vector are :
10 1 69 2 3 4

The elements of the vector are :
10 1 50 50 50 50 50 69 2 3 4

*/