#include<iostream>
using namespace std;
class valueB;
class valueA{
    int x;
    public:
    void Setvalue(int i){
      x = i;
    }
    friend void max(valueA, valueB);  
};
class valueB{
    int a;
    public:
    void Setvalue(int i){
      a = i;
    }
    friend void max(valueA, valueB);  
};
 void max(valueA m ,valueB n)
{
if(m.x >= n.a){
    cout <<"maximum number is "<< m.x<<endl;
}else{
     cout <<"maximum number is "<< n.a<<endl;
}

}


int main(){
    valueB Ans1;
    Ans1.Setvalue(100);

     valueA Ans2;
    Ans2.Setvalue(1000);
    max(Ans2,Ans1);


    return 0;
}