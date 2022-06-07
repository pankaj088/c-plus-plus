#include <iostream>

using namespace std;

template <class T>
class pankaj
{
public:
    T data;
    pankaj(T a)
    {
        data = a;
    }
    void display();
    // void display(){
    //     cout<<data;
    // }
};

template <class T>
void pankaj<T>::display()
{
    cout << data;
}

int main()
{
    // pankaj<float> P(8.5);
    // pankaj<char> P('p');
    pankaj<int> P(8);
    cout << P.data << endl;
    P.display();
    return 0;
}