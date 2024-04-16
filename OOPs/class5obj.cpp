#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary; 

public:
    void setId(void)
    {
          // salary = 122;
        cout << "Enter the id of employee ";
        cin >> id;
        cout<<"salary of this employee is ";
        cin >> salary;
    }

    void getId(void)
    {
     
        cout << "The id of this employee is " << id << endl;
        cout <<"Salary of every Employee is "<<salary<<endl;
    }
};

int main()
{
    // Employee harry,rohan,lovish ,shruti;
    // harry.setId();
    // harry.getId();
    Employee Rahul[4];
    for (int i = 0; i < 4; i++)
    {
        Rahul[i].setId();   
        Rahul[i].getId();
    }

    return 0;
}