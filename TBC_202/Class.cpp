#include<iostream>
using namespace std;
class student{
    private:
    char name[20];
    int age;
    int roll_no;
    float marks;
    public:
    void getData(){
        cout<<"Enter Data:"<<endl<<endl;
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Age: "<<endl;
        cin>>age;
        cout<<"Enter Roll No.: "<<endl;
        cin>>roll_no;
        cout<<"Enter Marks: "<<endl;
        cin>>marks;
    }
    void putData(){
        cout<<"Entered Data:"<<endl<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No.: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student student1,student2;
    student1.getData();
    student2.getData();
    student1.putData();
    student2.putData();
    return 0;
}