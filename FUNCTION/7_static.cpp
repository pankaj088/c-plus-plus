#include <iostream>

using namespace std;
int product(int a, int b)
{                     // static mai yai jo function hai eskai ander yai value sirf ak bar intilize hoga
    static int c = 0; // c ka vlue ak bar zero hogi uskai bad yai value ko written kar kai rakhiga
    c = c + 1;        // yaha c ka value 1 hoga or agli bar yai(static int c=0;) bar run nhi hogi
    return a * b + c;
}

int main()
{
    int a, b;
    cout << "enter the value of a and b is " << endl;
    cin >> a >> b;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;

    return 0;
}