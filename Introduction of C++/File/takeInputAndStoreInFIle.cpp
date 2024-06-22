#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string name;

  int id;

  ofstream file_name("Student.txt");

  cout << "Enter your name => ";

  getline(cin, name); // getline() is used to take input with spaces

  cout << "Enter your Id => ";

  cin >> id;

  file_name << "Name => " << name << "\tID => " << id << endl;

  file_name.close();

  cout << "Data is Stored !";

  return 0;
}