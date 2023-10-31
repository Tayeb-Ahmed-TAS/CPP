#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ifstream f1("Students Details.txt");

  ofstream f2("copy.txt");

  char c;

  while (f1.eof() == 0) {

    c = f1.get();

    f2.put(c);
  }

  f1.close();

  f2.close();

  return 0;
}