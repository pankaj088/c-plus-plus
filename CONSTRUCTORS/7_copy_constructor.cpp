#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    { // yai default constructor banya
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    Number(Number &object) // yai copy constructor banya
    {
        cout << "copy of constructor called " << endl;
        a = object.a;
    }

    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(25), z2; // yaha x,y,z ,z2 object banya
    x.display();
    y.display();
    z.display();

    Number z1(z); // copy constructor invoked hoga
    z1.display();

    z2 = z; // yai copy constructor invoked nhi hoga kuki object(z2) pahali sai banya hua hai or bas  hm yaha assign kar rahai hai
    z2.display();

    Number z3 = z; // yai copy constructor invoked hoga kuki hm essi line mai object(Number z3) banya hai
    z3.display();

    return 0;
}