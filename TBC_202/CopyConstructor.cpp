#include<iostream>
using namespace std;
class constructor{
    private:
    int a;
    public:
    void print(){
        cout<<"value of a: "<<a<<endl;
    }
    constructor(){
        a=0;
    }
    constructor(int p){
        a=p;
    }
    constructor(constructor &obj){
        cout<<"Copy Constructor Is Called!"<<endl; //If a Copy Constructor is not created by the user,a default Copy Constructor is created automatically by the compiler.
        a=obj.a;                                   //So if You remove this constructor,the code will run without any error.
    }
};
int main(){
    constructor x,y,z(5),z2;
    x.print();
    y.print();
    z.print();

    constructor z1(z); //copy constructor invoked
    z1.print();
    // Copy Constructor didn't get invoked if object is already created and we use assignment operator to call the Copy Constructor
    z2=z; //copy constructor didn't invoked

    constructor z3=z;
    z3.print();
}