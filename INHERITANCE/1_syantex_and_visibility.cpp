#include <iostream>

using namespace std;

// Base class
class employee
{       // yaha employee base class hai
public: // yaha public visibality mode
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 45.0;
    }
    employee() {}
};

// Drived class syntax
/*
class {{drived -class- name }} : {{visibility -mode}} {{base -class -name}}
{
    class members /methods/ etc
}
*/

// creating a programer class drived from employee base class

class programmer : public employee // yaha programmer drived class hai  or public visibility mode , and employee base class
{
public:
    int languagecode;
    programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    employee pankaj(1), rahul(2);
    cout << pankaj.salary << endl;
    cout << rahul.salary << endl;
    programmer skillF(10);
    cout << skillF.languagecode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}

// Default visibility mide is private
// public visibility mode: Base class ka public member Drived class ka public member hi baniga
// private visibility mode: Base class ka public member Drived class ka private members hi baniga
// Private members kabhi inherited nhi hoga