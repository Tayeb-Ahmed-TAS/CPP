#include <iostream>
#include <map>

using namespace std;

int main() {

  map<int, string> students_info;

  students_info[101] = "Taskin";
  students_info[102] = "Tabassum";
  students_info[103] = "Shorna";
  students_info[104] = "Moumita";

  cout << "Is the map empty? " << students_info.empty() << endl; // 0

  // Note: The output of the program will be 0 because the map is not empty.
  //   If the map is empty, the output will be 1.

  return 0;
}