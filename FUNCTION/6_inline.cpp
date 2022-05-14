#include <iostream>

using namespace std;

inline int product(int a, int b)
{ // inline function ak hi line mai expand kar jata hai compiler replace kar deta hai function call ko ess function kai code sai compile time hi replace ho jyiga
    return a * b;
}

int main()
{
    int a, b;
    cout << "enter the value" << endl;
    cin >> a >> b;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    return 0;
}