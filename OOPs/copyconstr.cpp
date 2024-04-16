#include <iostream>
using namespace std;

class Number {
    int a;

public:
    Number() {
        a = 0;  // Default constructor initializing 'a' to 0
    }

    Number(int num) {
        a = num;  // Parameterized constructor taking an integer argument and setting 'a' to that value
    }

    // Copy constructor
    Number(Number &obj) {
        cout << "Copy Constructor called !!! " << endl;
        a = obj.a;    // Copies the value of 'a' from the provided 'Number' object
    }

    void display() {
        cout << "The number for this object is " << a << endl;
    }
};

int main() {
    Number x, y, z(45), z2;
    x.display();  // Displaying the value of x (initialized via the default constructor)
    y.display();  // Displaying the value of y (also initialized via the default constructor)
    z.display();  // Displaying the value of z (initialized with a parameterized constructor)

    Number z1(x); // Invokes the copy constructor, creates z1 as a copy of x
    z1.display(); // Displaying the value of z1

    z2 = z;       // Assigning the value of 'z' to 'z2' (copy assignment, not using the copy constructor)
    z2.display(); // Displaying the value of z2

    Number z3 = z; // Invokes the copy constructor to create z3 as a copy of z
    z3.display();  // Displaying the value of z3

    return 0;
}

