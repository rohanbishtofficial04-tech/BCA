#include<iostream>
using namespace std;
class constructor{
    private:
    int a,b;
    public:
    constructor(void);
    void print(){
        cout<<" "<<a<<" "<<b<<endl;
    }
};
constructor :: constructor(void){
    a=2,b=9;
}
int main(){
    constructor c1,c2;
    c1.print();
    c2.print();
    return 0;
}