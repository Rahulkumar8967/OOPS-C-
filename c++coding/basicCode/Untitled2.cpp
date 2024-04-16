#include <iostream>
using namespace std;

class Date2;  // Forward declaration of Date2

class Date1 {
private:
    int day, month, year;

public:
    Date1(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void displayDate1() const {
        cout << "Date1: " << day << '/' << month << '/' << year << endl;
    }

    // Conversion operator from Date1 to Date2
    operator Date2() const;
};

class Date2 {
private:
    int day, month, year;

public:
    Date2(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void displayDate2() const {
        cout << "Date2: " << day << ' ' << month << ' ' << year << endl;
    }

    // Conversion operator from Date2 to Date1
    operator Date1() const {
        return Date1(day, month, year);
    }
};

// Definition of the conversion operator for Date1 to Date2
Date1::operator Date2() const {
    return Date2(day, month, year);
}

int main() {
    Date1 d1(17, 11, 94);
    Date2 d2 = d1;  // Conversion from Date1 to Date2 using the conversion operator
    d1.displayDate1();
    d2.displayDate2();

    return 0;
}


