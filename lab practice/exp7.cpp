#include<iostream>
using namespace std;

class Number{
    int a;
public:
Number(){
    a = 0;
}
Number(int i){
    a = i;
}
Number(Number &obj){
    cout<<"copy constructor called !! "<<endl;
    a = obj.a;

}
void display(){
    cout<<"display value is "<<a<<endl;
}
};
int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

z2 = z;
    z2.display();

   Number z1(x);
    z1.display();

    Number z3 = z;
    z3.display();
    

    return 0;
}