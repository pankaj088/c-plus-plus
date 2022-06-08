#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // Function Objects(Functor) : function rapped in a class so that it available like an object
    int arr[] = {12, 4, 60, 8, 100};

    sort(arr, arr + 4); // yai incrising order mai sort kar raha hai

    // sort(arr, arr + 4, greater<int>()); // yaha function object pass kara rahai hai or yai desending order mai sort kariga

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}