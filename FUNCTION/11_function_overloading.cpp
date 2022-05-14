#include <iostream>

using namespace std;

int sum(float a, int b) // yaha float a karnai sai kue change nhi hoga
{
    cout << "using function with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "using function with 3 arguments" << endl;
    return a + b + c;
}

// calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// calculate  the volume of cube
int volume(int a)
{
    return (a * a * a);
}

// calculate the rectangular box
int volume(int l, int b, int h);

int main()
{

    cout << "the sum of 5 and 4 is " << sum(5, 4) << endl;
    cout << "the sum of 3, 6 and 9 is " << sum(3, 6, 9) << endl;

    cout << "the volume of rectugular 2, 3 and 4 is" << volume(2, 3, 4) << endl;
    cout << "the volume of cube side 3 is" << volume(3) << endl;
    cout << "the volume of cylinder of radius 6 and hight 9 is " << volume(6, 9) << endl;

    return 0;
}