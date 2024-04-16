#include<iostream>
using namespace std;

class Celsius {
    private:
        double temperatureC;
    public:
        Celsius(double tempC) : temperatureC(tempC) {}
        // Getter for temperature in Celsius
        double getTemperatureC() const {
            return temperatureC;
        }
};

class Fahrenheit {
    private:
        double temperatureF;
    public:
        // Conversion routine from Celsius to Fahrenheit
        Fahrenheit(const Celsius& CelsiusObj) {
            temperatureF = CelsiusObj.getTemperatureC() * 9.0 / 5.0 + 32.0;
        }
        // Getter for temperature in Fahrenheit
        double getTemperatureF() const {
            return temperatureF;
        }
};

int main() {
    Celsius CelsiusObj(25.0);
    Fahrenheit FahrenheitObj = CelsiusObj;

    cout << "Temperature in Celsius: " << CelsiusObj.getTemperatureC() << "C" << endl;
    cout << "Temperature in Fahrenheit: " << FahrenheitObj.getTemperatureF() << "F" << endl;

    return 0;
}
