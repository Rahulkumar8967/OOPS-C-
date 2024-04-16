    // OOPs -  Class and Objects
    // c++ -->  initially Called --> C with Classes by stroustroup
    // Class --> extension of structures(in C)
    // structures had limitations --> (1) members are public
    // -->(2) no methods

    // classes --> structures + more
    // classes can have methods and properties
    //  classes --> can make few members as private &few as public
    // structures in c++ are typedefed
    // you can declare objects along with the class seclaration

    /* class Employee{
               //  class defintion
   }harry , rohan ,lovish
   */
    // harry.salary = 8 makes no sense if salary is private

    // nesting of member function

#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
 }; 

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin >> s;
}
void binary :: chk_bin(void){
    for(int i = 0 ;i<s.length();i++){
    if(s.at(i) != '0' && s.at(i) != '1'){
        cout<<" Incorrect binary format "<<endl;
        exit(0);
    }    
 }

}

void binary :: ones_compliment(void){
    
    for(int i = 0 ;i< s.length();i++){
if(s.at(i) == '0'){
    s.at(i) = '1';
}
else{
  s.at(i)  == '0'; 
}
    }
}
void binary :: display(void){

    cout <<"Display your binary number  "<<endl;
    for(int i = 0 ;i< s.length();i++){
cout<< s.at(i);
    }
}
 int main(){


binary b;
b.read();
b.chk_bin();
//b.display();
b.ones_compliment();
b.display();
    return 0;
}