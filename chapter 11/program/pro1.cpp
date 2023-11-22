#include <bits/stdc++.h>
using namespace std;

//khai báo struct
struct PayRoll
{
	//khai báo biến
	int empNumber;// Số nhân viên
	string name;// tên nhân viên
	double hours;// số giờ làm việc
	double payRate;// Mức lương hàng giờ
	double grossPay; // Tổng mức lương
};

int main()//hàm chính
{
	//tạo cấu trúc PayRoll 
	PayRoll employee; // nhân viên là một cấu trúc PayRoll
	// nhập số nhân viên
	cout << "Enter the employee's number: ";
	cin >> employee.empNumber;
	// nhận tên nhân viên
	cout << "Enter the employee's name: ";
	cin.ignore(); // bỏ qua kí tự "\n " bị dư
	getline(cin, employee.name);
	// nhập số giờ làm việc
	cout << "How many hours did the employee work? ";
	cin >> employee.hours;
	// nhập mưc sluonwg hàng giờ
	cout << "What is the employee's hourly payRate? ";
	cin >> employee.payRate;
	// tính tổng lương
	employee.grossPay = employee.hours * employee.payRate;
	// hiển thị dữ liệu của nhân viên
	cout << "Here is the employee's payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << "Hourly payRate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);//formatting
	cout << "Gross Pay: $" << employee.grossPay << endl;
	return 0;
}
