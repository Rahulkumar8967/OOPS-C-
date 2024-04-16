#include <iostream>
using namespace std;
int main() {
    int amount ; 
    cin >> amount;
    int note100 = 0, note50 = 0, note20 = 0, note1 = 0; // counter variables
    
    while (amount > 0) {          // loop until all notes have been counted
        switch (amount >= 100 ? 100 : amount >= 50 ? 50 : amount >= 20 ? 20 : 1) {
            case 100:
                note100++; //increment counter for 100 ruppees note;
                amount -= 100; 
                break;
            case 50:
                note50++; 
                amount -= 50; 
                break;
            case 20:
                note20++; 
                amount -= 20; 
                break;
            case 1:
                note1++; // 
                amount -= 1; 
                break;
            default:
                break;
        }
    }
    
    cout << "100-rupee notes: " << note100 <<endl;
    cout << "50-rupee notes: " << note50 <<endl;
    cout << "20-rupee notes: " << note20 <<endl;
    cout << "1-rupee notes: " << note1 <<endl;
    
    return 0;
}
