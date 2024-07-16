#include <iostream>
#include <map>

using namespace std;

int main() {

  map<int, string> students_info;

  students_info[101] = "Taskin";
  students_info[102] = "Tabassum";
  students_info[103] = "Shorna";
  students_info[104] = "Moumita";

  map<int, string>::iterator it;

  it = students_info.find(103);

  if (it != students_info.end()) {
    cout << it->first << "\t" << it->second << endl;
  } else {
    cout << "Element not found !" << endl;
  }

  // Using ternary operator

  it = students_info.find(105);

  (it != students_info.end()) ? cout << it->first << "\t" << it->second << endl
                              : cout << "Element not found !" << endl;

  return 0;
}