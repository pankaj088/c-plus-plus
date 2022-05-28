#include <iostream>

using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 6, int c = 9) // yaha pai hm default value hai uskai sath hm constructors ko use kar sakte ahi
    // yaha hm a ko 6 and  b ko 9  default value de rahai hai
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void simple ::printData()
{
    cout << "the value of data1 , data2  and data3 is " << data1 << " and " << data2 << " and " << data3 << endl;
}

int main()
{
    simple s(1);
    s.printData();

    return 0;
}