#include <iostream>
#include <vector>

using namespace std;

int n = 0;

template <class T>

void display(vector<T> &vec) {
  ++n;
  cout << "The elements of vec" << n << " are : " << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }

  cout << endl;
}

int main() {

  vector<int> vec1; // Creating a zero length vector
  // Inserting elements in the vector
  vec1.push_back(10);
  vec1.push_back(20);
  display(vec1);

  vector<char> vec2(5); // Creating 5-element vector
  vec2.push_back('T');
  vec2.push_back('T');
  vec2.push_back('S');
  display(vec2);

  vector<char> vec3(vec2); // Creating 5-element vector from vec2
  display(vec3);

  vector<int> vec4(6, 13); // Creating 6-element vector of 13s
  display(vec4);

  return 0;
}

// Output:
/*

The elements of vec1 are :
10 20
The elements of vec2 are :
     T T S
The elements of vec3 are :
     T T S
The elements of vec4 are :
13 13 13 13 13 13

*/