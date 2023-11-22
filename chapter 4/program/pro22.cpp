#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const double PAY_RATE = 50.0; // mức lương hàng giờ
    const int MIN_HOURS = 5; // số giờ tối thiểu
    double hours,
           charges;
    //nhập giờ làm việc
    cout << "How many hours were worked? ";
    cin >> hours;
    // xác định số giờ .
    hours = hours < MIN_HOURS ? MIN_HOURS : hours;//toán tử 3 ngôi
    // tính và hiển thị tiền lương
    charges = PAY_RATE * hours;
    cout << fixed << showpoint << setprecision(2)
         << "The charges are $" << charges << endl;
    return 0;
}