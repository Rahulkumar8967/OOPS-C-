#include<iostream>
using namespace std;

class complex {
int a, b;
public:
int x;
void setData(int v1, int v2){
    a = v1;
    b= v2;

}
void sum(complex o1, complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;  
}

void printNumber(){
    cout<<"sum of complex number is "<< a<< " + "<<b<<"i"<<endl;
}
};
int main(){
complex c1,c2,c3;
c1.setData(7,9);
c1.printNumber();

c2.setData(6,4);
c2.printNumber();

c3.sum(c1,c2);
c3.printNumber();
    return 0;
}