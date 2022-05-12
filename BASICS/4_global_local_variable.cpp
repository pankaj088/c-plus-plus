#include <iostream>

using namespace std;
int glo = 6; // yah glo global variable hai
void sum()
{ // ak fnction kai ander banya hua variable local variable hota hai
    int a;
    cout << glo;
}

int main()
{
    int glo = 5; // int glo local variable bana
    glo = 80;
    int a = 10, b = 15;
    sum(); // jab hm kisi function ko call kartai hai to exucation thori der kai liyai ruk jata hai or oo us function mai chala jata hai(void sum mai)
    cout << glo;

    return 0;
}