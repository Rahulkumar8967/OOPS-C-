#include<iostream>
using namespace std;

int  getSum(int* arr , int n){
    int sum = 0;
    for(int i = 0; i<n;i++){
    sum += arr[i];
}
return sum;
}

int main(){

int n;
cin >> n;
int* arr = new int[n];  // creating dynamic array 
// int arr[50];  // creating static Array  
for(int i = 0; i<n;i++){
    cin >> arr[i];
}

  int result = getSum(arr ,n);
cout<<"value of sum of array is "<< result<<endl;


    return 0;
}
