#include <iostream>

using namespace std;

// Forward declearation yai bata raha hai ki class complex hai
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex); // yaha es  sumRealcomplex function ko decleartion diyai
    int sumCompcomplex(complex, complex); // yaha es  sumRealcomplex function ko decleartion diyai
};

class complex
{
    int a, b;
    // individually declearing function as friends
    // friend int calculator ::sumRealcomplex(complex, complex);
    // friend int calculator ::sumCompcomplex(complex, complex);

    //  Alternative : purai calculater class ko friend ban liya to calculator purai function ko access karta hai jitnai bhi calculater nam sai function bana hai
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "my number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{ // yaha es  sumRealcomplex  function ko define kiya
    return (o1.a + o2.a);
}

int calculator ::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 8);
    calculator calc;
    int result = calc.sumRealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << result << endl;

    int resc = calc.sumCompcomplex(o1, o2);
    cout << "the sum of Comp part of o1 and o2 is " << resc << endl;
    return 0;
}