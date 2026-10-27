#include<iostream>
using namespace std;
class area{
    private:
    int l,b,a;
    public:
    area(int,int);
    void print(){
        cout<<"Area: "<<a<<endl;
    }
};
area :: area(int p,int q){
    l=p;
    b=q;
    a=l*b;
}
int main(){
    area c1(3,9),c2(3,6);
    c1.print();
    c2.print();
    return 0;
}