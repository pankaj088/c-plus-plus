#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {2, 4, 6, 8};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    /*  // vector<int>::iterator it = v.begin();
    // cout << " first value :- " << (*it) << endl;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << endl;
    // }
    */

    // for pair
    vector<pair<int, int>> v_p = {{1, 2}, {4, 5}, {6, 9}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        //  cout << (*it).first << " " << (*it).second << endl;
        cout << (it->first) << " " << (it->second) << endl;
    }

    return 0;
}

// iterator vector me contigunes hota hai
// or map & set me discontigunes hota hai
// it++ :- next itreator pai move kariga
// it+1 :- next location pai move kariga(yani first position pai move kariga)

