#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
int main(){
int number[15];
cout<<"value at 14 index is "<<number [14] <<endl;
int second[10]={2,3,7};
cout<<"value at 2 index is "<<second[2] <<endl;
int third[15] = {1,5};

PrintArray(third,15);

int fourth[10] = {3,8};

PrintArray(fourth,10);

int fifth[10] = {1};
 
PrintArray(fifth,10);
int fifthsize = sizeof(fifth)/sizeof(int);
cout<<"size of fifth is "<< fifthsize<<endl;
  
}