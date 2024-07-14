#include <algorithm> // for sort() function
#include <iostream>
#include <vector>

using namespace std;

template <class t>

void display(vector<t> vec) {
  cout << "The elements of the vector are:" << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }

  cout << endl;
}

int main() {

  vector<int> vec = {54, 5896, 16, 258, 26};

  sort(vec.begin(), vec.end());

  display(vec); // 16 26 54 258 5896

  return 0;
}