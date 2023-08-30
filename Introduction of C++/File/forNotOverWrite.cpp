#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ofstream file1("Student.txt", ios::out | ios::app);

  file1 << "Name => Tayeb Ahmed\tID => 09" << endl;

  file1.close();

  return 0;
}