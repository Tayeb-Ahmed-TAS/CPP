#include <iostream>

using namespace std;

int count = 0;

class my_class {

public:
  my_class() {

    count++;

    cout << "Constructor is called for object number " << count << endl;
  }

  ~my_class() {

    cout << "Destructor is called for object number " << count << endl;

    count--;
  }
};

int main() {

  cout << "Inside main function" << endl;

  cout << "Creating first object obj1" << endl;

  my_class obj1;

  { // ? Block

    cout << "Entering to Block" << endl;

    cout << "Creating two more objects obj1 and obj2" << endl;

    my_class obj2, obj3;

    cout << "Exiting from Block" << endl;
  }

  cout << "Back to main function" << endl;

  return 0;
}