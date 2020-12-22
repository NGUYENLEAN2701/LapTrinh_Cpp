#include "Student.h"
Student::Student(string name,int age)
    :const_name(name)
{
    SetAge(age);
    cout << Getname() <<" "<< GetAge() <<endl;
}
Student::~Student()
{
    cout <<"Bye bye "  << Getname() << " !" << endl;
}
string Student::Getname()
{
    return const_name;
}
void Student::SetAge(int age)
{
    s_age = age;
}
int Student::GetAge()
{
    return s_age;
}
