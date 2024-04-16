#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // Set and unset formatting flags using setf and unsetf
    cout << "Default flags: " << hex << 42 << endl;  // Hexadecimal output

    cout.setf(ios::showbase);  // Set the showbase flag
    cout << "With showbase flag: " << 42 << endl;  // Show base prefix (0x for hexadecimal)

    cout.unsetf(ios::showbase);  // Unset the showbase flag
    cout << "Without showbase flag: " << 42 << endl;

    // Set precision using precision member function
    double pi = 3.14159265358979323846;
    cout << "Default precision: " << pi << endl;

    cout.precision(4);  // Set precision to 4
    cout << "Precision set to 4: " << pi << endl;

    // Reset precision to default
    cout.unsetf(ios::fixed);  // Unset fixed flag
    cout.precision(6);  // Set precision to default (6)
    cout << "Precision reset to default: " << pi << endl;

    return 0;
}


