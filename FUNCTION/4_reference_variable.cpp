#include <iostream>

using namespace std;

// call by refernce using c++ refernce variabla
void swapreferencevar(int &a, int &b) // yaha a and b ak reference variable jo ki point kar raha hai x and y ko islye x and y ka value change ho jayiga
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 8;
    cout << "value of x is " << x << endl
         << "value of y is " << y << endl;
    swapreferencevar(x, y);
    cout << "value of x is " << x << endl
         << "value of y is " << y << endl;
    return 0;
}