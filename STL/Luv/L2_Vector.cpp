#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> &v)
{
    cout << " size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++) // yaha v.size() ka time complexity - o(1) hoga
    {
        cout << v[i] << " ";
    }
    v.push_back(2); // agar hm &v refernce nhi karenge to yai 2 copy ho jyiga or 2 print nhi hoga
    cout << endl;
}

int main()
{
    // agar input legeai to yaise karna hoga
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     printVector(v);
    //     v.push_back(x);
    // }
    // printVector(v);

    // yaha vector ko direct size ko declear kiya

    vector<int> v(5, 3); // yaha 5 size declear hua or value 3 hoga jyiga 5 size me
    v.push_back(1);      // or yaha push_back karne se last me ak size or add ho jyiga kuki vector dyanmic size ka hota hai
    printVector(v);

    // pop_back - last value ko elemnet se nikal deta hai
    v.pop_back();
    printVector(v);

    // vector me copy pass kiye
    vector<int> &v2 = v; // o(n)
    v2.push_back(9);
    printVector(v);
    printVector(v);
    printVector(v2);
    return 0;
}

// vector array hota hai jisme dyanamic size hota hai
// vector yisa array hai jiska size change ho sakta hai  or array ka fix size hota hai so i cant change
// vetctor<data type> - yaise vector declear kiya jata hai
// push_back se hmlog vector ke last mai element ko add kar dete hai