#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display() // virtual function ko pointer sai call hotai hai to oo apnai apnai derived version  kai call hotai hai
    {
        cout << "1.Displaying Base class variable var_base " << var_base << endl;
    }
};

class Derivedclass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2.Displaying Base class variable var_base " << var_base << endl;
        cout << "2.Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;       // yaha Base class ka object banya obj_base:
    Derivedclass obj_derived; // yaha Derived class ka object banya obj_derived:

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}