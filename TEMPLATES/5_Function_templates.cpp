#include <iostream>

using namespace std;

// float funAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funAverage2(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// swap function template
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// By using  function template
template <class T1, class T2>
float funAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funAverage(5, 2);
    printf("the average of these numbers is %.3f\n", a);
    int x = 6, y = 8;
    swapp(x, y);
    cout << x << endl
         << y;

    return 0;
}