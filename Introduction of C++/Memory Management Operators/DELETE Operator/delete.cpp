#include <iostream>

using namespace std;

int main() {

  int *p = new int(26);

  cout << "p = " << *p << endl;

  delete p;

  cout << "p = " << *p << endl;

  return 0;
}