#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student
{
public:
    Student(string name, int age = 18);
    ~Student();
    string Getname();
    void SetAge(int val);
    int GetAge();
protected:
    int s_age;
private:
    const string const_name;
};

#endif // STUDENT_H
