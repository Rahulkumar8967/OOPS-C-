#include <iostream>
using namespace std;
// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId )
    {
        id = inpId;
        salary = 45;
    }
    Employee() {}
};

// derived class syntex
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/ method/etc...
}

Note:
1. Default visibility mode is private
2. public visibility mode: public members of the base class  becomes
public members of the derived class

3. private visibility mode: public members of the base class  becomes
private members of the derived class
4. private member are never inherited
*/

// creating a programmer class derived from Employee Base class

class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{

    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(12);
    cout<<skillF.languageCode<<endl;
skillF.getData();
    return 0;
}