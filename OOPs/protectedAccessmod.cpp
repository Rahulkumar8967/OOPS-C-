#include<iostream>
using namespace std;
class Base{
    protected:
int a;
private:
int b;

};
/*
for a  protected member:
              public derivation    private derivation    protected derivation
1. private    Not Inherited       not Inherited          Not Inherited
2. protected  protected           private                protected
3. public     public              private                protected

*/
class Derived: protected Base{

};

int main(){
   Base b;
   Derived d;
//    cout<< d.a;   will not work bcoz a is protected
    return 0;

}