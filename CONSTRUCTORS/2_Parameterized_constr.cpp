#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);

    void printnumber()
    {
        cout << "my nuber is " << a << " +" << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{   // yai parameterized constrouctors(ak asias construcrors jo merai sai value laikar set kar deta hai or bydefult run ho jata hai)
    // yai 2 parameters x and y lai raha hai or a and b kai value mai set kar raha hai

    a = x;
    b = y;
}

int main()
{
    // Implicit call
    complex a(4, 6);

    // Explicit call
    complex b = complex(3, 5);
    a.printnumber();
    b.printnumber();

    return 0;
}