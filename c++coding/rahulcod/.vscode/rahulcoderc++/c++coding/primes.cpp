#include<iostream>
#include<math.h>
using namespace std;
  bool is prime(int num){
    for(i=2;i<=sqrt(num);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}





int main(){
    int a,b;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if((i) is prime){
            cout<<i<<endl;

        }
    }
    return 0;

}