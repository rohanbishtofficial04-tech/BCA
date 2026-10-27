#include <iostream>
using namespace std;
class constructor
{
private:
    int a, b;

public:
    constructor(void)
    {
        a = 0;
        b = 0;
    }
    constructor(int p, int q)
    {
        a = p;
        b = q;
    }
    void print()
    {
        cout << " " << a << " " << b << endl;
    }
};
int main()
{
    constructor c1(2, 9), c2(3, 6), c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}