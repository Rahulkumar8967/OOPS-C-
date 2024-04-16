#include<iostream>
using namespace std;
int ApSeries(int n){
    int ans;
    for(int i =0;i<=n;i++){
       ans= 3*n+7;
    }
return  ans;
}
int main(){
int n;
cin >> n;
cout<<"value of sum of Ap Series is "<<ApSeries(n)<<endl;
}