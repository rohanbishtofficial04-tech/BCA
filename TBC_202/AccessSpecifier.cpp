#include<iostream>
using namespace std;
class demo{
    private:
      int a; //data member
    public:
      void get(){ //member function
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
    void put(){
        cout<<"Entered value of a"<<endl<<a<<endl;
    }
};
int main(){
    demo d1,d2,d3;
    d1.get();
    d2.get();
    d3.get();
    d1.put();
    d2.put();
    d3.put();
}
