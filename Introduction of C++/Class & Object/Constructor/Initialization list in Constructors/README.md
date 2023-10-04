## Initialization list in Constructors

- The initialization list in constructors is another concept of initializing the data members of the class.

### Syntax =>

1.  A constructor is written first and then the initializations section is written

2.  In the initialization section, the data members are initialized

        constructor (argument-list) : initilization-section
        {

            assignment + other code;

        }

## Exapmle =>

### Code Snippet 1:

As shown in a code snippet 1,

1.  We have created a “test” class that consists of private data member “a” and “b” and parameterized constructor which takes two arguments and sets the value of data member “a” and “b” by using the initialization list. The constructor will also print the value of data member “a” and “b”.

2.  In the main program object “t” is created of the “test” data type and the values (4, 6) are passed.

        class Test
        {
            int a;
            int b;

        public:
            Test(int i, int j) : a(i), b(j)
            {
                cout << "Value of a is "<<a<<endl;
                cout << "Value of b is "<<b<<endl;
            }
        };

        int main()
        {
            Test t(4, 6);

            return 0;
        }

### Code Snippet 2:

The main thing to note here is that if we use the code shown below to initialize data members the compiler will throw an error because the data member “a” is being initialized first and the “b” is being initialized second so we have to assign the value to “a” data member first.

        Test(int i, int j) : b(j), a(i+b)

### Code Snippet 3:

But if we use the code shown below to initialize data members the compiler will not throw an error because the data member “a” is being initialized first and we are assigning the value to the data member “a” first.

        Test(int i, int j) : a(i), b(a + j)

Code Snippet 4:

It also ruyn successfully.

                Test(int i, int j) : a(i), b(i + j)
