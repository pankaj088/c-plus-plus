#include <bits/stdc++.h>

using namespace std;

void printSet(set<string> &s)
{
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << (*it) << endl;
    // }

    // method-2
    for (string value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    set<string> s;
    s.insert(" abc");
    s.insert(" xyz");
    s.insert(" bcd");
    auto it = s.find(" abc"); // log(n)
    if (it != s.end())
    {
        s.erase(it);
    }
    // s.erase(" abc"); direct hm yaise bhi kar sakte hai
    printSet(s);
}

// set unique element ko store karta hai
// set element ko sorted array mai store karta hai
// internel implementation hmari sets ki (Red , Black , Trees ) ko use karke hoti hai
// red,black,tress - self blancing tress hota hai jo log(n) mai insertaion handel karta hai