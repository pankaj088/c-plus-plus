#include <iostream>

using namespace std;

int main()
{
    float d = 35.5f;       // f or F dono sikh skte kue diffrence nhi hoga ak hi size batiyga
    long double e = 35.5l; // l or L  dono ak hi size dega

    cout << "the size of 35.5 is " << sizeof(35.5) << endl; // eska size 8 bata raha hai kuki yaha yai number(35.5)define nhi hai ki float hai or long double islye  float ho to (F) &long double ho to (L) laga degai
    cout << "the size of 35.5f is " << sizeof(35.5f) << endl;
    cout << "the size of 35.5F is " << sizeof(35.5F) << endl;
    cout << "the size of 35.5l is " << sizeof(35.5l) << endl;
    cout << "the size of 35.5L is " << sizeof(35.5L) << endl;

    cout << "the value of d is:" << d << endl
         << "the value of e is: " << e;

    return 0;
}