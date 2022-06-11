#include <bits/stdc++.h>

using namespace std;

int gggg()
{
    int arr[8] = {1, 3, 4, 3, 3, 2, 4, 4};
    int value = 4, left = 0, right = 7;
    while (left <= right)
    {
        int m = floor((left + right) / 2);
        if (arr[m] < value)
        {
            left = m + 1;
        }
        else if (arr[m] > value)
        {
            right = m - 1;
        }
        else
        {
            return m;
        }
    }

    return -1;
}

int main()
{
    cout << gggg();
    return 0;
}