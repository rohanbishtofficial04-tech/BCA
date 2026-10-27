#include<iostream>
using namespace std;
void si(float p,float t,float r=7.5){
    float si;
    si=(p*r*t)/100;
    cout<<"S.I: "<<si;
}
int main(){
    float a,b;
   cout<<"Enter Principle"<<endl;
    cin>>a;
    cout<<"Enter Time"<<endl;
    cin>>b;
    si(a,b);
}