#include<iostream>
using namespace std;
 class c2;
class c1{
    int Val1;
 //   friend void exchange (c1 &  ,c2 & );
    public:
    void indata(int a){
        Val1 = a;
    }
    void display(void){
    cout<< Val1 <<endl;
    }
      friend void exchange (c1 &  ,c2 & );
};
 
class c2{
    int Val2;
     //   friend void exchange (c1 &  ,c2 & );
    public:
    void indata(int a){
        Val2 = a;
    }
    void display(void){
    cout<< Val2 <<endl;
    }
      friend void exchange (c1 &  ,c2 & );
};

void exchange(c1 & x , c2 & y){
    int tmp = x.Val1;
    x.Val1   = y.Val2;
    y.Val2   = tmp;
}



int main(){

c1 oc1;
c2 oc2;

oc1.indata(34);
oc2.indata(56);
exchange(oc1 ,oc2);

cout <<"The value  of c1 after exchanging becomes : ";
oc1.display();
cout <<"The value of c2  after exchanging becomes : " ;
oc2.display();
    return 0;
}