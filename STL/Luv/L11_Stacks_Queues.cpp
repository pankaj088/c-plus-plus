#include <bits/stdc++.h>

using namespace std;

int main()
{
    // FOR STACK - LIFO
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
    // FOR Queue- FIFO

    queue<string> q;
    q.push(" panakj");
    q.push(" raushan");
    q.push(" nitish");
    q.push(" abhishek");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}