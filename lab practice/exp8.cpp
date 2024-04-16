#include <iostream>
using namespace std;

class DynamicObject
{
    int *data;

public:
    DynamicObject(int value)
    {
        data = new int(value);
        cout << "object constructed called with " << *data << endl;
    }
    ~DynamicObject()
    {
        delete data;
        cout << "object destroyed " << endl;
    }
    void display()
    {
        cout << " value is " << *data << endl;
    }
};
int main()
{
    DynamicObject *obj1 = new DynamicObject(34);
    obj1->display();

    delete obj1;
    return 0;
}
