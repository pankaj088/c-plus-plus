#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdataBysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "my complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printNumber();

    c2.setdata(3, 4);
    c2.printNumber();

    c3.setdataBysum(c1, c2); // 1 + 2i
    c3.printNumber();        //  3 + 4i
                             // ---------
                             //  4 + 6i
    return 0;
}