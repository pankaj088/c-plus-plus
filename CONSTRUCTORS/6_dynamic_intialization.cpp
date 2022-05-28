#include <iostream>

using namespace std;

class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite() {} // yai default constructor banya hai jo ki bina kisi input kai chalta hai
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int r);
    void show();
};

BankDeposite ::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposite ::BankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposite ::show()
{
    cout << "principle ammount was " << principal
         << " Return value after " << years
         << "  year is" << returnValue << endl;
}

int main()
{
    BankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    cout << " enter the value p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposite(p, y, R);
    bd2.show();

    return 0;
}