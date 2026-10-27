#include <iostream>
using namespace std;
int count;
class constructor
{
private:
    int a;

public:
    constructor()
    {
        a = 0;
        count++;
    };
    constructor(int n)
    {
        cout << "Constructor Is Called" << endl;
        a = n;
        count++;
    }
    ~constructor()
    {
        cout << "Destructor Is Called!" << endl;
        count--;
    }
    void display()
    {
        cout << "Entered Value of a: " << a << endl;
    }
};

int main()
{
    {
        cout << "Inside Scope:" << endl;
        constructor c1, c2(5), c3(6);
        c1.display();
        c2.display();
        cout << "No. of objects active: " << count << endl;
        cout << "Exiting Scope" << endl;
    }
    cout << "No. of objects active: " << count << endl;
    cout << "Next Scope (Main):" << endl;
    cout << "No. of objects active: " << count << endl;
    cout << "Exiting Main Scope" << endl;
}

