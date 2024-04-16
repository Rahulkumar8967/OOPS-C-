#include<iostream>
using namespace std;
int Fibseries(int a,int b){
    for(int i =1;i<=20;i++){
   int nextnumber =a+b;
  a = b;
   b = nextnumber;

    }
   return b; 
}
int main(){
int a = 0 ,b=1;
 cout << a << " " << b << " ";
 for(int i=1;i<=20;i++){
        int  nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
}