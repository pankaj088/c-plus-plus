#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 30; i++)
    {
        if (i == 2)
        {
            continue; // continue yaha  2 ko chorkar sarai number print kariga
        }
        cout << i << endl;
    }
    return 0;
}