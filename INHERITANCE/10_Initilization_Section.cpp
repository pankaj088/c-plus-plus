#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section - use constructor body complex ho jata hai tab mara jo constructor hai uska value uhi kai uhi use kar lai
                                                              (value denai ka traika hai jo jaha hai uhi value de do)
{
    assignment + other code;
}
Example:
class Test{
    int a;
    int b;
    public:
    Test(int i, int j) : a(i), b(j){constructor -body}
};
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    //  Test(int i, int j) : a(i), b(i+j)
    //  Test(int i, int j) : a(i), b(2 *j)
    //  Test(int i, int j) : a(i), b(a +j)
    //  Test(int i, int j) : b(j), a(i+b) // yaha b garbeg value  dega kuki hm a ko pahlai declear kiya or jo pahlai declaer hai uhi pahlai intilize hoga
    Test(int i, int j) //: a(i)   // yaha hm b ko constructor kai body kai ander dal detai fir kue problem nhi hai
    {
        a = i;
        b = j;
        cout << "constructor excuted" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{

    Test t(6, 8);

    return 0;
}