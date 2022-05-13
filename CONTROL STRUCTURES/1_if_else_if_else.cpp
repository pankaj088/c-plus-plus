#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "my age" << endl;
    cin >> age;
    if ((age < 22) && (age > 0))
    {
        cout << "you can not come my party" << endl;
    }
    else if (age == 22)
    {
        cout << "you will get a special pass" << endl;
    }
    else if (age < 1)
    {
        cout << "you are not yet born" << endl;
    }
    else
    {
        cout << "you mostly welcome in my party" << endl;
    }

    return 0;
}