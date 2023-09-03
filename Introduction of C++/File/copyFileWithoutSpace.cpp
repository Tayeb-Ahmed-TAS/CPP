/*  A C++ program to perform the deletion of white space such as horizonta tab,
  space, line fee, new line and carriage return, from a text file and tostore
  the contents of the file without white spaces on another file */

#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ifstream f1("Students Details.txt");

  ofstream f2("copy.txt");

  char c;

  while (f1.eof() == 0) {

    c = f1.get();

    if (c == ' ' || c == '0' || c == '\t' || c == '\n')
      ;

    else

      f2.put(c);
  }

  f1.close();

  f2.close();

  return 0;
}