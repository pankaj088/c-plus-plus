#include <iostream>

using namespace std;

void func(int a)
{
    cout << " this is first function " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "this is template function " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "this is template function " << a << endl;
}

int main()
{
    func(6); // exact match takes the highest priority:

    func1(8); // exact match takes the highest priority:

    return 0;
}