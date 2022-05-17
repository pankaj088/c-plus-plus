#include <iostream>

using namespace std;
// forward decleartion
class Y; // yaha hm yai bata rahai hai compiler ko agai y class hai

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "suming data of X and Y objects gives me " << o1.data + o2.num;
}
int main()
{
    X a1;
    a1.setValue(4);

    Y b1;
    b1.setValue(6);

    add(a1, b1);

    return 0;
}