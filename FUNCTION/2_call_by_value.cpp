#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int c = a + b;

    return c;
}
// yai swap nhi kariga kuki x and y ka value copy ho jyiga a and b mai
void swap(int a, int b)
{                 // temp   a   b          // (inta , int b) formal arguments hai esmai actual aruguments kai value copy ho jyigai
    int temp = a; //   5    5   10          : yaha temp ak variable banya jiska value a kai equal hai
    a = b;        //   5    10   10
    b = temp;     //   5    10    5
}

int main()
{
    int x = 5, y = 10; // X and Y ka value copy ho gya: a and  b mai
                       // cout << "the sum of x and y is" << sum(x, y);
    cout << "value of a is" << x << endl
         << "value of b is" << y << endl;
    swap(x, y); // yaha a and b actual aruguments hai jo ki copy ho jyigai formal arguments mai
    cout << "value of a is" << x << endl
         << "value of b is" << y << endl;

    return 0;
}