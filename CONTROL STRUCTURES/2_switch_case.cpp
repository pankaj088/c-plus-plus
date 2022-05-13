#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    switch (age)
    {

    case 18:
        cout << "you are 18" << endl;
        break;

    case 22:
        cout << "you are 22" << endl;
        break;

    case 5:
        cout << "you are 5" << endl;
        break;

    default:
        cout << "no special cases" << endl;
        break;
    }

    cout << "done with switch case";
    return 0;
}
