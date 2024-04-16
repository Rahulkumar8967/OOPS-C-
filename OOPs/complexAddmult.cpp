#include<iostream>
using namespace std;

class complex {
private:
    float real, img;

public:
    complex() {}

    complex(float r, float i) {
        real = r;
        img = i;
    }

    void setData(float r, float i) {
        real = r;
        img = i;
    }

    void display() {
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << img << endl;
    }

    complex operator+(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp; // Return the result of addition
    }

    complex operator*(complex c) {
        complex temp;
        temp.real = real * c.real - img * c.img;
        temp.img = real * c.img + c.real * img;
        return temp;
    }
};

int main() {
    complex c1(3,4), c2(-2, 5), c3;
    c3 = c1 + c2;
    cout << "Result of c1 + c2: " << endl;
    c3.display();

    complex c5(3,6), c4(4, 8), c6;
    c6 = c5 * c4;
    cout << "Result of c5 * c4: " << endl;
    c6.display();

    return 0;
}
