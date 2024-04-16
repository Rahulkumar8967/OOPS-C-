#include<iostream>
using namespace std;
void update(int arr[],int n){
cout<< endl << "INSIDE THE MAIN FUNCTION CODE"<<endl;
arr[0]={120};

for(int i=0;i<3;i++){
    cout <<arr[i] <<" "<<endl;
}
cout <<"hello RAHUL"<<endl;
}



int main(){
int arr[3]={3,6,8};
update(arr,3);

for(int i=0;i<3;i++){
    cout <<arr[i] <<" ";
}
}