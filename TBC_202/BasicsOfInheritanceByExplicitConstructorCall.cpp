#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
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
3. Private Visibility Mode: public member of the class becomes private in the derived class.
4. Private member in the class will be private, you can't inherit that.
*/

class Programmer : public Employee
{
public:
    int languageskills;
    Programmer(int p) : Employee(p)
    {
        languageskills = 9;
    }
    void getData()
    {
        cout << id << endl;
        cout<<salary<<endl;
        cout<<languageskills<<endl;  // since id is public in base class
    }
};

int main()
{
    Programmer p1(10),p2(20);
    // cout<<""<<p.salary;          since we use private visibility mode, therefore the members inside the base class are private, we can access them by using public visibilty mode.
    p1.getData();
    p2.getData();
    return 0;
}