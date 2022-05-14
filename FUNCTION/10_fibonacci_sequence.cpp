#include <iostream>

using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1); // fibonacci series  ka formula = fib(n-2) + fib(n-1);
}
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;
    cout << "the term in fibonacci sequance at postion " << a << " is " << fib(a) << endl;
    return 0;
}