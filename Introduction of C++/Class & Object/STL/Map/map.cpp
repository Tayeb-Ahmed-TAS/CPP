#include <iostream>
#include <map>

using namespace std;

int main() {

  map<string, int> marks_map;

  marks_map["Tina"] = 90;
  marks_map["Rina"] = 80;
  marks_map["Arnab"] = 70;
  marks_map["Sina"] = 60;
  marks_map["Harry"] = 50;

  map<string, int>::iterator it;

  for (it = marks_map.begin(); it != marks_map.end(); it++) {
    // cout << (*it).first << "  " << (*it).second << endl;

    cout << it->first << "  " << it->second << endl;
  }

  return 0;
}