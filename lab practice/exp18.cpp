#include <iostream>
using namespace std;

class Base{
public:
int base1 = 40;
virtual void display(){
cout<<"The value of base class is  "<<base1<<endl;
}

};

class Derived: public Base{
public:
int Derived1 = 50;
virtual void display(){
    cout<<"The value of base class is  "<<base1<<endl;
    cout<<"The value of Derived class is "<<Derived1<<endl;
}

};

    int main() {
Base* baseclassPointer;
Base obj1;
Derived obj2;

baseclassPointer = &obj2;
obj2.display();

    return 0;
}