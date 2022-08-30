#include <bits/stdc++.h>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<< v.at(i)<<" ";   yai size ko do bar print kariga
    }
    cout << endl;
}

int main()
{

    int arr[50];

    vector<int> vec;
    cout << vec.size() << endl; // -> print 0
    vec.push_back(0);           // {0}
    vec.push_back(2);
    // cout<<ar.push_back()<<endl;          // { 0, 2}

    cout << vec.size() << endl; // -> print 2

    vec.pop_back();
    cout << vec.size() << endl; // print 1

    vec.clear(); // erase all elements at once{}

    // vector(size, element);
    vector<int> vec1(4, 0);  //{0,0,0,0}
    vector<int> vec2(4, 10); //{10,10,10,10}

    // copy the entire vec2 into vec3
    vector<int> vec3(vec2.begin(), vec2.end());
    vector<int> vec3(vec2);

    // for 2d vector
    vector<vector<int>> vect;
    vector<int> pan1;
    pan1.push_back(1);
    pan1.push_back(3);

    vector<int> pan2;
    pan2.push_back(10);
    pan2.push_back(25);

    vector<int> pan3;
    pan3.push_back(5);
    pan3.push_back(8);
    pan3.push_back(11);

    vect.push_back(pan1);
    vect.push_back(pan2);
    vect.push_back(pan3);

    // it is vector itself
    for (auto vctr : vect)
    {
        for (auto it : vctr)
        {
            cout << it << " ";
        }
        cout << " " << endl;
    }
    // method 2
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << " " << endl;
    }

    // define 10 * 20
    vector<vector<int>> vect(10, vector<int>(20, 0));

    // for 3d Vector
    // 10 * 20 * 30 // int arr[10] [20] [30]
    vector<vector<vector<int>>> vect(10, vector<vector<int>>(20, 0), vector<int>(30, 0));
    return 0;
}