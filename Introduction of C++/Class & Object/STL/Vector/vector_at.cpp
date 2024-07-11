#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &vec) {
  cout << endl << "The elements of the vector are : " << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
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

// Output:
/*

Enter the size of your vector : 3
Enter the element 1 : 1
Enter the element 2 : 2
Enter the element 3 : 5

The elements of the vector are :
1 2 5

*/