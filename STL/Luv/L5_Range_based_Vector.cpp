#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {3, 6, 9, 2, 1};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int value : v)
    {
        cout << value << " "; // range base se mera value direct ess variable mai aa jati hai or value ki copy bani hai
                              // actual value nhi aa raha hai
    }
    cout << endl;
    for (int &value : v) // yaha & refernce use kiye  essai hmko actual value ayiga
    {
        value++; // yai value++ actual value pai kam kar raha hai
        // cout<<value<<" ";
    }
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    // for pair
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    vector<pair<int, int>> v_p = {{4, 6}, {9, 3}};
    for (pair<int, int> &value : v_p)
    {
        cout << value.first << "  " << value.second << endl;
    }

    return 0;
}