#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
    int j=1;
    while(j<=i){
      char ch='A'+i+j-2;
        cout<<ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}
//for triangular paattern(j<=i);
//for normal pattern (j<=n);//not true always but work sometimes;