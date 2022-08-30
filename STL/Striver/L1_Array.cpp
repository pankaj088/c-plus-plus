#include <bits/stdc++.h>

using namespace std;

array<int, 5> arr; // ->{ 0,0,0}

/* Global variable mai array ka size

// maxium size of 10^7  -> int , double, char
int arr[10000000];

// maxium size of 10^8 -> bool
int arr[100000000];
*/

int main()
{
    /*
   // maxium size of 10^6  -> int , double, char
   int arr[1000000];

   // maxium size of 10^7 -> bool
   int arr[10000000];
   */

    // Array -> int arr[100];

    // array<int, 3> arr;             // ->{ ?, ?. ?} yaha kuch print nhi hoga kuki define nhi kiye hai : ={ }
    // array<int, 5> arr = {1, 3, 5}; //->{ 1, 3, 5, 0, 0}
    // array<int, 5> arr = {0};       //->{ 0, 0, 0, 0, 0}
    // array<int, 5> arr = {1};       //->{ 1, 0, 0, 0, 0}

    // int arr[10000] = {0};

    array<int, 5> arr;

    arr.fill(10); // ->{ 10, 10, 10, 10, 10}
    int index;
    index = 4;
    arr.at(index);
    for (int i = 0; i < 5; i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << " " << endl;

    // memset use kiye
    int app[5];
    memset(app, 5, sizeof app);
    for (int i : app)
        cout << i << "  ";

    return 0;
}