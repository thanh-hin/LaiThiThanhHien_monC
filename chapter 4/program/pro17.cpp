#include <bits/stdc++.h>
using namespace std;
int main()//chương trình chính
{
    //khai báo biến
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    double income; // thu nhập hàng năm
    int years;//số năm làm việc hiện tại
    // nhập thu nhập hàng năm
    cout << "What is your annual income? ";
    cin >> income;
    // nhập số năm đã làm công việc hiện tại 
    cout << "How many years have you worked at "
         << "your current job? ";
    cin >> years;
    // xác định khoản vay của người dùng
    if (!(income >= MIN_INCOME || years > MIN_YEARS))// dấu ! là phủ định
    {
        cout << "You must earn at least $"
             << MIN_INCOME << " or have been "
             << "employed more than " << MIN_YEARS
             << " years.\n";
    }
    else//các trường hợp ngược lại
        cout << "You qualify.\n";
    return 0;
}