#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    // demo& setData(int a){
    void setData(int a)
    {
        this->a = a;
        // return *this
    }
    //}
    void getData(){
        cout<<"Value Of a: "<<a<<endl;
    }
};

int main(){
    demo d;
    d.setData(5);
    d.getData();
    return 0;
}