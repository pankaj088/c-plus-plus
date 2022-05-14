#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
    { // agar 1 or 0 hua to factorial 1 return kariga nhi to nichai: return *n factorial(n-1) esmai chala jyiga
        return 1;
    }

    return n * factorial(n - 1);
}

// step by step calcuation of factorial(4)
// factorial(4) = 4 * factorial(3)
// factorial(4) = 4 * 3 * 2 * factorial(2)
// factorial(4) = 4 * 3 *2 * 1;
// factorial(4)  =

int main()
{
    // factorial of a number
    // 5! = 5*4*3*2*1=120
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n!  = n * (n-1)!

    int a;
    cout << "enter a number" << endl;
    cin >> a;
    cout << "the factorial of " << a << " is " << factorial(a) << endl;

    return 0;
}