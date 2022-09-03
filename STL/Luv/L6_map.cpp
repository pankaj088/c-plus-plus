#include <bits/stdc++.h>

using namespace std;

void printMap(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m; // map< key, value >
    m[1] = " pankaj";   // o(log(n))
    m[4] = " nitish";
    m[6] = " abhishek";
    m[3] = " pan";
    m.insert({2, "raushan"});
    printMap(m);

    // use iterator
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << endl;
    }
    cout << endl;
    cout << " auto use kiya" << endl;

    // use auto karke dircet hm kar sakte hai
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}

// map ak data structure hai jo key value pairs ko store karta hai
// map - key se value tak ki maping karta hai
// map ka every element ak pair hota hai jo store karta hai key and value
// map discontigunes hota hai
// maps ak pair ko store karta hai
// map value ko sorted array mai store karta hai
// map ki sari keys uniqe hoti hai
// duplicate keys insert nhi kar sakte hai