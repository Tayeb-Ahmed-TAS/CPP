# Friend Function

## Syntax =>

```cpp

        friend return_type function_name (arguments);    // for a global function

```

or,

```cpp

        friend return_type class_name::function_name (arguments);    // for a member function of another class

```

### Properties of Friend function

1. It is not in the scope of class.

2. Since it is not in the scope of the class, it cannot be called from the object of that class.

3. It can be invoked without the help of any object.

4. It cannot access the members directly by their names and need `object_name.member_name` to access any member.

5. It can be declared inside public or private part of the class.

6. Usually, it has objects as arguments.
