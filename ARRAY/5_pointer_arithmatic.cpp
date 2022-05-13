#include <iostream>

using namespace std;

int main()
{
    int marks[4];
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    // pointer and arrays
    int *p = marks;
    //  cout<<*(p++)<<endl;
    //  cout<<*(++p)<<endl;

    cout << "the value of *P is" << *p << endl; // yaha pointer ko direfernce karkai uskai value ko print karya hai
    cout << "the value of *(p+1) is" << *(p + 1) << endl;
    cout << "the value of *(p+2) is" << *(p + 2) << endl;
    cout << "the value of *(p+3) is" << *(p + 3) << endl;

    return 0;
}