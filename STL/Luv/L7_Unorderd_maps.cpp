#include <bits/stdc++.h>

using namespace std;

void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    // 1. inbuilt implementation
    // 2. Time complexity
    // 3. valid keys datatype
    unordered_map<int, string> m; // unorderd  orderd mai print nhi hoga
    m[1] = " pankaj";             // o(1)
    m[4] = " nitish";
    m[6] = " abhishek";
    m[3] = " pan";
    m.insert({2, "raushan"});
    print(m);

    return 0;
}

// unorderd map mai every key ka hash value calculate kiya jata hai
// maps comprision kai bascis pai insertion karti hai
// unorderd maps ki complexity kam hota hai

// multi maps mai duplicate value  dal sakte hai