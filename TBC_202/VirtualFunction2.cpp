#include <iostream>
using namespace std;
class tutorial
{
protected:
    string title;
    float rating;

public:
    tutorial(string s, float r)
    {
        title = s;
        rating = r;
    }
    void virtual display() {} // if you don't write virtual keyword before function name, then the base class function will be called
};

class videotutorial : public tutorial
{
    float vidlen;

public:
    videotutorial(string s, float r, int l) : tutorial(s, r)
    {
        vidlen = l;
    }
    void display()
    {
        cout << "Title Of Video is: " << title << endl;
        cout << "Rating Of Video is: " << rating << endl;
        cout << "Duration Of Video is: " << vidlen << " minutes" << endl;
    }
};

class texttutorial : public tutorial
{
    int words;

public:
    texttutorial(string s, float r, int l) : tutorial(s, r)
    {
        words = l;
    }
    void display()
    {
        cout << "Title Of Text Tutorial is: " << title << endl;
        cout << "Rating Of Text Tutorial is: " << rating << endl;
        cout << "Length Of text Tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    videotutorial v("First Video Tutorial", 4.5, 6.5);
    texttutorial t("First Text Tutorial", 4.9, 106);
    tutorial *p[2];
    p[0] = &v;
    p[1] = &t;
    p[0]->display();
    p[1]->display();
    return 0;
}

/*Rules For Creating Virtual Function:

1. They Can't Be Static.
2. They Are Accessed By Object Pointers.
3. Virtual Friend Can Be A Friend Of Another Class.
4. A Virtual Function In A Base Class Might Not Be Used.
5. If A Virtual Function Is Defined In A Base Class, There Is No Necessity Of Redefining It In The Derived Class.
i.e in this code if i remove the definition of display() in derived class videotutorial it will call the base class virtual function automatically,
if it don't find the definition of display function inside derived class.
*/
