#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=1;i<size;i++){
        cout <<arr[i] <<endl;
    }
    cout << "printing done"<<endl;
}





int main(){
int number[15]={ 2,6,4};
cout <<"value at second index is" << number[2] <<endl;

int third[5]={12};
cout <<"value at third index is" << third[3] <<endl; 

int fourth[10]={1};
int n=10;
printArray(fourth,10);

}