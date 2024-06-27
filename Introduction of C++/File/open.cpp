#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ofstream file_name;

  file_name.open("test_file.txt");

  file_name << "Hello World" << endl;
  file_name << "Welcome to the world of programming" << endl;
  file_name << "Here we're learning C++" << endl;
  file_name << "Then we'll learn DSA" << endl;

  file_name.close();

  return 0;
}