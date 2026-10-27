#include<iostream>
using namespace std;
class demo{
    private:
    static int a;
    public:
    demo(void);
    static void ObjectCount();
};
int demo::a;      // To Initialize An Data Member Inside Private Access Specifier :-  DataMember_DataType  Class_Name  S.R.O(: :)  Variable_Name
demo::demo(void){
    a++;
}
void demo::ObjectCount(){
    cout<<"No. Of Objects Active: "<<a<<endl;
}
int main(){
    demo d1,d2,d3;
    demo::ObjectCount();
    return 0;
}