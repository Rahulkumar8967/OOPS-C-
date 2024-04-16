#include<iostream>
using namespace std;

class base{
    int data1;  // private and it is not inheritable
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int base :: getData1(){
    return data1;
}
int base:: getData2(){
    return data2;
}
class Derived:public base{  // class is being derived publically
int Data3;
public:
void process();
void display();


};

void Derived :: process(){
    Data3 = data2 *getData1();
}
 void Derived :: display(){
    cout<<"value of data 1 is "<<getData1() <<endl;
      cout<<"value of data 2 is "<<getData2() <<endl;
        cout<<"value of data 3 is "<< Data3<<endl;
  

 }
 int main() {
    Derived der;
    der.setData();
    der.process();
    der.display(); // Display after first processing
   // der.process(); // Process again
  //  der.display(); // Display after second processing
    return 0;
}
