#include <bits/stdc++.h>
using namespace std;

//Cấu trúc Date chứa dữ liệu về một ngày
struct Date
{
    int month;
    int day;
    int year;
 };
 // Cấu trúc Place chứa một địa chỉ vật lý
struct Place 
{
    string address;
    string city;
    string state;
    string zip;
};
// Cấu trúc StaffInfo chứa dữ liệu của nhân viên
struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthDate;//tạo cấu trúc Date có tên birthDate
    Place residence;//tạo cấu trúc Place có tên residence
};
int main()
{
    EmployeeInfo manager;//tạo cấu trúc EmployeeInfo có tên manager
    // nhập tên người quản lý và mã số nhân viên
    cout << "Enter the manager's name: ";
    getline(cin, manager.name);
    cout << "Enter the manager's employee number: ";
    cin >> manager.employeeNumber;
    // nhập ngày sinh của người quản lý
    cout << "Now enter the manager's date of birth.\n";
    cout << "Month (up to 2 digits): ";
    cin >> manager.birthDate.month;
    cout << "Day (up to 2 digits): ";
    cin >> manager.birthDate.day;
    cout << "Year: ";
    cin >> manager.birthDate.year;
    cin.ignore(); // bỏ qua kí tự dòng mới "\n"
    // nhập thông tin cư trú của người quản lý
    cout << "Enter the manager's street address: ";
    getline(cin, manager.residence.address);
    cout << "City: ";
    getline(cin, manager.residence.city);
    cout << "State: ";
    getline(cin, manager.residence.state);
    cout << "ZIP Code: ";
    getline(cin, manager.residence.zip);
    // hiển thị thông tin 
    cout << "\nHere is the manager's information:\n";
    cout << manager.name << endl;
    cout << "Employee number " << manager.employeeNumber << endl;
    cout << "Date of birth: ";
    cout << manager.birthDate.month << "-";
    cout << manager.birthDate.day << "-";
    cout << manager.birthDate.year << endl;
    cout << "Place of residence:\n";
    cout << manager.residence.address << endl;
    cout << manager.residence.city << ", ";
    cout << manager.residence.state << " ";
    cout << manager.residence.zip << endl;
    return 0;
}