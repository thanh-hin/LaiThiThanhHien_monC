#include <bits/stdc++.h>
using namespace std;

// hằng số toàn cục
const double PAY_RATE = 22.55;// mức lương hàng giờ
const double BASE_HOURS = 40.0; // số giờ làm cơ bản
const double OT_MULTIPLIER = 1.5; // hệ số tăng ca

//khai báo hàm
double getBasePay(double);
double getOvertimePay(double);

int main()//hàm chính
{
    //khai báo biến
    double hours,// số giờ làm việc
            basePay,// Lương cơ bản
            overtime = 0.0, //Lương làm tăng ca
            totalPay;// Tổng lương
    // nhập số giờ làm việc
    cout << "How many hours did you work? ";
    cin >> hours;
    // nhận số tiền lương cơ bản 
    basePay = getBasePay(hours);//gọi hàm getBasePay để nhận số tiền lương cơ bản
    // Nhận tiền làm thêm giờ nếu có
    if (hours > BASE_HOURS)
        //số giờ làm việc lớn hơn giờ làm cơ bản mới có lương tăng ca
        overtime = getOvertimePay(hours);//gọi hàm để nhận lương tăng ca
    // tính tổng lương
    totalPay = basePay + overtime;
    cout << setprecision(2) << fixed << showpoint;//formatting
    // hiển thị tiền lương
    cout << "Base pay: $" << basePay << endl
        << "Overtime pay $" << overtime << endl
        << "Total pay $" << totalPay << endl;
    return 0;
}

//hàm tính lương cơ bản
double getBasePay(double hoursWorked)
{
    double basePay; // khai báo biến
    if (hoursWorked > BASE_HOURS)
        //nếu số giờ làm việc lớn hơn số giờ cơ bản
        //thì lương cơ bản sẽ tính theo ct dưới
        basePay = BASE_HOURS * PAY_RATE;
    else
        //ngược lại
        //thì lương cơ bản tính theo ct dưới
        basePay = hoursWorked * PAY_RATE;
    return basePay;//trả giá trị lương cơ bản
}

//hàm tính lương tăng ca
double getOvertimePay(double hoursWorked)
{
    double overtimePay; //khai báo biến 
    // xác định lương tăng ca
    if (hoursWorked > BASE_HOURS)
    {
        //nếu số giờ làm việc lớn hơn số giờ cơ bản thì có lương tăng ca
        //và lương tăng ca được tính theo ct dưới
        overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
    }
    else
        //ngược lại ko có lương tăng ca
        overtimePay = 0.0;
    return overtimePay;//trả giá trị tiền lương tăng ca
}