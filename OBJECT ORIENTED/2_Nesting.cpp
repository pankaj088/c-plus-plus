#include <iostream>
#include <string>

using namespace std;

class binary
{
    //  private: class kai members private hotai hai
    string s;

public:
    void read(void);
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s; // s string hai or yaha hm binary number ko string mai read kar rahai hai
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    { // yaha hm string mai ak length function hot ahai uska use kiyai hai // s.length()
        if (s.at(i) != '0' && s.at(i) != '1')
        { // yaha s.at(i) - string.at (i) hai
            cout << "incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {

            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.check_binary();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}