#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
        if(i=n){
            cout<<"prime"<<endl;
            break;
        }
    }
    return 0;
}