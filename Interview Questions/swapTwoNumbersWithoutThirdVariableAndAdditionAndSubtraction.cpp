// Swap Two numbers of two variables without using the third variable and
// Addition and Subtraction
// Logic =>
//     a = 3, b = 5
//     a = a ^ b = 3 ^ 5 = 6
//     b = a ^ b = 6 ^ 5 = 3
//     a = a ^ b = 6 ^ 3 = 5

#include <iostream>

using namespace std;

int main() {

  int a = 3, b = 5;

  cout << "The two numbers are " << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  a = a ^ b;

  b = a ^ b;

  a = a ^ b;

  cout << "After swapping the two numbers are " << endl
       << "a = " << a << endl
       << "b = " << b << endl;

  return 0;
}

/*

Note:

XOR operation between two bits results in 1 if the bits are different and 0 if
they are the same.

Let's break down the swap step by step:

In the first line a = a ^ b;, a (3) XOR b (5) gives us 6 (binary: 0110 XOR 1010
results in 0100). This value is stored back in a.

In the second line b = a ^ b;, we XOR the new value of a (which is now 6) with
the original value of b (5). This operation (6 XOR 5) gives 3 (binary: 0110 XOR
1010 results in 0011). The result, 3, is stored in b.

In the final line a = a ^ b;, we XOR the new value of a (6) with the new value
of b (3). This operation (6 XOR 3) gives 5 (binary: 0110 XOR 0011 results in
1010). The result, 5, is stored back in a.

By the end of these three XOR operations, the value of a becomes the original
value of b (5), and the value of b becomes the original value of a (3),
effectively swapping their contents.

*/