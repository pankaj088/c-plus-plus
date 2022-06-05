#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex C1;
    // Complex *ptr = &C1;   // yaha hm ak pointer sai ak object kai public member ko acces kar rahai hai
    Complex *ptr = new Complex; // new opreator laga kar ak nya object bantai hai chai oo int, float or char ho jo bhi ho
    (*ptr).setData(1, 55);
    (*ptr).getData();

    // Arrow opreator mai directly ak pointer ko derefernce karkai uska function run kar sakte hai
    ptr->setData(2, 50); // ptr jisko bhi point kar raha hai uska SetData run ho jata hai   , yaha nya complex banya usko point kar raha hai
    ptr->getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(3, 75);
    ptr1->getData();

    return 0;
}
// class or object coustm data type banai mai help karta hai