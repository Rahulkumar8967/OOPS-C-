#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   long fact=1.0;
    int i;
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<"factorial of"<<n<<" ="<<fact<<endl;
    return 0;

}