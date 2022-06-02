#include <iostream>

using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello pankaj" << endl;
    }
};

class D : public B
{
    int a;

public: // YAI MAI APNA FUNCTION BANYA HAI  islye compile man leta hai ki uper balai function ko OVERRIDE karna hai
    void say()
    {
        cout << "Hello my name is pankaj" << endl;
    }
};

int main()
{
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}