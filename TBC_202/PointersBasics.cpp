#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    delete ptr;

    int *p = new int(10);
    float *q = new float(11.9);
    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *q << endl;
    delete p,q;

    cout<<"Array Before deletion: "<<endl;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    delete arr;
    
    cout<<endl<<"After Deletion: "<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}