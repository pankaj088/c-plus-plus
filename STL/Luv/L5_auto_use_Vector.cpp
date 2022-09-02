#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v;

    //  vector<int>::iterator it;  esko n likh kar hm auto likhige
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    vector<pair<int, int>> v_p = {{4, 6}, {9, 3}};

    for (auto &value : v_p) // for (pair<int, int> &value : v_p) eske jaagh hm yaise bhi sakte hai // for(auto &value : v_p)
    {
        cout << value.first << "  " << value.second << endl;
    }
    auto a = 1.0;
    cout << a << endl;

    return 0;
}