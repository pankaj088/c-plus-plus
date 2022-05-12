#include <iostream>

using namespace std;

int main()
{
    int a = 45;
    float b = 20.55;
    cout << "the value of a is " << (float)a << endl;
    cout << "the value of a is " << float(a) << endl; // c++ mai istrah:float(a): sai bhi typecasting kar sakte hai or :(float)a: yaisai bhi

    cout << "the value of b is " << (int)b << endl;
    cout << "the value of b is " << int(b) << endl;
    int c = int(b);

    cout << "the expression is " << a + b << endl;
    cout << "the expression is " << a + int(b) << endl;
    cout << "the expression is " << a + (int)b << endl;

    // cout<<endl<<sizeof(double);// two types of typecasting(kisi bhi ak variable ko dusrai variable mai change karna) 1. Explicit --> by programmer
    //                          2. implicit ---> by default/compiler

    return 0;
}