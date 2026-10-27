#include<iostream>
using namespace std;
int main(){
    float* ptr=new float(50.5);
    cout<<"Value inside dynamically allocated memory: "<<*ptr<<endl;
    cout<<"Address of dynamic allocated memory: "<<ptr<<endl;
    cout<<"Reference address: "<<&ptr<<endl;
    delete ptr;
    cout<<"Value inside dynamically allocated memory after deallocation: "<<*ptr<<endl;
    cout<<"Address of dynamic allocated memory after deallocation: "<<ptr<<endl;
    cout<<"Reference address after deallocation: "<<&ptr<<endl;
    return 0;
}