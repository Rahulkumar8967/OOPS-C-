#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int npr(int n,int r){
    return factorial(n)/factorial(n-r);
}

int main(){
int n,r;
cin >> n >>r;
cout<<"npr is" <<npr(n,r)<<endl;
}