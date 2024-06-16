#include <iostream>

using namespace std;

int main() {

  float *ptr = new float(58.77);

  cout << "The value at address " << ptr << " is " << *ptr << endl;

  return 0;
}