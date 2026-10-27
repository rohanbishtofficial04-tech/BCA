#include <iostream>
using namespace std;
class shop
{
private:
    int itemId[10];
    int itemPrice[10];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void shop::setPrice()
{
    cout << "Enter ID of your item no. " << counter + 1 << ": " << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
    return 0;
}