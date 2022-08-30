#include <bits/stdc++.h>

using namespace std;

// namespace pankaj
// {
//     int val = 55;
//     int getval()
//     {
//         return val;
//     }
// }

struct node
{
    string str;
    int num;
    double doub;
    char x;

    node(string str1, int num1, double doub1, char x1)
    {
        str = str1;
        num = num1;
        doub = doub1;
        x = x1;
    }
};

int main()
{
    // double val = 10.0;
    // double pankaj = 50.0;
    // cout << val << endl;

    // pankaj::getval();

    // create a data type where you store{ string, int , double, char}

    // Wrong way of defining
    node pankaj; //("prabhakar", 72, 20.1, 'v');
    pankaj.str = "prbhakar";
    pankaj.num = 72;
    pankaj.doub = 20.1;

    // Right way of defining
    node *panka = new node("prabhakar", 72, 20.1, 'j');
    return 0;
}