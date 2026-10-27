#include <iostream>
using namespace std;
class base
{
public:
    int a;
};

class derived1 : virtual public base
{
    int b;
};

class derived2 : virtual public base
{
    int c;
};

class derived3 : public derived1, public derived2
{
    public:
    void print();
    derived3(int n){
        a=n;
    }
};

void derived3::print(){
    cout<<"Value of a: "<<a;
}

int main(){
    derived3 d(5);
    d.a;
    d.print();
    return 0;
}