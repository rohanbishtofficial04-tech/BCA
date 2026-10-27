#include <iostream>
using namespace std;
int main()
{
    int var = 20;
    int *ptr;
    ptr = &var;
    cout << "Value at ptr: " << ptr << endl;
    cout << "Reference address: " << &ptr << endl;
    cout << "Value at var: " << var << endl;
    cout << "Value at *ptr: " << *ptr << endl;
    *ptr = 30;
    cout << "Value at ptr: " << ptr << endl;
    cout << "Reference address: " << &ptr << endl;
    cout << "Value at var: " << var << endl;
    cout << "Value at *ptr: " << *ptr << endl;
    return 0;
}