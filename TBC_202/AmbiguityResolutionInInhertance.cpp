#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"Hello!"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"Hiya!"<<endl;
    }
    void say(){
        cout<<"How's everthing goin' !"<<endl;
    }
};

class derived : public base1, public base2{
    public:
    void greet(){
        //base1::greet();   // this resolves the ambiguity error, since we defined that if greet() is called from derived class, the derived class will use the function of base1 class or base2 class
    }
};

class derived2 : public base2{
    public:
    void say(){
        cout<<"How're You!"<<endl; // if there are two functions with same name inside the base and derived class, 
                                  //and if you create a derived class object and call that function which has a same name,
                                  //the base class function get override by the derived class function, i.e the derived class function will be called.
    }
};

int main(){
    base1 b1;
    b1.greet();

    base2 b2;
    b2.greet();

    derived d1;
    d1.greet();

    base2 b;
    b.say();

    derived2 d2;
    d2.say();
    return 0;
}