#include <iostream>
using namespace std;

class BankDeposit {
    int principalAmount;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);

    void show();
};

 BankDeposit::BankDeposit(int p, int y, float r) {
    principalAmount = p;
    years = y;
    interestRate = r / 100.0; // Convert percentage to decimal
    returnValue = principalAmount;

    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + r);
    }
}

void BankDeposit::show() {
    cout << endl << "Principal amount was " << principalAmount << endl
         << "Return value after " << years << " years is " << returnValue << endl;
}

int main() {
    BankDeposit bd1;
    int p, y;
    float r;

    cout << "Enter the value of p, y, and r: ";
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    return 0;
}
