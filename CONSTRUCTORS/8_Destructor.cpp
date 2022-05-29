#include <iostream>

using namespace std;

// destructor n hi kue argument leta hai or n hi kue value return karta hai

int count = 0; // yai global variable banya
class num
{
public:
    // constructor banya : jaisai hi object baniga usai hi run ho jyiga

    num()
    {
        count++; // count ak variable banya jisko hm ak badha diya
        cout << "this is the time when constructor is called for object number " << count << endl;
    }

    // Destructor benya : tilled num(~num)

    ~num()
    {
        cout << "this is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside our main function " << endl;
    cout << "creating first object n1" << endl;
    num n1; // yah ak block banya: block ka matlab block kai under jo elements hai unka scope us block kai ander hi rahiga
    {
        cout << "entring this block " << endl;
        cout << "creating two more object " << endl;
        num n2, n3;
        cout << "exsting this block " << endl;
    } // or ess block sai jaisai exist karigai destructor khud b khud call ho jyiga
    cout << "back to main" << endl;

    return 0;
}

// object jab baniga to constructor ko call kariga
// or jab compiler ko pata chal gya ki object ka jarurt nhi hai to oo destructor ko call kar deega