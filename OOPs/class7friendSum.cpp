#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    void SetNumber(int n1 , int n2){
        a = n1;
        b = n2;
    }  
      friend Complex SumComplex(Complex o1, Complex o2);
    void printNumber(){
        cout<<"your number is " << a <<" + "<<b<<" i "<<endl;

    }
};

Complex SumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.SetNumber((o1.a + o2.a) ,(o1.b +o2.b));
    return o3;
}

int main(){

Complex c1, c2,Sum;
c1.SetNumber(1,4);
c1.printNumber();
c2.SetNumber(5 ,8);
c2.printNumber();


Sum = SumComplex(c1,c2);
Sum.printNumber();
    return 0;
}
//
/* properties of friend function
1. not in the scope of class
since it is  not in the scope of the class ,it cannot be called from 
the object of that class. c1.sumComplex() == Invaild
3. can be invoked without the help of any object
4. usually contain the objects as arguments
5. can be declare inside  public as well as private section of the class
6. It cannot access the members directly


*/