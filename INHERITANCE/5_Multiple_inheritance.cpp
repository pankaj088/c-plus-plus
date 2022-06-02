#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class Derived: visibility-mode base1, visibility-mode base2
// {
//    class body of class "Derivedc"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{ // yaha hm 2 base class ko milkar ak derived clasws banyai
public:
    void show()
    {
        cout << "the value of base1int is " << base1int << endl;
        cout << "the value of base2int is " << base2int << endl;
        cout << "the sum of base1int and base2int is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived pankaj;
    pankaj.set_base1int(30);
    pankaj.set_base2int(5);
    pankaj.show();
    return 0;
}