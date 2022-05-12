#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 3;
    cout << "opreators in c++:" << endl; // 'endl' next line mai print karnai kai liyai use hota hai and'\n' yai bhi:
    cout << "fllowing are the types of opreators in c++:" << endl;
    // Arithmetic opreators
    cout << "the value of a+b is :" << a + b << endl;
    cout << "the value of a-b is:" << a - b << endl;
    cout << "the value of a*b is:" << a * b << endl;
    cout << "the value of a/b is:" << a / b << endl;
    cout << "the value of a%b is:" << a % b << endl;
    cout << "the value of a++ is:" << a++ << endl; // pahlai print hoga uskai bad increment hoga islye yaha 5 hi print huaa
    cout << "the value of a-- is:" << a-- << endl; // yaha increment hokar 6 print hua
    cout << "the value of ++a is:" << ++a << endl; // yaha pahlai increment hoga tab print hoga islye 6 print hua
    cout << "the value of --a is:" << --a << endl; // yaha pahlai decrement hoga tab print hoga islye 5 print hua
    cout << endl;

    // Assigment opreators - yai variables kai value ko assign karta hai:
    // int a= 6 , b= 8;
    // char p='p';

    // comparison  opreators - yai variables kai value ko compare karta hai:

    cout << "Follwing are the comprision operators in c++" << endl;

    cout << "the value of a==b is:" << (a == b) << endl;
    cout << "the value of a!=b is :" << (a != b) << endl;
    cout << "the value of a>=b is :" << (a >= b) << endl;
    cout << "the value of a<=b is :" << (a <= b) << endl;
    cout << "the value of a>b is :" << (a > b) << endl;
    cout << "the value of a<b is :" << (a < b) << endl;

    // Logical opreators

    cout << "Following are the logical opreators in c++" << endl;
    cout << "the value of logical AND operator ((a==b) && (a<b)) is :" << ((a == b) && (a < b)) << endl;
    cout << " the value of logical OR operator((a=b) ||(a<b)) is :" << ((a = b) || (a < b)) << endl;
    cout << " the value of logical NOT opreator (!(a==b) is :" << (!(a == b)) << endl;

    return 0;
}