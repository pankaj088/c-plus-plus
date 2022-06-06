#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream Read;
    string st, st1; // file mai sai st and st1 variable de raha hai
    Read.open("5Sample.txt");
    // Read>>st>>st1;
    // cout<<st<<st1;

    while (Read.eof() == 0) // eof(end of file) ak function hai
    {
        getline(Read, st);
        cout << st << endl;
    }

    Read.close();

    return 0;
}