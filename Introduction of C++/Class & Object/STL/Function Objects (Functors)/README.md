# Function Objects (Functors)

## What is a Function Object?

A function object is an object that can be called as if it were a function. It is a class that defines the `operator()` function. The function object is also known as a functor.

Function wrapped in a class so that it available like an object.

## Why use Function Objects?

Function objects are used to pass a function to an algorithm. It is used to pass a function to an algorithm that requires a function as an argument. It is used to pass a function to an algorithm that requires a function as an argument.

## Header File

```cpp
#include <functional>
```

## Some Function Objects

1. `plus` - It is used to add two numbers.
2. `minus` - It is used to subtract two numbers.
3. `multiplies` - It is used to multiply two numbers.
4. `divides` - It is used to divide two numbers.
5. `modulus` - It is used to find the modulus of two numbers.
6. `negate` - It is used to negate a number.
7. `equal_to` - It is used to check if two numbers are equal.
8. `not_equal_to` - It is used to check if two numbers are not equal.
9. `greater` - It is used to check if the first number is greater than the second number.
10. `greater_equal` - It is used to check if the first number is greater than or equal to the second number.
11. `less` - It is used to check if the first number is less than the second number.
12. `less_equal` - It is used to check if the first number is less than or equal to the second number.

## Example

```cpp
#include <iostream>
#include <functional>

using namespace std;

int main() {
    plus<int> add;
    cout << add(10, 20) << endl;            // 30

    minus<int> subtract;
    cout << subtract(20, 10) << endl;       // 10

    multiplies<int> multiply;
    cout << multiply(10, 20) << endl;       // 200

    divides<int> divide;
    cout << divide(20, 10) << endl;         // 2

    modulus<int> modulus;
    cout << modulus(20, 10) << endl;        // 0

    negate<int> negate;
    cout << negate(10) << endl;             // -10

    equal_to<int> equal;
    cout << equal(10, 20) << endl;          // 0

    not_equal_to<int> notEqual;
    cout << notEqual(10, 20) << endl;       // 1

    greater<int> greater;
    cout << greater(10, 20) << endl;        // 0

    greater_equal<int> greaterEqual;
    cout << greaterEqual(10, 20) << endl;   // 0

    less<int> less;
    cout << less(10, 20) << endl;           // 1

    less_equal<int> lessEqual;
    cout << lessEqual(10, 20) << endl;      // 1

    return 0;
}
```

[Algorithm Reference](https://cplusplus.com/reference/algorithm/)

[Function Objects (Functors) Reference](https://en.cppreference.com/w/cpp/utility/functional#:~:text=A%20function%20object%20is%20any,manipulation%20of%20new%20function%20objects)
