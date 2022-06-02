#include <iostream>
#include <cmath> // yai ScientificCalculator kai liyai use kiyai hai

using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "enter the value of a" << endl;
        cin >> a;
        cout << "enter the value of b" << endl;
        cin >> b;
    }

    void performOperationsSimple()
    {
        cout << "the value of a+b is " << a + b << endl;
        cout << "the value of a-b is " << a - b << endl;
        cout << "the value of a*b is " << a * b << endl;
        cout << "the value of a/b is " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "enter the value of a" << endl;
        cin >> a;
        cout << "enter the value of a" << endl;
        cin >> b;
    }

    void performOperationsScinentific()
    {
        cout << "the value of sin(a):" << sin(a) << endl;
        cout << "the value of cos(a):" << cos(a) << endl;
        cout << "the value of tan(a):" << tan(a) << endl;
        cout << "the value of exp(a):" << exp(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    // SimpleCalculator calc;
    // ScientificCalculator calc;
    // calc.getDataScientific();
    // calc.performOperationsScinentific();

    HybridCalculator calc;
    // yai scientific calculator  ka print kariga
    calc.getDataScientific();
    calc.performOperationsScinentific();

    // yai simple calculator ka print kariga
    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}