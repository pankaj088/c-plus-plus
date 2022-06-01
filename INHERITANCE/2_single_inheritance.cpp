#include <iostream>

using namespace std;

class Base
{
    int data1; // yai by default private hai or yai inheritable nhi hai
public:
    int data2;
    void setData(); // yai default data ko set kariga
    int getData1();
    int getData2(); // yai dono merai liyai data1 and data2 ko get kariagi
};

void Base ::setData(void)
{ // yaha hm methods ko difine kaiyai hai
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Drived : public Base
{ // yaha class publically drived  kiyai hai
    int data3;

public:
    void process(); //  yai 2 member function banya       // yaha hm methods ko declear kiya hai
    void display();
};

void Drived ::process()
{ // or yaha pai hm methods ko difine kiyai hai
    data3 = data2 * getData1();
}

void Drived ::display()
{
    cout << "value of data 1 is " << getData1() << endl; // yaha data1 ko display karnai aki liayi << getData1() function use kiya kuki data1 private hai or private to inherit nhi hoga isliye:
    cout << " value of data 2 is " << data2 << endl;     //  yaha hm data2 ko bina function lagyai use kar sakte hai kuki yai public hai
    cout << " value of data 3 is " << data3 << endl;
}

int main()
{
    Drived der; // yaha hm Drived class ka object der banya
    der.setData();
    der.process();
    der.display();

    return 0;
}