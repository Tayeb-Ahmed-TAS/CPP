#include <iostream>
#include <map>

using namespace std;

int main() {

  map<int, string> students_info;

  students_info[101] = "Taskin";
  students_info[102] = "Tabassum";
  students_info[103] = "Shorna";
  students_info[104] = "Moumita";

  cout << "Size of the map: " << students_info.size() << endl; // 4

  cout << "Maximum size of the map: " << students_info.max_size()
       << endl; // 128102389400760775

  return 0;
}