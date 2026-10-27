#include<iostream>
using namespace std;
typedef class student{
    private:
    char name[20];
    int age;
    int roll_no;
    float marks;
    public:
    void getData(){
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
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No.: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    static void average(int n,student arr[]){
        float avg=0;
        for(int i=0;i<n;i++){
            avg=(avg+arr[i].age);
        }
        avg=avg/n;
        cout<<endl<<"Average Age: "<<avg;
    }
}students;
int main(){
    int n;
    cout<<"Enter No. of Students: ";
    cin>>n;
    students arr[n];
    for(int i=0;i<n;i++){
        cout<<endl<<"Enter Student"<<" "<<i+1<<" Info:"<<endl;
        arr[i].getData();
    }
    for(int i=0;i<n;i++){
        cout<<endl<<"Entered Data Of Student"<<" "<<i+1<<":"<<endl;
        arr[i].putData();
    }
    student::average(n,arr);
    return 0;
}