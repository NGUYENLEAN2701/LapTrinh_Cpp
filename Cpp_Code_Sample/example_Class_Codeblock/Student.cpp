#include "Student.h"
Student::Student(string name)
{
    //ctor
    Setname(name);
}

Student::~Student()
{
    //dtor
    cout <<"Bye bye "  << Getname() << " !" << endl;
}
