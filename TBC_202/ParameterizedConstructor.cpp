#include<iostream>
using namespace std;
class constructor{
    private:
    int a,b;
    public:
    constructor(int,int);
    void print(){
        cout<<" "<<a<<" "<<b<<endl;
    }
};
constructor :: constructor(int p,int q){
    a=p;
    b=q;
}
int main(){
    constructor c1(2,9),c2(3,6);  //Implicit Call
    c1.print();
    c2.print();
    constructor c3 = constructor(7,8);  //Explicit Call
    c3.print();
    return 0;
}