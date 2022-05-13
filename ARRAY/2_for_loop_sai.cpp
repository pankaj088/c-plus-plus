#include <iostream>

using namespace std;

int main()
{
    int marks[4];
    marks[0] = 20;
    marks[1] = 40;
    marks[2] = 60;
    marks[3] = 80;

    for (int i = 0; i < 4; i++)
    {
        cout << "the value of marks<<i<< is:" << marks[i] << endl;
    }
}