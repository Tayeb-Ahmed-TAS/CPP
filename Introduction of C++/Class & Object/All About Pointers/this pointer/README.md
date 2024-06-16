# `this` Pointer

- `this` is a keyword which is a pointer which points to the object which invokes the member function.

- `this` pointer is a constant pointer which holds the memory address of the current object.

## Example 1 (Member Function)

    class Test {
        int a;
    public:
        void setData(int a) {
            this->a = a;
        }
        void getData() {
            cout << "The value of a is: " << a << endl;
        }
    };

## Example 2 (Constructor)

    class Test {
        int a;
    public:
        Test(int a) {
            this->a = a;
        }
        void getData() {
            cout << "The value of a is: " << this->a << endl;
        }
    };

## Example 3 (Returning Object)

    class Test {
        int a;
    public:
        Test & setData(int a) {
            this->a = a;
            return *this;
        }
        void getData() {
            cout << "The value of a is: " << this->a << endl;
        }
    };

    int main() {
        Test t1;
        t1.setData(4).getData();
        return 0;
    }
