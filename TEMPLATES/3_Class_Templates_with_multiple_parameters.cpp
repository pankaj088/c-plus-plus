#include <iostream>

using namespace std;

// By using class:
// class pankaj{
//     public:
//     int maths;
//     char name;
//     pankaj(int a, char b){
//         maths = a;
//         name = b;
//     }

//     void display(){
//         cout<<this->maths<<endl<<this->name;
//     }
// };

// By using templates:

template <class T1, class T2>

class pankaj
{
public:
    T1 maths;
    T2 name;
    pankaj(int a, char b)
    {
        maths = a;
        name = b;
    }

    void display()
    {
        cout << this->maths << endl
             << this->name;
    }
};

int main()
{
    // pankaj<int, char> object(50, 'p');
    // pankaj<float, char> object(50.5, 'a');
    pankaj<char, float> object('n', 65.5);

    object.display();

    return 0;
}