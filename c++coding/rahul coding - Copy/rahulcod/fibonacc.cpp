#include<iostream>
using namespace std;
int incrementvalue(int a,int b){
        for(int i=1;i<=10;i++){
          int  nextnumber=a+b;
         a=b;
         b=nextnumber;
        
          cout << nextnumber <<endl;
    }
  
    }

int main(){
int a=1,b=0,nextnumber;
 cout<< b<<endl;
nextnumber=incrementvalue(a,b);
}