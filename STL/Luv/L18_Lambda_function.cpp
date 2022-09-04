#include <bits/stdc++.h>

using namespace std;

bool is_positive(int x)
{
    return x > 0;
}

int main()
{
    // lambda function :- []() {};

    // all_of() :-  // yai true false return kariga agar element postive to true(1) barna negative hoga to false(0)
    vector<int> v = {2, -3, -5};
    cout << all_of(v.begin(), v.end(), [](int x) { return x > 0; }); 
    cout<<endl;
    // metode 2
    cout<<all_of(v.begin(), v.end(), is_positive);
    cout<<endl;

 //any_of() :- agar sare ke sare false return kariga to hi iska outcome false return hoga barna agar ak bhi true kariga to outcome true return hoga

    cout << any_of(v.begin(), v.end(), [](int x) { return x > 0; });  
    cout<<endl;

// none_of() :- agar kue bhi match nhi kariga to hi yai true return kariga :{-2, -3, -5}; to yai true return kariga
 cout << none_of(v.begin(), v.end(), [](int x) { return x > 0; }); 
 cout<<endl;

 // check odd even:- even hoga to true(1) return kariga barna odd hoga to false(0)
   vector<int> v = {2, 4, 6};
    cout << all_of(v.begin(), v.end(), [](int x) { return x %2==0; }); 
    cout<<endl;
    return 0;
}