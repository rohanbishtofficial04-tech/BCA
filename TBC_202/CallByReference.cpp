#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"Value of a and b before swapping: "<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"Value of a and b after swapping: "<<a<<" and "<<b;
    return 0;
}