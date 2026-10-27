#include<iostream>
using namespace std;
class base{
    public:
    int base_var;
    void virtual display(){
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
    derived* q=&d;
    p=&d;
    p->base_var=10;
    q->derived_var=20;
    p->display();     // if you create a base class pointer and instead of pointing it to a base class object, 
                      //you points it to the derived class object, you'll not get any error but the behaviour of that pointer will not be as we expected,
                      //even you pointed it to a derived class object, it behaves like it's pointed to a base class object,
                      //i.e you can only access the members inside the base class, not the derived class.
                      // you can use virtual keyword to override this behaviour
                      //just use virtual keyword before the base class function keyword,then if you'll call display function from a base class pointer,
                      //the derived class display function will be called.
    return 0;
}

/*Rules For Creating Virtual Function:

1. They Can't Be Static.
2. They Are Accessed By Object Pointers.
3. Virtual Friend Can Be A Friend Of Another Class.
4. A Virtual Function In A Base Class Might Not Be Used.
5. If A Virtual Function Is Defined In A Base Class, There Is No Necessity Of Redefining It In The Derived Class
*/
