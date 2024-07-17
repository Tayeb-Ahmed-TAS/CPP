#include <iostream>
#include <map>

using namespace std;

template <class t1, class t2>

void display(map<t1, t2> &m) {

  cout << endl << "Displaying map: " << endl;

  typename map<t1, t2>::iterator it;

  for (it = m.begin(); it != m.end(); it++) {
    cout << it->first << "\t" << it->second << endl;
  }
}

int main() {

  map<int, string> students_info;

  students_info[101] = "Taskin";
  students_info[102] = "Tabassum";
  students_info[103] = "Shorna";
  students_info[104] = "Rayhan";
  students_info[105] = "Rahat";

  display(students_info);

  // update the value of key 104

  students_info[104] = "Tasfia";

  display(students_info);

  return 0;
}