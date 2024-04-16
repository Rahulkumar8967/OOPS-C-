#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "your complex number is " << a << "+" << b << "i" << endl;
    }

    friend complex setSum(complex o1, complex o2);
};

complex setSum(complex o1, complex o2)
{
    complex temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

 c3 = setSum(c1, c2);
   c3.printNumber();

    return 0;
}
