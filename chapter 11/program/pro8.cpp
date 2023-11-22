#include <bits/stdc++.h>
using namespace std;

//khai báo struct
struct Student
{
    string name;
    int idNum;
    int creditHours;
    double gpa;
};

void getData(Student *); // khai báo hàm

int main()
{
    Student freshman;//tạo cấu trúc Student có tên freshman
    // nhập dữ liệu học sinh
    cout << "Enter the following student data:\n";
    getData(&freshman);//gọi hàm getData
    // Truyền địa chỉ của sinh viên năm nhất
    cout << "\nHere is the student data you entered:\n";
    // Bây giờ hiển thị dữ liệu được lưu trữ ở freshman
    cout << setprecision(3);//formatting
    cout << "Name: " << freshman.name << endl;
    cout << "ID Number: " << freshman.idNum << endl;
    cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "GPA: " << freshman.gpa << endl;
    return 0;
}

//hàm nhập thông tin
void getData(Student *s)
{
    // nhập tên
    cout << "Student name: ";
    getline(cin, s->name);
    // nhập mssv
    cout << "Student ID Number: ";
    cin >> s->idNum;
    // Nhận số giờ tín chỉ đã đăng ký
    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;
    // nhập gpa
    cout << "Current GPA: ";
    cin >> s->gpa;
}