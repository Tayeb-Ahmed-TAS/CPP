#include <fstream>
#include <iostream>


using namespace std;

int main() {

  ifstream file_name;

  file_name.open("test_file.txt");

  string content;

  while (file_name.eof() == 0) {
    getline(file_name, content);
    cout << content << endl;
  }

  file_name.close();

  return 0;
}