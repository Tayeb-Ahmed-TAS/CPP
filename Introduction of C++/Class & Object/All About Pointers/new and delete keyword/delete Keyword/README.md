# `delete` Keyword

## Introduction

In C++, the delete keyword is used to deallocate memory that was allocated using the new keyword. The delete keyword frees the memory that was allocated using the new keyword.

### Syntax

```cpp

delete pointer_name;
```

### Syntax for array

```cpp

delete[] pointer_name;
```

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int *pointer = new int;
    *pointer = 10;
    cout << *pointer << endl;
    delete pointer;
    return 0;
}
```

In the above example, we have allocated memory for an integer variable using the new keyword. We have assigned a value of 10 to the variable and then printed the value. After that, we have deallocated the memory using the delete keyword.

In the above example, we have allocated memory for an integer variable using the new keyword. We have assigned a value of 10 to the variable and then printed the value. After that, we have deallocated the memory using the delete keyword.

### Example for array

```cpp
        #include <iostream>
        using namespace std;

        int main() {
            int *pointer = new int[5];
            for (int i = 0; i < 5; i++) {
                pointer[i] = i;
            }
            for (int i = 0; i < 5; i++) {
                cout << pointer[i] << " ";
            }
            cout << endl;
            delete[] pointer;
            return 0;
        }
```

In the above example, we have allocated memory for an array of integers using the new keyword. We have assigned values to the array elements and then printed the values. After that, we have deallocated the memory using the delete[] keyword.
