#include<iostream>
using namespace std;
int main(){

// pointer to int is created and pointing to some garbage address
//int *p;

 // cout<<*p<<endl;  segmentation fault


// int i = 5;
//  int *q =&i;
//  cout<<q<<endl;  // address
//  cout<<*q<<endl;  // value


//   int *p = 0;
// p =&i;
// cout<<p<<endl;
// cout<<*p<<endl;  


// int num = 5;
// int a = num;
// cout<<" a before "<<num<<endl;
// a++;
// cout<<" a after "<<num<<endl;

// int *p = &num;
// cout<<"before "<<num<<endl;
// (*p)++;
// cout<<"after "<<num<<endl;

// // copying a pointer
// int *q = p;
// cout<< p <<"- "<<q<<endl;
// cout<<*p <<"-"<<*q<<endl;


// important concept
int i = 3;
 int *t = &i;
 cout << t<<endl;
t = t+1;  // output -> 7
  cout<< (*t)++ <<endl;
*t = *t + 1;
cout<<*t<<endl;
    return 0;
}