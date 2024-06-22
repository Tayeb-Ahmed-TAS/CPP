#include <fstream>
#include <iostream>

using namespace std;

int main() {

  string st;

  // Opening files using constructor and reading it
  ifstream file_name("Demo_file.txt");

  // file_name >> st; // This will read only first word from file

  getline(file_name, st); // getline() is used to read whole line from file

  cout << st;

  file_name.close();

  return 0;
}