#include<iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
/*
class DerivedC: visibility-mode base1, visibility-mode base2
{
    classbody of class "DerivedC"
};
*/
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int = b;
    }
};

class Derived: public Base1,public Base2{
public:
void show(){
    cout<<"The value of Base1 is "<< base1int<<endl;
      cout<<"The value of Base2 is "<< base2int<<endl;
        cout<<"The sum  is "<< base1int + base2int<<endl;
  

}
};
/*
The inherited derived class will look something like this:
Data members --->
base1int ----> protected
base2int ---> protected
Member functions:
set_base1int ---> public
set_base2int ---> public
set_show ---> public
*/

int main(){
Derived harry;
harry.set_base1int(25);
harry.set_base2int(6);
harry.show();
    return 0;
}