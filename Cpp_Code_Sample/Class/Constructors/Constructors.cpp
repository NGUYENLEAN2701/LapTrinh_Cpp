#include <iostream>
using namespace std;

class myClass
{
public:
    myClass(string nm = "no_name")
    {
        setName(nm);
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    myClass ob1("David");
    myClass ob2;
    cout << ob1.getName() << endl;
    cout << ob2.getName() << endl;

    ob2.setName("John");
    cout << ob2.getName() << endl;
}