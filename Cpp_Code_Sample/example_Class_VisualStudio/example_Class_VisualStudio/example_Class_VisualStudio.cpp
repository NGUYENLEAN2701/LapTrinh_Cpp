#include "Student.h"
int main()
{

    Student sv1("Nguyen Le An");
    Student sv2;
    string ten;
    cin >> ten;
    Student sv3(ten);


    cout << "Danh Sach Lop:" << endl;
    cout << sv1.Getname() << endl;
    cout << sv2.Getname() << endl;
    cout << sv3.Getname() << endl;

    return 0;
}
