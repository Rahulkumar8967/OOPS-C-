#include<iostream>
using namespace std;
int sum(int n){
    int i,sum=0;
for( i=1;i<=n;i++){
sum=sum+i;
}
return sum;
}




int main(){
    int n;
    cout<<"enter a number";
    cin>>n;

    cout<<"The sum of first "<<n<<" natural number is:"<<sum(n);
return 0;

}