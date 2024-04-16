#include<iostream>
using namespace std;
class Base1{
public:
void greet(){
    cout<<"How are you?"<<endl;
}

};

class Base2{
public:
void greet(){
    cout<<"Kaise ho?"<<endl;
}

};

class Derived : public Base1, public Base2 {
    int a;
    public:
    void greet(){
        Base2 :: greet();
    }
};

class B{
    public:
    void say(){
        cout<<"Hello World ! "<<endl;
    }
};

class D{
    // D's new say() method will override base class's say() method
    int a;
    public:
    void say(){
        cout<<"Hello my beautiful girls "<<endl;
    }
};
int main(){
    //Ambiguity 1
// Base1 base1obj;
// Base2 base2obj;
// base1obj.greet();
// base2obj.greet();
// Derived d;
// d.greet();

B d;
d.say();

D A;
A.say();
  return 0;  
} 
