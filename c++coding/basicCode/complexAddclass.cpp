#include<iostream>
using namespace std;
class complex{

    int a,b ;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
 void setSum(complex o1, complex o2){
    a = o1.a + o1.a ;
    b = o2.b + o2.b;
 }

void printNumber(){
    cout<<"class complex is "<<a<<" + "<<b<<"i"<<endl;
}
};
int main(){
    complex c1,c2,c3;
    c1.setData(4,6);
    c1.printNumber();

    c2.setData(12,18);
    c1.printNumber();

c3.setSum(c1,c2);
c3.printNumber();

    return 0;
}