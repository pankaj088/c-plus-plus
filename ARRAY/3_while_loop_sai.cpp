#include <iostream>

using namespace std;

int main()
{
    int marks[4];
    marks[0] = 15;
    marks[1] = 30;
    marks[2] = 45;
    marks[3] = 60;

    int i = 0;
    while (i < 4)
    {
        cout << marks[i] << endl;
        i++;
    }

    return 0;
}