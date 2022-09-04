#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // sort(a, a + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // for vector
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

// sort(a, a+n)  :- Ak inbuild function hai yai 2 parameters inpt me leta hai
// 1. jis point se sorting strat karna hai us point ka pointer(Adress) lata hai
// 2. jaha tak sorting karna hai uska next pointer(adress)

// introsort - 3 sorting algorith ka mixture hai
// 1. quick sort
// 2. heap sort
// 3. insertation sort