#include <fstream>
#include <iostream>

using namespace std;

int main() {

  string text = "Hello World";

  // Opening file using constructor and writing in it
  ofstream file_name("Demo_file.txt");

  file_name << text;

  file_name.close();

  return 0;
}