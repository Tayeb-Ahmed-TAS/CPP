#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> vec = {1, 2, 3, 4, 5};

  cout << "Capaticy: " << vec.capacity() << endl; // 5

  vec.push_back(6);

  cout << "Capaticy: " << vec.capacity()
       << endl; // 10 (doubled because when we push_back, it will create a new
                // array and copy the elements from the old array to the new
                // array)

  return 0;
}