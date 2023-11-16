#include <iostream>

using namespace std;

int main() {

  int *p = new int[3]{10, 20, 30};

  delete[] p;

  for (int i = 0; i < 3; i++) {
    cout << "p[" << i << "] = " << p[i] << endl;
  }

  return 0;
}