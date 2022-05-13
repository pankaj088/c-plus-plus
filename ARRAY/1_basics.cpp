#include <iostream>

using namespace std;

int main()
{
    int marks[] = {25, 50, 75, 100};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    /* -----------dusrai type sai array banya-----------*/
    int mathMarks[4];
    mathMarks[0] = 30;
    mathMarks[1] = 60;
    mathMarks[2] = 90;
    mathMarks[3] = 120;

    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // agar array ka value ko change karna hai to
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    marks[2] = 70;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    return 0;
}