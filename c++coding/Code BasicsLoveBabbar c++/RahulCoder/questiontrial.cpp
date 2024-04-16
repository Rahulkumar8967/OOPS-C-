//3*n+7 ki A.P;
//A &B TOTAL NO OF SETBIT OF 1
//EX-> A=2 ->10
//B=3 ->11    //ANS=3(NO OF 1 )
//fibonnacci series


// #include<iostream>
// using namespace std;
// void update(int a){
//     a= a / 2;
//     cout<< a <<endl;
// }


// int main(){
// int a=10;
// update(a);
// cout<< a <<endl;
// }
// #include<iostream>
//  using namespace std;
//  void update(int a){
//     a-=5;
//     return;
//  }
//  int main(){
//     int a=15;
//     update(a);
//     cout<< a <<endl;
//  }

#include<iostream>
using namespace std;
int update(int a){
    int ans = a * a;
    return ans;
}
int main(){
int a= 14;
 a=update(a);
 cout<< a << endl;
}