#include<iostream>
using namespace std;
int main {
    int amount;
    cin >> amount;
    int note100 =0,int note 50 = 0,int note 20 =0,int note 10 = 0;
    while(amount>0){
        switch(amount>=100?100: amount >=50?50 :amount>=20?20: amount>=10?10:1){
            case 100: note100++;
            amount -= 100;
            break;
            case 50: note50++;
            amount -=50
            break;
            case 20: note20++;
            amount -=20;
            break;
            case 10: note10++;
            amount -=10;
            break;
            default:break;
        }
        cout<<"100 rupees notes"<<note100<<endl;
        cout<<"50 rupees notes"<<note50<<endl;
        cout<<"20 rupees notes"<<note20<<endl;
        cout<<"10 rupees notes"<<note10<<endl;
    }
   

}