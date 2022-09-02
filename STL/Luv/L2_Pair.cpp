#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, string> p; // pair- Do value ko store karta hai or 2 chij kai bich relation maintain karne kai liye
                         // p = make_pair(1, "pank"); // make_pair se  hm  pair me value dal rahe hai
    p = {2, " panakj"};  // or hm direct yaise bhi kar sakte hai

    // yaha pe p1 ka value p me copy hua islye kue change nhi huaa
    // pair<int, string> p1 = p; // p1 p ka copy hai
    // p1.first = 4;

    // yaha pe refernce pass huaa p me islye value change ho jyiga
    pair<int, string> &p1 = p;
    p1.first = 4;

    cout << p.first << " " << p.second << endl;

    //  use array
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    pair<int, int> p_array[3];
    p_array[0] = {4, 6};
    p_array[1] = {7, 9};
    p_array[2] = {1, 3};

    // for swap
    swap(p_array[0], p_array[2]);

    // value print karne kai liye use kiye
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    // // agar hmko input lene ho to simply yai bhi kar sakte hai
    // pair<int, string> p;
    // cin >> p.first;
    // cout << p.first;

    return 0;
}