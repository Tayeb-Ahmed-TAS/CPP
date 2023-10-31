#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ifstream f1("f1.txt");
  ofstream f2("f2.txt");

  char c;

  while (f1.eof() == 0) {
    c = f1.get();

    f2.put(c);
  }

  f1.close();
  f2.close();

  return 0;
}