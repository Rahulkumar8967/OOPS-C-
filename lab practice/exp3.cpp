#include <iostream>
using namespace std;
class Employee{
    char name[30];
    float Age;
    public:
    void setData(void);
    void putData(void);
    
};
void Employee :: setData(void){
    cout<<"Enter a Name";
    cin >> name;
    cout<<"Enter a Age";
    cin >> Age;
}
  void Employee :: putData(void){
    cout<< " name is " << name << endl;
    cout <<"Age is " << Age <<endl;
  }
  const int size = 4;
int main(){
   Employee manager[size];
   for( int i = 0; i<size;i++){
    cout <<"Details of manager is "<<i+1<<endl;
    manager[i].setData();
   }
   for( int i = 0; i<size;i++){
    cout <<"Details of manager is "<<i+1<<endl;
    manager[i].putData();
   }
    return 0;
}