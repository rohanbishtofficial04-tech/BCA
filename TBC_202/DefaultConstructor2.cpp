#include<iostream>
using namespace std;
class circle{
    private:
    float pi,r,a;
    public:
    circle(void);
    void area(){
        cout<<"Enter Radius: "<<endl;
        cin>>r;
        a=pi*r*r;
        cout<<"Area: "<<a<<endl;
    }
};
circle :: circle(void){
    pi=3.14;
}
int main(){
    circle c1,c2;
    c1.area();
    c2.area();
    return 0;
}