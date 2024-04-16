#include<iostream>
using namespace std;
int main(){
    int a[3][2],b[3][2],c[3][2],i,j,sum=0;
    cout <<"enter value of 1 matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cin >> a[i][j];
        }
    }
     cout <<"enter value of 2 matrix"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cin >> b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
        }

      for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            sum += c[i][j];
            
        }
      } 
       cout << "value of sum of an array: "<< sum <<endl; 
}