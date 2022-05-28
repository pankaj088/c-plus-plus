#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // yai constructors decleration hai

    void printnumber()
    {
        cout << "my nuber is " << a << " +" << b << "i" << endl;
    }
};

complex ::complex(void)
{ // yaha constructors ko define kiya // yai default constructers kue aruguments n letai huai  bydefault run ho jata ahi or yai kue parameters nhi leta hai
    a = 0;
    b = 0;
}

int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}
//  constructors ak special member function hai  jiska nam same hota hai class kai nam  kai tor pai
//  eska use class kai object ko initilize karnai kai liyai  kartai hai
//  yai atomacticaly invoked(call karna) run ho jyiga jab hm  object ko banyaigai
// constructors ka kue return type nhi hai but agar dusra kue member function bana rahai hai tab uska return specify karna hota hai
// enkai adress ko hm refer nhi kar sakte