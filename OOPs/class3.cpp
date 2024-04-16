#include<iostream>
using namespace std;
class Shop {
   private:
    int itemId[100] ;
    int itemPrice[100];
    int Counter;
    public:
    void initCounter (void){ Counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

 void Shop :: setPrice(void){
    cout << "Enter Id of your item no. " << Counter + 1 <<endl;
    cin >> itemId[Counter];
    cout <<"Enter price of your item" <<endl;
    cin >>itemPrice[Counter];
    Counter++;
 }

 void Shop ::displayPrice(void){
    for(int i = 0; i< Counter;i++){
        cout <<"the price of item with Id "<< itemId[i] << " is " << itemPrice[i]<<endl;
    }

 }
int main(){
Shop dukaan;
dukaan.initCounter();
dukaan.setPrice();
dukaan.setPrice();
dukaan.setPrice();
dukaan.displayPrice();
   return 0; 
}