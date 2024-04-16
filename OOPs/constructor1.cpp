#include <Iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with the  same name  as of the class.
    // It is used to initializ the objects of its class.
    // It is automatically invoked(call function karna) whenever an object is created.

    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "your Complex no. is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)
{ // this is a default constructor as it takes no arguments
    a = 0;
    b = 2;
}

int main()
{

    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
/*
 characteristics of constructors
 1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
 3. They cannot return values and do not have return types
 4. It can have default arguments
5. we cannot refer to their address
*/
