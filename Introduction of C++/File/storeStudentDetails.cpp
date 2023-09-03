#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string name;
  int id, n;
  ofstream file1("Students Details.txt", ios::out | ios::app);
  cout << "Enter the number of students => ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cout << "Enter Student " << i << " ID => ";
    cin >> id;
    cout << "Enter Student " << i << " Name => ";
    cin.ignore(); // ? To clear buffer
    getline(cin, name);
    file1 << "ID : " << id << "\t\t"
          << "Name : " << name << endl;
  }
  file1.close();
  cout << "Information Stored !";

  return 0;
}