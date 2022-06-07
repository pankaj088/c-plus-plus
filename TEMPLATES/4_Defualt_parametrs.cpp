#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class pankaj
{
public:
    T1 a;
    T2 b;
    T3 c;
    pankaj(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main()
{
    pankaj<> p(5, 8.5, 'p');
    p.display();
    cout << endl;
    pankaj<char, float, char> R('p', 8.5, 'n');
    R.display();

    return 0;
}