#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
        cout<<"neha\n";
    }
    else if(savings<2000){
        cout<<"Ruchika";
    }
    else{
        cout<<"friends";
    }
    return 0;
}