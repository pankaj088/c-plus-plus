#include <iostream>

using namespace std;

class employee
{
    int id;
    // int count; //  yaha int count bana denai sai har objcet ka apna ak count hoga to hm ak object swi dusra object pass nhi kara sakta  or
    //  es problem ko static variable solve karta hai or static variable class kai ander nhi bhar likhtai hai
    //  count  ak aisa variable hai jo ki ak bar memory laiga or uskai bad updated hota jyiga

    static int count; // static variable class sai jur jata hai ab yai class variable ban chuka hai or yai ab yai object ki propety nhi ab yai class ki propety ban chuka hai
                      // static variable 0 sai intilize ho jata hai jab bhi pahla object banata hai or eska sirf ak copy banta hai
public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }

    // static member function bas apnai static member or apnai hi function ko accses karta hai
    static void getcount()
    {
        // cout<<id;// yai error throws kariga
        cout << "the value of count is " << count << endl;
    }
};

int employee ::count; // static ka defult value 0 hoga

int main()
{
    employee pankaj, abhishek, nitish; // yai 3(pa,ab,ni) log ak hi count variable ko share kar rahi hai
    // pankaj.id= 1;
    // pankaj.cout= 1; // yai error dega kuki  id and count yai private members hai

    pankaj.setdata();
    pankaj.getdata();
    employee ::getcount();

    abhishek.setdata();
    abhishek.getdata();
    employee ::getcount();

    nitish.setdata();
    nitish.getdata();
    employee ::getcount();

    return 0;
}