#include <iostream>

using namespace std;
// call by refernce using pointers

void swap(int *a, int *b)
{                   // temp  *a   *b
     int temp = *a; // 6      6   9
     *a = *b;       // 6      9   9
     *b = temp;     // 6      9   6
}

int main()
{
     int x = 6, y = 9;
     cout << "value of x is " << x << endl
          << "value of y is " << y << endl;

     swap(&x, &y); // yaha swap function(int *a , int *b) ko x and y ka address pass karya:(&x , &y): or oo adress kai value ko print kariaga
     cout << "value of x is " << x << endl
          << "value of y is " << y << endl;

     cout << "address of &x is " << &x << endl
          << "adress of y" << &y << endl;

     return 0;
}