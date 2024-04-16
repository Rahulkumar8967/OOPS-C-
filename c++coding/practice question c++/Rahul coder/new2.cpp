#include<iostream>
using namespace std;
int  main() {
bool b = 32;

int i = false;
cout << endl <<b <<endl << i; // prints 1 & then 0
int j = b + b;
bool k = b + b;
cout <<endl << j <<endl << k; // prints 2 & then 1
}