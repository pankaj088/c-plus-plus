#include <iostream>

using namespace std;

template <class T> // yaha class ka templet banya , or yaha t kai kuch bhi likh saktae hai
class vector
{
    T *arr; // int *arr;
    int size;

public:
    vector(T *arr) // vector(int *arr)
    {
    }
};

int main()
{
    vector<int> myvec1();
    vector<float> myvec2();

    return 0;
}
// Template - ak coustem deta type hai
// 1. DRY Rule
// 2. Generic Programing