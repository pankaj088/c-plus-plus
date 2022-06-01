#include <iostream>

using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getdata1();
    int getdata2();
};

void Base ::setData()
{
    data1 = 15;
    data2 = 30;
}

int Base ::getdata1()
{
    return data1;
}

int Base ::getdata2()
{
    return data2;
}

class Drived : private Base
{
    int data3;

public:
    void process();
    void display();
};

void Drived ::process()
{
    setData();                  // process ak public method hai islye hm drived kai private methods ko call kar sakta hu
    data3 = data2 * getdata1(); // yaha getData1 Drived class mai aa kar visibility private ho jyaiga
}

void Drived ::display()
{
    cout << "value of data 1 is " << getdata1() << endl;
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
}

int main()
{
    Drived der;
    // der.setData();  Mai setData ko bahar call nhi kar sakta kuki yai private hai
    der.process();
    der.display();
    return 0;
}