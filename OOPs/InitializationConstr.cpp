#include<iostream>
using namespace std;

/*
syntax for initialization list in constructor:
Constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test{
    int a;
    int b;
    public:
   Test(int i, int j) : a(i), b(j)
   //  Test(int i, int j) : a(i), b(i+j)
   //   Test(int i, int j) : a(i), b(a+j)
   //  Test(int i, int j) : b(j), a(i+b)  ---> RED Flag this will create problems
  // a will be initialized first
    
    
     { 
       cout << "Constructor Called "<<endl;
       cout << "Value of a is "<<a<<endl;
       cout << "Value of b is "<<b<<endl; 
    }
};

int main(){

Test(4,6);

    return 0;
}