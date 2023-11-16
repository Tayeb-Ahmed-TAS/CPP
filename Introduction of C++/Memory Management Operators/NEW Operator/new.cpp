#include <iostream>

using namespace std;

int main() {

  int *p = new int(26);

  cout << "p = " << *p << endl;

  float *q = new float(9.0001);

  cout << "q = " << *q << endl;

  return 0;
}