#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int NUM_EMPLOYEES = 5;//khai bao phan tu cua mang hours
    int hours[NUM_EMPLOYEES]; //khai bao mang hours gom NUM_EMPLOYEES phan tu de chua so gio lam viec
    double payRate[NUM_EMPLOYEES];//khai bao mang thuc payRate gom NUM_EMPLOYEE phan tu de muc luong
    // Input the hours worked and the hourly pay rate.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their\n" << "hourly pay rates.\n"; //xuat ra amn hinh cau dan
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {   //khoi tao vong lap de nhap vao so gio lam viec cua tung nhan vien
        cout << "Hours worked by employee #" << (index+1) << ": ";
        cin >> hours[index];//nhap vao so gio lam viec cua nhan vien thu index trong mang hours
        cout << "Hourly pay rate for employee #" << (index+1) << ": ";
        cin >> payRate[index];//nhap vao muc luong trong mot gio cua nhan vien thu index trong mang hours
    }
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);//mac dinh hai so thap phan sau dau phay
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        double grossPay = hours[index] * payRate[index];//khai bao va gan gia tri cho bien thuc grossPay bang cong thuc cho san
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;//xuat ra mang hinh so luong
    }
    return 0;
}