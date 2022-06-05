#include <iostream>

using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};
//         1   2   3
//          ^
//          |
//          |
//          |
//          ptr
//          ptrTemp

int main()
{
    int size = 3;
    //    int *ptr = &size;
    //     int *ptr = new int[35];
    // 1. Dal
    // 2. Chabal
    // 3.  Chini
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int i;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item" << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "item number " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}