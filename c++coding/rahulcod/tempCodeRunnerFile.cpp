#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the you want to check number:";
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 4);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "not armstrong" << endl;
    }
    return 0;
}