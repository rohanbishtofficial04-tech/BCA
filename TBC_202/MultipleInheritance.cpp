#include <iostream>
using namespace std;
class base1
{
    protected:
    int base1int;

public:
    void setBase1int(int a)
    {
        base1int = a;
    }
};

class base2
{
    protected:
    int base2int;

public:
    void setBase2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public:
    void display()
    {
        cout << "Base1 Integer Value: " << base1int << endl;
        cout << "Base2 Integer Value: " << base2int << endl;
        cout<<"Sum: "<<base1int+base2int;
    }
};

int main()
{
    derived d;
    d.setBase1int(10);
    d.setBase2int(20);
    d.display();
    return 0;
}