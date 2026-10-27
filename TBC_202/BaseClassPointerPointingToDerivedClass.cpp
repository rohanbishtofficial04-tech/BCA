#include<iostream>
using namespace std;
class base{
    public:
    int base_var;
    void display(){
        cout<<"Value Of base_var of class base: "<<base_var<<endl;
    }
};

class derived:public base{
    public:
    int derived_var;
    void display(){
        cout<<"Value Of base_var of class base: "<<base_var<<endl;
        cout<<"Value Of derived_var of class derived: "<<derived_var<<endl;
    }
};
int main(){
    base b;
    base* p=&b;
    p->base_var=10;
    derived d;
    p=&d;
    p->base_var=10; 
    p->display();     // if you create a base class pointer and instead of pointing it to a base class object, 
                      //you points it to the derived class object, you'll not get any error but the behaviour of that pointer will not be as we expected,
                      //even you pointed it to a derived class object, it behaves like it's pointed to a base class object,
                      //i.e you can only access the members inside the base class, not the derived class.
    return 0;
}