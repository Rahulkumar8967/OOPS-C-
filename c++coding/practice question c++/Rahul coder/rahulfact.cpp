#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i =1;i<=n;i++){
    fact = fact*i;
    }
    return fact;
}
int ncr(int n, int r){
   int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
int n,r;
cin >> n >> r;
cout<<"value of ncr is " <<ncr(n,r)<<endl;

}