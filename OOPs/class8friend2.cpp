#include <iostream>
using namespace std;

// forward declaration
class Complex;
class compComplex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumcompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
   // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
 // friend int Calculator ::sumcompComplex(Complex o1, Complex o2);

    // Aliter: Declaring the entire calculator class as friend;
    friend class Calculator;
public:
    void SetNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << " i " << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumcompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;
    o1.SetNumber(1, 4);
    o2.SetNumber(5, 7);
    Calculator Calc;
    int res = Calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
      res = Calc.sumcompComplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << res << endl;
  cout <<res<<endl;

    return 0;
}