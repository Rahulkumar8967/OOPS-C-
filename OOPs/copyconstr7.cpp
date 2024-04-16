#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
  a = 0;
    }
    number(int num){
        a = num;
    }
    number(number &obj){
        cout<<"copy constructor called"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"display the value is"<<a<<endl;
    }
    
};

int main(){
number x, y,z(40),z2;
x.display();
y.display();
z.display();

number z1(100);
z1.display();

z2 = z;
z2.display();

    return 0;
}