#include<iostream>
using namespace std;
int main(){
int arr[5] = {4,7,5,3,9};
int n =sizeof(arr)/sizeof(int);
int sum = 0;
for(int i =0;i<n;i++){
    sum =sum + arr[i];
}
cout<<"sum of an given array is " << sum <<endl;

}