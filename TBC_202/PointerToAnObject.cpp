#include <iostream>
using namespace std;
class demo
{
private:
    int a, b;

public:
    void setData(int p, int q)
    {
        a = p;
        b = q;
    }
    void getData()
    {
        cout << "Value Of a: " << a << endl;
        cout << "Value Of b: " << b << endl<<endl;
    }
};
int main()
{
    // demo d;
    // demo *p=&d;
    //(*p).setData(10, 20);
    //(*p).getData();
    cout<<"Object Declaration And Initialisation Using Pointers: "<<endl<<endl;
    demo *p = new demo;
    p->setData(10,20);
    p->getData();

    //Array of objects

    cout<<endl<<"Array Of Objects: "<<endl<<endl;
    demo *p1=new demo[3];
    p1->setData(1,2);
    (p1+1)->setData(3,4);
    (p1+2)->setData(5,6);
    p1->getData();
    (p1+1)->getData();
    (p1+2)->getData();
    return 0;
}