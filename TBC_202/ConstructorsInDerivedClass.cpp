#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    base1(int n)
    {
        cout << "Base1 Class Constructor Called!" << endl;
        base1int = n;
    }
    void printData1()
    {
        cout << "Value of base1int: " << base1int << endl;
    }
};
class base2
{
protected:
    int base2int;

public:
    base2(int n)
    {
        cout << "Base2 Class Constructor Called!" << endl;
        base2int = n;
    }

    void printData2()
    {
        cout << "Value of base1int: " << base2int << endl;
    }
};

class derived : public base1, public base2  //if you write base2 first and then base 1 while inheriting these classes, the order of execution will change
{
protected:
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        cout << "Derived Class Constructor Called!" << endl;
        derived1 = c;
        derived2 = d;
    }
    void printData3()
    {
        cout << "Value of derived1: " << derived1 << endl
             << "Value of derived2: " << derived2 << endl;
    }
};

int main()
{
    //Order Of Execution: Base1------>Base2------>Derived
    derived d(1, 2, 3, 4);
    d.printData1();
    d.printData2();
    d.printData3();
    return 0;
}