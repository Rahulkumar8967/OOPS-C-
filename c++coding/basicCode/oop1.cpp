#include <iostream>
using namespace std;
class test
{
    int code;
    static int count;

public:
    void setcode(void)
    {
        code = count++;
    }
    void showcode(void)
    {
        cout << "OBJECT NUMBER" << endl;
    }
    static void showcount(void)
    {
        cout << "count is " << count << endl;
    }

};
int test ::count = 100;
 int main()
{
test t1,t2;
t1.setcode();
t1.showcode();
test:: showcount();

t2.setcode();
t2.showcode();
test:: showcount();

    return 0;
}