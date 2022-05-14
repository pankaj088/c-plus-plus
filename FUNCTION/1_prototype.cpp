#include <iostream>

using namespace std;

// FUNCTION PROTOTYPE
// Type function-name (arguments)
// int  - sum         -(int a, int b)
// int sum(int a, int b); // ---- > yai Accetable hai
// int sum(int a, b); // -----> yai Accetable nhi hai
int sum(int, int); //----> yai accetable hai kuki bas hmko yai batna hai ki yai kon sa type hai
// void g(void);      // ---- > yai acceptable hai
void g(); // ---- > yai bhi acceptable hai

int main()
{
    int num1, num2;
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "the sum is:" << sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b)
{
    // a and b are formal parametres(a and b will be taking values from actual parameters num1 and num2)
    int c = a + b;
    return c;
}

void g()
{
    cout << "\n Hello , Good morning";
}