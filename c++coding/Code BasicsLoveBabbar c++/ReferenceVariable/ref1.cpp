#include<iostream>
using namespace std;
void update2(int &n){
    n++;
}

void update(int n){
    n++;
}
int main(){

int i = 5;
// create a ref variable
int &j = i;
cout<<"The value of i is (1)  --> " << i <<endl;
i++;
cout <<"The value of i is (2)  --> "<< i <<endl;
j++;
cout <<"The value of i is (3) --> "<< i <<endl;

int n = 8;

cout << " before value of n is "<<n <<endl;
update2(n);
cout <<" After value of n is "<<n<<endl;


    return 0;
}