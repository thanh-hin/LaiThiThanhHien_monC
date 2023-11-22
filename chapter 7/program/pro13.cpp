#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int NUM_EMPLOYEES = 5;//khai bao so pahn tu trong mang hours
    int hours[NUM_EMPLOYEES];//khai bao mang nguyen hours gom  NUM_EMPLOYEES phan tu
    double payrate; //khai bao bien thuc chua luong theo gio
    double grossPay; //khai bao bien thuc chua muc luong tong
    cout << "Enter the hours worked by ";
    cout << NUM_EMPLOYEES << " employees who all\n";
    cout << "earn the same hourly rate.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {//khoi tao vong lap de nhap vao gia tri cua cac phan tu trong mang hours
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hours[index];//nhap vao gai tri phan tu index trong mang hours
    }
    cout << "Enter the hourly pay rate for all the employees: ";
    cin >> payrate;//nhap vao gia tri payrate
    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);//xuat ra man hinh mac dinh hai dua thap phan sau dau phay
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {//khoi tao vong lap de xuat ra ket qua
        grossPay = hours[index] * payrate;//gan gia tri cua bien grossPay bang cong thuc cho san
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;//xuat ra man hinh 
    }
    return 0;
}