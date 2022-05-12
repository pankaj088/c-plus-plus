#include <iostream>

using namespace std;
int global = 5;

int main()
{
    int global = 9; // yaha local variable updated hoga
    global = 50;    // pahali 9 tha ab 50 ho chuka hai islye 50 print kariga

    cout << global;

    return 0;
}
// local and global variable same nam sai banya ja sakta hai but persdence lockal variable ko miliaga:
