#include<iostream>
using namespace std;
 class valueB;    // forward declaration
class valueA {
    int x;
    public:
    void Setvalue(int i){
    x = i;
    }
    friend void max( valueA ,valueB);
};
class valueB {
    int a;
    public:
    void Setvalue(int i){
        a = i;
    }
    friend void max( valueA ,valueB);
};
void max(valueA m ,valueB n){
    if( m.x >= n.a){
        cout << " maximum value is "<< m.x <<endl;
    }else{
        cout << " maximum value is "  << n.a <<endl;
    }
}


int main(){

 valueA Ans1;
Ans1.Setvalue(100);
 valueB Ans2;
 Ans2.Setvalue(50);
 max( Ans1 ,Ans2);
    return 0;
}