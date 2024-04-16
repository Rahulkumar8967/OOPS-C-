// arr[i] = *(arr+i);
//i[arr] = *(i+arr);

#include<iostream>
using namespace std;

int main(){
 //int arr[10] = {23,122,41,67};
/*
cout<<"address of first memory block is "<<arr<<endl;
cout<<arr[0] <<endl;

cout<<"address of first memory block is "<<&arr[0]<<endl;

cout<<" 4th " <<*arr<<endl;
cout<<" 5th " <<*arr+1<<endl;
cout<<" 6th " <<*(arr + 1)<<endl;
cout<<" 7th " <<*(arr) + 1<<endl;
cout<<" 8th " <<arr[2]<<endl;
cout<<" 9th " << *(arr+2) <<endl;
int i = 1;
cout<< i[arr] <<endl;
*/
 
 /*
 int temp[10] = {5,2};
cout<<sizeof(temp)<<endl;  // size of entire array 40
cout<<" 1st "<< sizeof(*temp) <<endl; // size of first element  4
cout<<" 2nd "<< sizeof(&temp) <<endl; // size of pointer to an array of integer  4 or 8


int *ptr = &temp[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;

*/
/*
int a[20] = {5,2,3,5};
// same address print
cout<<  "->>"<<&a[0] <<endl;
cout<< &a <<endl;
cout<<a<<endl;

int *p = &a[0];
cout<<p <<endl;
cout<<*p<<endl;
cout<<"->>"<<&p<<endl;
*/

int arr[10] ;
 //arr = arr + 1;   given error
 int *ptr = &arr[0];
 cout<<ptr<<endl;
 ptr = ptr +1;
 cout<<ptr<<endl;
    return 0;
}