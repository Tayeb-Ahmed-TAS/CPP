#include <iostream>

using namespace std;

inline int func_name(int a, int b) { return (a > b) ? a : b; }

int main() {

  cout << func_name(5, 6) << endl;

  return 0;
}