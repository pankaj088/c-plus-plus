#include <iostream>

using namespace std;

struct employee
{
    int eid;      // yaha eid (employee id hai)
    char favchar; // yaha favchar(favourite  charcter hai)
    float salary;
};

int main()
{
    struct employee pankaj;
    struct employee abhishek;
    struct employee nitish;
    pankaj.eid = 1;
    pankaj.favchar = 'p';
    pankaj.salary = 20000;
    cout << "the value is " << pankaj.eid << endl;
    cout << "the value is" << pankaj.favchar << endl;
    cout << "the value is" << pankaj.salary << endl;

    abhishek.eid = 2;
    abhishek.favchar = 'm';
    abhishek.salary = 50000;

    cout << abhishek.eid << endl;
    cout << abhishek.favchar << endl;
    cout << abhishek.salary << endl;

    nitish.eid = 3;
    nitish.favchar = 'a';
    nitish.salary = 100000;

    cout << nitish.eid << endl;
    cout << nitish.favchar << endl;
    cout << nitish.salary << endl;

    return 0;
}