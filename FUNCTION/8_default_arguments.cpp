#include <iostream>

using namespace std;

float moneyresived(int currentMoney, float intrest = 1.04)
{
    return currentMoney * intrest;
}

// constant arguments
// int stringlenth(const char *p){

//}

int main()
{
    int money = 100000;
    cout << "if you have " << money << " Rupes in your account, you wiil resive " << moneyresived(money) << " rupes after 1 year" << endl;
    cout << "For vip: if you have " << money << " Rupes in your account, you will resive " << moneyresived(money, 1.1) << "rupes after 1 year";

    return 0;
}