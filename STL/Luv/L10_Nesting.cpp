#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<set<int>, int> m;
    set<int> s1 = {1, 2, 3};
    set<int> s2 = {2, 3};
    cout << (s1 < s2); // yaha s1 ka value s2 ke value sai compare kariga or s1 ka s2 sai small hoga to 1 print kariga Warna 0 print kariga

    // question
    map<pair<string, string>, vector<int>> m;
    // sem hm set me bhi kar sakte hai
    set<pair<int, int>> set;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for (int j = 0; j < ct; j++)
        {
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second;
        cout << list.size() << endl;
        for (auto &element : list)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}