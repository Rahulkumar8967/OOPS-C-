#include<iostream>
using namespace std;
int main(){
    int n,rem,a,res=0;
    cout<<"enter three digit number"<<endl;
    n=a;
    while(n!=0){
        rem=n%10;
        res=res+(rem*rem*rem);
        n=n/10;
    }if(res==a){
        cout<<"armstrong number"<<endl;
    }else{
        cout<<"not armstrong number"<<endl;
    }
    return 0;
}