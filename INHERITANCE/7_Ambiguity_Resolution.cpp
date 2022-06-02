#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kaisai ho" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    // Ambiguity resulation
public:
    void greet()
    {
        Base1 ::greet();
    }
    // void greet(){
    //     Base2 :: greet();
    // }
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();

    return 0;
}