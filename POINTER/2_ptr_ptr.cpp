#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int *b = &a;
    int **c = &b;
    cout << "address of a is:" << &a << endl;
    cout << "address of b is:" << &b << endl;
    cout << "address of b is:" << c << endl;
    cout << "value at address c is:" << *c << endl;
    cout << "value at address value at (value_at(c)) is:" << **c << endl; // c kai adress ka value 6 ayiga

    return 0;
}