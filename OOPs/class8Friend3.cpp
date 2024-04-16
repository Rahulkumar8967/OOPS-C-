#include<iostream>
using namespace std; 
class Y;  // forward declaration
class X{
    int data;
    public:
    void setValue(int value){
        data = value;

    }
    friend void Add(X, Y);
};


class Y{
    int num;
    public:
    void setValue(int value){
        num = value;

    }
        friend void Add(X,Y);

};
void Add( X o1, Y o2){
   cout << " The AddValue of  X and Y is "<< o1.data + o2.num<<endl;

}

 

int main(){
 X  a1;
 a1.setValue(4);

Y a2;
a2.setValue(8);

Add(a1,a2);


    return 0;
}