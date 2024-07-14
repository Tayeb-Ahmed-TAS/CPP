#include <iostream>
#include <map>

using namespace std;

template <class T1, class T2>

void display(map<T1, T2> &m) {
  cout << endl << "Displaying the map values: " << endl;

  typename map<T1, T2>::iterator it;
  // typename is used to tell the compiler that it is a type name. It is must to
  // use typename before the iterator in the template function.
  int i = 1; // Counter for the number of students

  for (it = m.begin(); it != m.end(); it++) {
    cout << i << ". " << it->first << " " << it->second << endl;
    i++;
  }
}

int main() {

  map<string, int> marks_map;

  string name;
  int marks, size;

  cout << "Enter the number of students: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "Enter the name of student " << i + 1 << ": ";
    cin >> name;
    cout << "Enter the marks of student " << i + 1 << ": ";
    cin >> marks;

    marks_map[name] = marks; // Inserting the name and marks in the map
  }

  display(marks_map);

  return 0;
}