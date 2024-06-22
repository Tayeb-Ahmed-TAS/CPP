// reading the whole file using getline() function

#include <fstream>
#include <iostream>

using namespace std;

int main() {

  string st;

  ifstream file_name("Demo_file.txt");

  while (getline(file_name, st)) {
    cout << st << endl;
  }

  file_name.close();

  return 0;
}