#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "the rool number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float phyiscs;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    phyiscs = m2;
}

void Exam ::get_marks()
{
    cout << "the marks obtained in maths are " << maths << endl;
    cout << "the marks obtained in physics are " << phyiscs << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "your percentage is " << (maths + phyiscs) / 2 << "%" << endl;
    }
};

int main()
{
    Result pankaj;
    pankaj.set_roll_number(54);
    pankaj.set_marks(60.0, 70.0);
    pankaj.display_results();

    return 0;
}

/*
Notes:
if we are inheriting B from A and C from B:[ A----->B----C ]
1. A is the base class for B  and B is the base class for C
2. A-->B-->C is called iheritance path
*/