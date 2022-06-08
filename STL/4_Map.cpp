#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["pankaj"] = 60;
    marksMap["nitish"] = 70;
    marksMap["abhishiek"] = 80;

    marksMap.insert({{"rahul", 50}, {"raj", 55}}); // yai insert kariga

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "the size is " << marksMap.size() << endl;
    cout << "the  max size is " << marksMap.max_size() << endl;
    cout << "the empty return value is " << marksMap.empty() << endl;

    return 0;
}