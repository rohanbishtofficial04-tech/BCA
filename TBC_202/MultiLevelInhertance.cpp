/*
                    Private Inheritance     Public Inheritance     Protected Inheritance

Private Member      Not Inherited           Not Inherited          Not Inherited

Public Member       Private                 Public                 Protected

Protected Member    Private                 Protected              Protected
*/

#include <iostream>
#include<iomanip>
using namespace std;


class student
{
protected:
    int roll_no;

public:
    void setRoll_No(int);
    void getRoll_No(void);
};

void student::setRoll_No(int n)
{
    roll_no = n;
}

void student::getRoll_No(void)
{
    cout << "Roll No. : " << roll_no << endl;
}



class marks : public student
{
protected:
    float physics, maths, chemistry;

public:
    void setMarks(float, float, float);
    void getMarks(void);
};

void marks::setMarks(float p, float m, float c)
{
    physics = p;
    maths = m;
    chemistry = c;
}

void marks ::getMarks()
{
    cout << "Marks in Physics: " << physics << endl;
    cout << "Marks in Maths: " << maths << endl;
    cout << "Marks in Chemistry: " << chemistry << endl;
}



class result : public marks
{
public:
    void display(void);
};

void result::display()
{
    getRoll_No();
    getMarks();
    cout << "Percentage: " <<setprecision(4)<< (physics + maths + chemistry) / 3;
}

int main()
{
    result r1;
    r1.setRoll_No(43);
    r1.setMarks(90,95,99);
    r1.display();
    return 0;
}