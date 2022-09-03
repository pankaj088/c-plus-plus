#include <bits/stdc++.h>

using namespace std;
void printset(unordered_set<string> &s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    unordered_set<string> s;
    s.insert(" abc");
    s.insert(" xyz");
    s.insert(" bcd");
    printset(s);
    cout << endl;

    auto it = s.find(" abc"); // o(1)
    if (it != s.end())
    {
        s.erase(it);
    }
    printset(s);
    // s.erase(" abc"); direct hm yaise bhi kar sakte hai

    return 0;
}