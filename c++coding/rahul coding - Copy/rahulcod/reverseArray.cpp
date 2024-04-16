#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start =0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] <<"  ";
    }
    cout<<endl;
}



int main(){
int arr[5]={2,6,-3,8,5};
int brr[6]={7,4,0,6,2,1};
reverse(arr,5);
reverse(brr,6);


printArray(arr,5);
printArray(brr,6);


return 0;
}