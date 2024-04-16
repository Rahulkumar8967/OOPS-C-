#include<iostream>
using namespace std;

class complex{
    int real, imag;
    public:
    complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    complex operator +(complex const& obj){
  complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;

    }
    complex operator*(const complex& obj){
        complex res;
        res.real = (real * obj.real) -(imag * obj.real);
        res.imag = (real* obj.imag)- (imag * obj.imag);
        return res;
    }
    void display(){
        cout<<"value of complex number is "<<real<<"+ "<<imag<<"i "<<endl;
    }
};
int main(){
complex c1(2,4), c2(4,8);
complex sum = c1 + c2;
cout <<" sum is ";
sum.display();

complex product = c1* c2;
cout<<"product is ";
product.display();
    return 0;
}