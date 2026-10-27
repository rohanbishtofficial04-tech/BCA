#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void base::setData()
{
    data1 = 10;
    data2 = 20;
}

int base::getData1()
{
    return data1;
}

int base::getData2()
{
    return data2;
}

class derived : public base
{
public:
    int data3;
    void process();
    void display();
};

void derived::process()
{
    data3 = getData1() * data2;
}

void derived::display()
{
    cout << "Value Of Data1: " << getData1() << endl;
    cout << "Value Of Data1: " << data2 << endl;
    cout << "Value Of Data1: " << data3 << endl;
}

int main()
{
    derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}