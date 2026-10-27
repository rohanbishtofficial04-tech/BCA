#include<iostream>
using namespace std;
int area(int s){
    return s*s;
}
int inline area(int l,int b){
    return l*b;
}
int main(){
    int a;
    a=area(5);
    cout<<"Area of square: "<<a<<endl;
    a=area(5,7);
    cout<<"Area of rectangle: "<<a;
    return 0;
}