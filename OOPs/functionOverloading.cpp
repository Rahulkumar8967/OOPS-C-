#include<iostream>
using namespace std;
void Add(int a, int b){
    cout<<"Sum is ->:"<< a+ b <<endl;
    }
    void Add(double a, double b){
        cout<<"Sum is ->>:"<<a + b<<endl;
    }

int main(){
Add(10,12);
Add(10.9, 8.5);


    return 0;
}