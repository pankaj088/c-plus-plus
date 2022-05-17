#include <iostream>

using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // yaha decleration karkai class kai bad function ko likh sakte hai hai
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void employee ::setdata(int a1, int b1, int c1) // (:: scope resulation opreator) laga kar function ko likhai hai
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee pankaj;
    // pankaj.a = 125;   yai dega kuki a,b and c private hai
    pankaj.d = 20;
    pankaj.e = 25;
    pankaj.setdata(2, 4, 6);
    pankaj.getdata();
    return 0;
}