#include <iostream>

using namespace std;

// call by refernce using c++ return by refernce
int &swapreferencevar(int &a, int &b) // int & yani ki hm yaha pai refernce variable ko return kar rahai hai to eska type ho jyiga ak refernce variable
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 4, y = 8;
    cout << "value of x is " << x << endl
         << "value of y is " << y << endl;
    swapreferencevar(x, y) = 365;
    cout << "value of x is " << x << endl
         << "value of y is " << y << endl;
    return 0;
}