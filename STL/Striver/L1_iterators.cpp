#include <bits/stdc++.h>

using namespace std;

// array<int, 5> arr;// yai sara value zero lega

int main()
{

    // iterators  : begin(), rbegin(), end(), rend()

    // begin()- yai first elemnet ko point kariga,
    // rbegin()- or yai last element ko point kariga ,
    // end()-  yai last bale element kai bad bale ko point kariga
    // rend()- or yai first element kai  pahle bale elemnt ko point kariga

    array<int, 5> arrr = {1, 3, 7, 2, 9};
    for (auto it = arrr.begin(); it < arrr.end(); it++) // auto- Automatically,  it- iterators:
    {
        cout << *it << " ";
    }
    cout << " " << endl;

    // Reverse kiye
    for (auto it = arrr.rbegin(); it != arrr.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << " " << endl;

    for (auto it = arrr.end() - 1; it >= arrr.begin(); it--)
    {
        cout << *it << " ";
    }
    cout << " " << endl;

    // for each loop
    for (auto it : arrr)
    {
        cout << it << " ";
    }
    cout << " " << endl;

    string s = " pankaj";
    for (auto c : s)
    {
        cout << " print charcter- "
             << " " << c << endl;
    }
    cout << " " << endl;

    // size
    cout << arrr.size();
    cout << " " << endl;

    // Front
    cout << arrr.front(); // arr.at(0);
    cout << " " << endl;

    // back
    cout << arrr.back(); // arr.at(arr.size() -1);

    return 0;
}

/* Vector use karke kiye

#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v(5, 1);

    for (auto it = v.begin(); it < v.end(); it++)
        cout << *it << "   ";

    return 0;
}

*/