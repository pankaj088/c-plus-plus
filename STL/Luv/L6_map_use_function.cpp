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
    map<int, string> m;
    m[1] = " raj";
    m[4] = " deepak";
    m[6] = " chandan";
    m[3] = " papau";

    auto it = m.find(3); // o(log(n))
    // auto it = m.find(7); // o(log(n))  yai m.end ko point kariga or No value print kariga

    /* if (it != m.end())
     {
         m.erase(4);
         m.clear();
     }
     printMap(m);

     // map.erase function value ko delte karta hai
     m.erase(4); // log(n)
     printMap(m);
     // iterator ki value de rahe hai or yai jis bhi pair ko value de raha hai oo map sai delete ho jyiga
      m.erase(it);
      printMap(m);
      */

    if (it == m.end())
    {
        cout << " No value";
    }
    else
    {
        cout << (it->first) << " " << (it->second) << endl;
    }

    // map.find ak function hota hai jo kisi value ko find karta hai or iterator return karta hai

    return 0;
}

// lexiographical order yaini increasing order