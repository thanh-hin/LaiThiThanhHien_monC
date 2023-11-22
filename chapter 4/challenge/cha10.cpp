#include <bits/stdc++.h>
using namespace std;

int main()//hàm chính
{
    // khai báo biến
    int year, //năm
        month;//tháng
    // nhập tháng, năm
    cout << "Enter the month (1 - 12): ";
    cin >> month;
    cout << "Enter the year (up to 9000): "; 
    cin >> year;
    // xác thực đầu vào của năm
    if (year >= 0 && year <= 9000)
    {
        // xác định số ngày của các tháng
        switch (month)
        {
            //các tháng có 31 ngày
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "31 days";
                break;
            //các tháng có 30 ngày
            case 4:
            case 6:
            case 9:
            case 11:
                cout << "30 days";
                break;
            //trường hợp tháng 2
            case 2:
                // xác định năm nhuận
                //hiển thị số ngày của tháng 2 năm đó 
                if (year % 100 == 0)
                {
                    if (year % 400 == 0) 
                        cout << "29 days" << endl;
                    else
                        cout << "28 days" << endl;
                }
                else if (year % 100 != 0) 
                {
                    if (year % 4 == 0)
                        cout << "29 days" << endl;
                    else
                        cout << "28 days" << endl;
                }
                break;

            default://thông báo lỗi tháng 
                cout << "Invalid month. Rerun program. Try again." << endl;
        }
    }
    else // báo lỗi năm
    {
        cout << "Invalid year. Rerun program. Try again." << endl;
    }
    return 0;
}