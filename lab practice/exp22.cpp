#include<iostream>
using namespace std;

// Forward declaration of Date2 class
class Date2;

class Date1 {
private:
    int day, month, year;

public:
    Date1(int d, int m, int y) : day(d), month(m), year(y) {
        
    }

    void displayDate1() const {
        cout << "Date1: " << day << '/' << month << '/' << year << endl;
    }

    // Conversion function from Date1 to Date2
    operator Date2() const;
};

class Date2 {
private:
    int day, month, year;

public:
    Date2(int d, int m, int y) : day(d), month(m), year(y) {}

    void displayDate2() const {
        cout << "Date2: " << day << ' ' << month << ' ' << year << endl;
    }

    // Conversion function from Date2 to Date1
    operator Date1() const {
        return Date1(day, month, year);
    }
};

// Definition of the Date1 to Date2 conversion function
Date1::operator Date2() const {
    return Date2(day, month, year);
}

int main() {
    // Creating an object of Date1
    Date1 d1(17, 11, 94);

    // Implicit conversion from Date1 to Date2 using the conversion function
    Date2 d2 = d1;

    // Displaying dates
    d1.displayDate1();
    d2.displayDate2();

    // Implicit conversion from Date2 to Date1 using the conversion function
  //  Date1 newD1 = d2;

    // Displaying the converted date
 //   newD1.displayDate1();

    return 0;
}


