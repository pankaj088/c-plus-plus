#include <iostream>

using namespace std;

// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotproduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] = 5;
    // v1.arr[1] = 4;
    // v1.arr[2] = 3;

    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 2;
    // v2.arr[2] = 3;

    // int a = v1.dotproduct(v2);
    // cout << a << endl;

    // yaha template kai help sai bana rahai hai (template ak coustem deta type hai)

    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.4;
    v1.arr[2] = 3.4;

    vector<float> v2(3);
    v2.arr[0] = 3.6;
    v2.arr[1] = 1.6;
    v2.arr[2] = 3.5;

    float a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}