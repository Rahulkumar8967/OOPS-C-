#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"input a character";
    cin>>button;

    if(button=='a'){
        cout<<"hello"<<endl;
    }
    if(button=='b'){
        cout<<"namaste"<<endl;
    }
    if (button=='c'){
        cout<<"ciao"<<endl;
    }
    else{
        cout<<"still i am learning"<<endl;
    }
    
    return 0;
}