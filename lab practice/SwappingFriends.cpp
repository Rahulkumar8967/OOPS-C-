#include<iostream>
using namespace std;

class babygirl2;  

class babygirl1 {
    int girl1Value;

public:
    babygirl1(int saini) {
        girl1Value = saini;
    }

    void display(void) {
        cout << girl1Value << endl;
    }

    friend void exchange(babygirl1 &, babygirl2 &);
};

class babygirl2 {
    int girl2Value;

public:
    babygirl2(int saini) {
        girl2Value = saini;
    }

    void display(void) {
        cout << girl2Value << endl;
    }

    friend void exchange(babygirl1 &, babygirl2 &);
};

void exchange(babygirl1 &x, babygirl2 &y) {
    int temp = x.girl1Value;
    x.girl1Value = y.girl2Value;
    y.girl2Value = temp;
}

int main() {
    babygirl1 sexy1(5000);  // You need to provide a value for initialization
    babygirl2 sexy2(150); // You need to provide a value for initialization

    cout << "Value before Rahul using is" << endl;
    cout << "Sexy1: ";
    sexy1.display();
    cout << "Sexy2: ";
    sexy2.display();

    exchange(sexy1, sexy2);

    cout << "Value after meet using  is" << endl;
    cout << "Sexy1: ";
    sexy1.display();
    cout << "Sexy2: ";
    sexy2.display();

    return 0;
}
