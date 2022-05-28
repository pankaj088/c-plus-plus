#include <iostream>

using namespace std;

class complex // ak class kai ander multiple constructors ho saktai hai
{
    int a, b;

public:
    complex() // yaha complex ak default constructors hai jo ki kue arugments nhi leta hai
    {
        a = 0;
        b = 0;
    }

    complex(int x, int y) // yaha complex ak paramertized constructors hai jo ki x and y 2 parameterized lai raha hai
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "my nuber is " << a << " + " << b << " i " << endl;
    }
};

int main()
{
    complex c1(4, 5);
    c1.printnumber();

    complex c2(6);
    c2.printnumber();

    complex c3;
    c3.printnumber();

    return 0;
}