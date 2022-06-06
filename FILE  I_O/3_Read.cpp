#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // opening files using constructor and reading it
    ifstream in("3Sample.txt");

    string st1;
    // in>>st1;  yai bas ak word(This) print kariga kuki yai space kai bad print nhi kariaga islye (getline use karigai)
    getline(in, st1);
    cout << st1;
    in.close(); // yai close kar dega file ko
    return 0;
}