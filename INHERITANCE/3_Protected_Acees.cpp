#include <iostream>

using namespace std;

class Base
{
protected: // yai inheriet hoga
    int a;

private:
    int b;
};

class Drived : protected Base
{
};

int main()
{
    Base b;
    Drived d;
    // cout<<d.a;  // yai kam nhi kariga kuki a protected hai Dono  Base and Drived class mai protected hai

    return 0;
}

/*For a protected member:


                           Public Derivation                      	Private Derivation                      Protected Derivation

1. Private members           	Not Inherited                         Not Inherited              	           Not Inherited

2. Protected members           Protected                    	        Private                         	     Protected

3. Public members           	Public                                  Private                                   Protected

*/
// 1. private members mai kue  derivation inherired nhi hoga:
// 2. protected members mai protected hi hoga bas private mai private hoga :
// 3. public members mai  jaisa derivation hoga  wiasai  hi hoga :