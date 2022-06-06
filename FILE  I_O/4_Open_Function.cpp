#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream write;
    write.open("4Sample.txt");
    write << "my name is pankaj parbhakar" << endl;
    write << "yai  sab file mai write  kar dega";
    write.close();

    return 0;
}