#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 25; i++)
    {
        if (i == 5)
        {
            break; // break ess loop ko torkar bahar nikal jyiga
        }
        cout << i << endl;
    }
    return 0;
}