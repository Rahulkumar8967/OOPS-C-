#include<iostream>
using namespace std;
void reverse(int num[],int n){
 int start = 0;
    int end   = n-1;
    while(start<=end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
}
void printArray(int num[],int n ){
   
    for(int i = 0 ;i<n;i++){
   cout<< num[i] <<" ";
    }
cout<<endl;
}
int main(){

int num1[10] ={1,7,5,3,0,9};
int num2[8]  = {3,6,0,1,5,9};
reverse(num1,10);
reverse(num2,8);

printArray(num1,10);

printArray(num2,8);

return 0;
}