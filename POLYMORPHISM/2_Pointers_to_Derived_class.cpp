#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // yaha base class ka pointer derived class kai objcet sai point ho raha hai or yai ho sakta hai c++ mai

    base_class_pointer->var_base = 30;
    base_class_pointer->display();
    //  base_class_pointer->var_derived = 300;  yai error dega kuki hm base class kai pointer ko derived class kai propity ko access kara rahai hai

    base_class_pointer->var_base = 300;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_base = 400;
    derived_class_pointer->var_derived = 60;
    derived_class_pointer->display();

    return 0;
}