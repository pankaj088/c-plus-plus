#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a; // ptr ak pointer hai jo a ko point kar raha hai or ptr ko direfernce kar raha hai
    *ptr = 25;
    cout << "the value of a is " << *(ptr) << endl;

    // new keyword or opreator
    int *p = new int(40); // yaha hm int or float kuch bhi use kar sakte hai, () yai parentesis hai
    cout << "the value at address p is " << *(p) << endl;

    int *arr = new int[3]; // contigues block memory hai usko allocate kar raha hai jiska size 3 hai                // [] yai square baracet hai
    arr[0] = 10;
    // arr[1] = 20;
    *(arr + 1) = 20; // yaha hm arr[1] ko *(arr+1) asai bhi likh saktai hai
    arr[2] = 30;

    // Delete opreator or keyword
    // delete arr;     // contigue block memory ko delet kar diyai ,free kar diya  abb yai garbage value dega
    // delete[] arr; // yai dyanamicali allocated memory ko free kar deta hai

    cout << "the value of arr[0] is " << arr[0] << endl;
    cout << "the value of arr[1] is " << arr[1] << endl;
    cout << "the value of arr[2] is " << arr[2] << endl;

    return 0;
}