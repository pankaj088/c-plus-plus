#include <iostream>

using namespace std;
/*
 Student -->test
 Student -->sports
 test   -->results
 sports -->results
 */

class Student
{ // yaha student virtual base class hai
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number(void)
    {
        cout << "my rool number is " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "my result is here:" << endl
             << "maths:" << maths << endl
             << "physics:" << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "My PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "My total score is:" << total << endl;
    }
};

int main()
{
    Result pankaj;
    pankaj.set_number(54);
    pankaj.set_marks(70.1, 65.2);
    pankaj.set_score(6);
    pankaj.display();
    return 0;
}