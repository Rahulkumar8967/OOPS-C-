#include<iostream>
using namespace std;

class circle {
    int radius;
    float x, y;

public:
    // Default constructor
    circle() {}

    // Parameterized constructor
    circle(int r, float q, float p) {
        radius = r;
        x = q;
        y = p;
        cout << endl << "simple constructor invoked" << endl;
    }

    // Copy constructor
    circle(const circle &c) {
        cout << "copy constructor invoked " << endl;
        radius = c.radius;
        x = c.x;
        y = c.y;
    }

    // Overloading the assignment operator
    circle& operator=(const circle &c) {
        cout << endl << "Assignment operator invoked " << endl;
        if (this != &c) {
            radius = c.radius;
            x = c.x;
            y = c.y;
        }
        return *this;
    }

    void showData() {
        cout << radius << endl;
        cout << x << endl;
        cout << y << endl;
    }
};

int main() {
    circle c1(10, 20, 30);
    circle c2, c4;
    c4 = c2 = c1;
    circle c3 = c1;

    cout << "Data for c1:" << endl;
    c1.showData();

    cout << "Data for c2:" << endl;
    c2.showData();

    cout << "Data for c3:" << endl;
    c3.showData();

    cout << "Data for c4:" << endl;
    c4.showData();

    return 0;
}
