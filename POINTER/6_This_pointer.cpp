#include <iostream>

using namespace std;

class A
{
    int a;

public:
    // A &setData(int a)
    void setData(int a)
    {
        this->a = a; // this ak unqick pointer hai jo ki uss pointer pai object karta hai jisnai member function ko call kiya
        // return *this;  ess object ko return karaigai to yai likhaigai
    }
    void getData()
    {
        cout << "the value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(5);
    a.getData();

    return 0;
}
