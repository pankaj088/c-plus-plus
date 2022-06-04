#include <iostream>
using namespace std;
/*
Case1:
class B: public A{                                                                     // base class ka constructors pahali execute hoga
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{                                                // virtual base class ka constructors pahlai excute hoga
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1
{
    int data1;

public:
    Base1(int i) // yaha hm base class ka constructor banya
    {
        data1 = i;
        cout << "Base class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "the value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "base class constructor called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "the value of data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    { // yaha hm Base1 and Base2 Kai constructor ko call kiyai
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived1 is " << derived2 << endl;
    }
};

int main()
{
    Derived pankaj(2, 4, 6, 8);
    pankaj.printDataBase1();
    pankaj.printDataBase2();
    pankaj.printDataDerived();

    return 0;
}