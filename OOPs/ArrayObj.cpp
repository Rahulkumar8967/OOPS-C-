#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];

    // 1. general store item;
    // 2. veggies store item;
    // 3. hardware store item;
    int p, i;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}