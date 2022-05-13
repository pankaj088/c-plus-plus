#include <iostream>

using namespace std;

int main()
{
    // pointer- ak deta type hai jo ki dusrai deta types kai address ko store karta hai

    int a = 8;
    int *b = &a; // yaha b ak pointer hai jo ki a kai address ko atore karta hai
    cout << b << endl;
    cout << &a << endl;

    // * (Dereference opreator) yani iss address pai value kya hai
    cout << "the value at address b is" << *b << endl;

    return 0;
}