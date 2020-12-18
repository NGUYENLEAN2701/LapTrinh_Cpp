#include <iostream>

using namespace std;

class Student
{

private:
    int age;

public:
    Student(int a)
    {

        setAge(a);
    }

    void setAge(int a)
    {

        age = a;
    }

    int getAge()
    {

        return age;
    }
};

int main()
{
    Student SV1(18);
    SV1.setAge(22);
    cout << SV1.getAge() << endl;
    return 0;
}