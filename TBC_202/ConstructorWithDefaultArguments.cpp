#include <iostream>
using namespace std;
class demo
{
private:
    int p, t, si;

public:
    demo(void);
    demo(int a, int b, int c);
    void simple()
    {
        cout << "S.I: " << si<<endl;
    }
};
demo::demo(void){};
demo::demo(int p, int t, int r = 7.5)
{
    si = (p * r * t) / 100;
}
int main(){
    demo d1(100,2),d2(200,1);
    d1.simple();
    d2.simple();
}