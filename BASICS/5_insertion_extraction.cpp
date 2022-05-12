#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    cout << "enter the value of num1:\n"; // '<<' yai insertion opreator(jo bhi output hai usko de do) hai:
    cin >> num1;                          // '>>' yai extraction opreator(jo bhi input diya ja raha hai usko lai lo ) hai:

    cout << "enter the value of num2:\n";
    cin >> num2;

    cout << "the sum is" << num1 + num2;

    return 0;
}