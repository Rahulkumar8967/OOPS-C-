#include<iostream>
using namespace std;

 class class_2;
 class class_1{
    int val1;
    public:
    void inData(int a){
        val1 = a;
    }
    void display(void){
        cout<< val1 <<endl;
    }
   friend void exchange( class_1 & ,class_2 &);
 };
 class class_2{
    int val2;
    public:
    void inData(int b){
        val2 = b;
    }
    void display(void){
        cout<< val2 <<endl;
    }
    friend void exchange( class_1 & ,class_2 &);
 };
    void exchange( class_1 &x ,class_2 &y){
      int temp = x.val1;
      x.val1 = y.val2;
      y.val2 = temp;

    }

int main(){

  class_1 c1;
  class_2 c2;
  c1.inData(100);
  c2.inData(200);
  cout <<" value before exchange is "<<endl ;
  c1.display();
  c2.display();
  exchange(c1 ,c2);

cout <<" value after exchange is "<<endl ;
    c1.display();
  c2.display();
    return 0;
}