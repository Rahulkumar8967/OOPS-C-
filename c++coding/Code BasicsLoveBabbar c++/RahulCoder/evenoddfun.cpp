#include<iostream>
using namespace std;
bool isEven(int a){                                                                   
                  
      if(a&1){                //odd 
        return false; 
    }else{
        return true;
    }
}


int main(){
    int num;
    cin >> num;
if(isEven(num)){
    cout<<"number is even"<<endl;
}
else{
    cout<<"number is odd"<<endl;
}
}