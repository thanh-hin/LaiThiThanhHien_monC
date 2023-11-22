#include <bits/stdc++.h>
using namespace std;

struct EmployeePay//khai báo struct
{
    //khai báo biến
    string name;// tên nhân viên
    int empNum;// số của nhân viên
    double payRate; //mức lương hàng giờ
    double hours;//số giờ làm việc
    double grossPay; // tổng lương
};

int main()
{
    //tạo 2 cấu trúc tên employee1 và employee2
    EmployeePay employee1 = {"Betty Ross", 141, 18.75};
    EmployeePay employee2 = {"Jill Sandburg", 142, 17.50};
    cout << fixed << showpoint << setprecision(2);//formatting
    // tính lương cho nhân viên 1
    cout << "Name: " << employee1.name << endl;//nhập tên
    cout << "Employee Number: " << employee1.empNum << endl;//nhập số của nhân viên
    cout << "Enter the hours worked by this employee: ";
    cin >> employee1.hours;//nhậpsố giờ làm
    employee1.grossPay = employee1.hours * employee1.payRate;//tính lương
    cout << "Gross Pay: " << employee1.grossPay << endl << endl;//hiển thị lương
    // tính lương cho nhân viên 2
    cout << "Name: " << employee2.name << endl;//nhập tên
    cout << "Employee Number: " << employee2.empNum << endl;//nhập số của nhân viên
    cout << "Enter the hours worked by this employee: ";
    cin >> employee2.hours;//nhập số giờ làm việc
    employee2.grossPay = employee2.hours * employee2.payRate;//tính lương
    cout << "Gross Pay: " << employee2.grossPay << endl;//hiển thị lương
    return 0;
}