#include<iostream>
using namespace std;
class area{
    private:
    int s,l,b,a;
    public:
    area(int);
    area(int,int);
    void print(){
        cout<<" "<<a<<endl;
    }
};
area :: area(int p){
    s=p;
    a=s*s;
}
area :: area(int q,int r){
    l=q;
    b=r;
    a=l*b;
}
int main(){
    area a1(5),a2(5,6);
    a1.print();
    a2.print();
    return 0;
}