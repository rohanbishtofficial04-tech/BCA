#include<iostream>
using namespace std;
class demo
{
    private:
    int a;
    static int b;
    public:
    demo(void);
    void show();
};
int demo::b;
void demo::show(){
    b++;
    cout<<"Non Static Variable: "<<a<<endl;
    cout<<"Static Variable: "<<b<<endl;
}
demo::demo(void){
    a=10;
}
int main(){
    demo d1,d2;
    d1.show();
    d2.show();
    return 0;
}