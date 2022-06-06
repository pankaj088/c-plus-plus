#include <iostream>
#include <fstream>

/*
 The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase(read kariga file sai or print kariga)
3. ofstream --> derived from fstreambase(wrire kar dega file mai)
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// 1.  Using the constructor
//  2. Using the member function open() of the class

using namespace std;

int main()
{
    // Opening files using constructor and writing it:
    ofstream out("2Sample.txt"); // yai write opreation hai

    string st = "pankaj parbhakar";
    out << st;
    out.close(); // yai ak close function hai yai file ko close karta deta hai

    return 0;
}