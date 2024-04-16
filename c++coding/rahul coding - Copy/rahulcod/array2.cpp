#include<iostream>
using namespace std;

void printARRAY(int arr[], int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<< " ";
  } 
  cout<<"printing done"<<endl; 
}

int main(){
    int number[15] = {0}; 
    cout<<"value of 14 index: " <<number[14]<<endl;

    int second[3]={5,7,11};

    cout <<"value at second index: " <<second[2]<<endl;

    int third[15]={2,7};
    int n=15;
    printARRAY(third, 15); 

    int fourth[10]={1};
    n=10;
    printARRAY(fourth, 10); 
    int fourthsize= sizeof(fourth)/sizeof(int);
    cout <<"size of fourth is"<< fourthsize <<endl;
     
     char ch[5]=  {'a' ,'b','c','d','p'};
     cout << ch[3] <<endl;
     for(int i=0;i<5;i++){
    cout<<ch[i]<< " " <<endl;
     }
double firstdouble[5];
float firstfloat[6];
bool firstbool[9];



    cout<<"everything is fine"<<endl;

    
}   
