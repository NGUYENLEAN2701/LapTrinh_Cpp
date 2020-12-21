#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student
{
public:
    Student(string name = "no_name");
    virtual ~Student();

    string Getname()
    {
        return s_name;
    }
    void Setname(string val)
    {
        s_name = val;
    }

protected:

private:
    string s_name;
};

#endif // STUDENT_H
