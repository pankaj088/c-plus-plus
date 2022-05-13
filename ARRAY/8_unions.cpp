#include <iostream>

using namespace std;

union money // union ak better memory management provide karta hai
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;
    m1.rice = 50;
    cout << m1.rice << endl;
    // m1.car = 'c';
    // cout << m1.car << endl; // yaha  ak bar mai 2 mai sai kisi ak hi use kar saktai hai kuki mera momory share kiy ja raha hai
    return 0;
}