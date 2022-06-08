#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // ways to create a vector
    int element, size;

    vector<int> vec1; // zero length integer vector
                      // display(vec1);

    vector<char> vec2(4); // 4-element character vector
    //  vec2.push_back('5');
    //  display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);

    vector<int> vec4(4, 10); // 6-element vector of 3s
    display(vec4);
    cout << "Yai size bata raha hai" << endl
         << vec4.size();

    return 0;
}
