## Basic of C++

### Program Structure :

- The `#include` statement is used to add a header file to the program.

- The `using` command is used to tell the program which namespace to use.

- To use the `cout` command, you need to include the `<iostream>` header and use the `std` namespace.

- The starting point of C++ programs is the function called `main`, which includes the code that you want to run.

- The `endl` command is used to add a new line to the output.

### Variables :

- Every program works with values.

- A variable lets you store a **_value_** by assigning it to a **_name_**. The name can be used to refer to the value later in the program.

- To declare a variable use the type followed by the name of the variable.

- You can assign a value to the declared variable using the = operator.

- A variable can change its value during the program, by being assigned to a new value.

### Data Types :

- C++ supports many different types for your variables, based on their value.

- The `int` type is used to store whole numbers (called **integers** in programming)

- To store decimals (or floating point numbers), C++ provides the `float` and `double` data types.

- To specify that the value is a `float`, we need to use the letter **f** after it. ex:

        float length = 5.31f;

  - This tells C++ to use the value as a `float`, instead of `double`.

- The `char` type is used to store a single character. It is similar to declaring a `string`, but uses single quotes ('') for the value.

### Float vs Double :

- By default, decimal values are of type `double`.

- `float` uses less storage in the memory, but is not as precise as the `double` type.

- This means that calculations that use floats are faster than the ones that use double, however, the results are less accurate in terms of the decimal digits.

  - The best practice is to use `double`, if you do not have any specific requirements to use `float`.
