#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;    // 1->prime no.
                         //0->not a prime no. 
        }
    }
    return 1;
}

int main(){
int n;
cin>>n;
if(isprime(n)){
    cout<<"it is a prime number"<<endl;
}else{
    cout<<"it is not a prime number"<<endl;
}
}