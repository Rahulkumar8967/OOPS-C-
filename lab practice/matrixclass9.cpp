#include<iostream>
using namespace std;
class matrix{
    int **p;
    int d1, d2;
    public:
    matrix(int x, int y);
    void set_element(int i, int j, int value){
   p[i][j] = value;
    }
    int &put_element(int i, int j){
        return p[i][j];
    }
};
matrix ::matrix(int x, int y){
 d1 = x;
 d2 = y;
 p = new int *[d1];
 for(int i = 0;i<d1;i++){
    p[i] = new int[d2];
 }
}


int main() {

int m , n;
cout<<"enter the size of matrix --> "<<endl;
cin >> m >> n;
matrix A(m,n);
int i , j , value;
for( int i = 0;i<m;i++){
    for( j = 0; j<n;j++){
        cin>> value;
        A.set_element(i,j,value);

    }
  //  A.put_element(2,4);
}


    return 0;
}