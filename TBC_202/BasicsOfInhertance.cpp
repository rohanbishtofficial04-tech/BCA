#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(){}
    Employee(int n)
    {
        id = n;
        salary = 3400;
    }
};

// Derived Class Syntax
// class Derived_Class_Name : Visibility Mode Base_Class_Name
/*Note:
1. By Default the visibility mode is private.
2. Public Visibility Mode:  public member of the base class becomes public in the derived class.
3. Private Visibility Mode: public men=mber of the class becomes private in the derived class.
4. Private member in the class will be private, you can't inherit that.
*/

class Programmer : Employee
{
public:
    int languageskills;
    Programmer(int p)
    {
        id = p;
        languageskills = 9;
    }
    void getData()
    {
        cout << id << endl; // since id is public in base class
    }
};

int main()
{
    Employee emp1(1), emp2(2);
    cout << "" << emp1.salary << endl;
    cout << "" << emp2.salary << endl;

    Programmer p(10);
    cout << "" << p.languageskills << endl;
    // cout<<""<<p.salary;          since we use private visibility mode, therefore the members inside the base class are private, we can access them by using public visibilty mode.
    p.getData();
    return 0;
}