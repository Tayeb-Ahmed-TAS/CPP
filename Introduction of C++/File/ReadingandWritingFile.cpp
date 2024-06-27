#include <fstream>
#include <iostream>

using namespace std;

int main() {

  // ? Writing to a file

  ofstream demo_file("test_file.txt");

  string name;

  cout << "Enter your name : ";

  getline(cin, name); // This is used to get a line from the user with spaces

  demo_file << "The name is " << name;

  demo_file.close();

  // ? Reading from a file

  ifstream read_file("test_file.txt");

  string content;

  getline(read_file, content);
  // This is used to get a line from the file with spaces

  cout << "The content of the file is :" << endl << content;

  read_file.close();

  return 0;
}