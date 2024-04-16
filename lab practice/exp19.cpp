#include <iostream>
using namespace std;

class Basic{
    public:
    void display(){
        cout<<"Display basic 1"<<endl;
    }
    virtual void show(){
        cout<<"Display basic 2"<<endl;
    }
};
class Advanced: public Basic{
    public:
    void display(){
        cout<<"Display Advance class 1"<<endl;
       
    }
void showValue(){
     cout<<"Display Advance class 2"<<endl;
}

};
    int main() {
Basic* basepointer;
Basic obj1;
Advanced obj2;
basepointer = &obj2;
obj2.display();
obj2.showValue();


    return 0;
}