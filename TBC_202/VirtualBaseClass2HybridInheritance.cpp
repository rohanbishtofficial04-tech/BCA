#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void setRoll(int n)
    {
        roll_no = n;
    }
    void getRoll()
    {
        cout << "Roll No. : " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float phy, che, math;

public:
    void setMarks(float p, float c, float m)
    {
        phy = p;
        che = c;
        math = m;
    }
    void getMarks()
    {
        cout << "Marks in Physics: " << phy << endl;
        cout << "Marks in Chemistry: " << che << endl;
        cout << "Marks in Maths: " << math << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setScore(float n)
    {
        score = n;
    }
    void getScore()
    {
        cout << "Score In Sports: " << score << endl;
    }
};

class result : public test , public sports{
    float percentage;
    public:
    void getResult();
};

void result::getResult(){
    getRoll();
    getMarks();
    getScore();
    percentage=(phy+che+math+score)/4;
    cout<<"Percentage: "<<percentage;
}
int main()
{
    result r;
    r.setRoll(43);
    r.setMarks(100,100,100);
    r.setScore(100);
    r.getResult();
    return 0;
}