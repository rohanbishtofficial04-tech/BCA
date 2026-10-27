#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    static int a;
    string secret="I Am Secret";
    public:
    student(void);
    friend void secret(student);
};
int student::a;  
student::student(void){
    a++;
}
void secret(student object){
    cout<<"Student "<<student::a<<" Secret: "<<object.secret<<" "<<student::a<<endl;
}

int main(){
    student std1;
    secret(std1);
    student std2;
    secret(std2);
    return 0;
}