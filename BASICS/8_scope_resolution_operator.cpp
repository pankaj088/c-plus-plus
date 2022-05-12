#include <iostream>

using namespace std;

int c = 50; // yai global variable hai

int main()
{
    int a, b, c;
    cout << "enter the value of a:" << endl;
    cin >> a;

    cout << "enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "the sum is " << c << endl;
    cout << "the global c is" << ::c; // '::' yai scope resultion opreator hai

    return 0;
}