#include <iostream>
#include <map>

using namespace std;

int main() {

  map<int, string> students_info;

  students_info[101] = "Taskin";
  students_info[102] = "Tabassum";
  students_info[103] = "Shorna";
  students_info[104] = "Moumita";

  cout << "The element at key 103 is: " << students_info[103] << endl;

  //   or,

  cout << "The element at key 104 is: " << students_info.at(104) << endl;

  return 0;
}