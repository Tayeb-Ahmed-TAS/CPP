#include <iostream>

using namespace std;

int main() {

  string msg = "Hello, Mr/Mrs.", name;

  cout << "Enter your name : ";

  cin >> name;

  string greetings = msg + " " + name;

  cout << greetings << endl;

  // For Length of the string

  cout << "Length is => " << greetings.length() << endl;

  return 0;
}