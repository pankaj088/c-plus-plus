#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &v)
{
    cout << " size:- " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << " " << endl;
}

int main()
{
    int n;
    vector<int> v(n);
    v = {2, 3, 1, 6, 7, 6};
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    print(v);
    cout << "  Some inbuilt algorithms" << endl;

    int min = *min_element(v.begin(), v.end());
    cout << min << endl;
    cout << endl;

    int max = *max_element(v.begin(), v.end());
    cout << max << endl;
    cout << endl;

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    cout << endl;

    int ct = count(v.begin(), v.end(), 6);
    cout << ct << endl;
    cout << endl;

    auto it = find(v.begin(), v.end(), 10);
    if (it != v.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << " element not found";
    }
    cout << endl;

    // reverse()

    reverse(v.begin(), v.end());
    for (auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    string s = " pankaj";
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}

// inbuilt Algorithm:
// accumulate() :- hme sum provide karta hai array ka
// count() :- vector or array me count of element return kar dega
// find() :- Array me elemnet ko find karta hai or uska pointer or iterator return kar deta hai
// yai sare function vector and array me :- o(n)